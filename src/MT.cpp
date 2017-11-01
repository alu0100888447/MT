//
// Created by izm20 on 27/10/17.
//

#include "../include/MT.h"

MT::MT() {
    estadoInicial_ = "";
    blanco_ = ".";
}

MT::MT(vector<Estado> estados, vector<string> alfabetoCinta, vector<string> alfabetoEntrada, string estadoInicial,
       string blanco, vector<string> conjuntoFinal, Cinta Cadena) {
    estados_ = estados;
    alfabetoCinta_ = alfabetoCinta;
    alfabetoEntrada_ = alfabetoEntrada;
    estadoInicial_ = estadoInicial;
    blanco_ = blanco;
    conjuntoFinal_ = conjuntoFinal;
    Cadena_ = Cadena;
}

MT::MT(const MT &cp) {
    estados_ = cp.getEstados_();
    alfabetoCinta_ = cp.getAlfabetoCinta_();
    alfabetoEntrada_ = cp.getAlfabetoEntrada_();
    estadoInicial_ = cp.getEstadoInicial_();
    blanco_ = cp.getBlanco_();
    conjuntoFinal_ = cp.getConjuntoFinal_();
    Cadena_ = cp.getCadena_();
}

MT::~MT() {
    estados_.clear();
    alfabetoCinta_.clear();
    alfabetoEntrada_.clear();
    estadoInicial_.clear();
    blanco_.clear();
    conjuntoFinal_.clear();
}

void MT::leerFichero(string nombreFichero) {
    string cadena = "";
    vector <vector <string>> cadenas;
    vector <vector <string>> cadenasAux;
    ifstream fichero(nombreFichero);

    if (fichero.is_open()) {
        while (!fichero.eof()) {
            cadena.clear();
            getline(fichero, cadena);
            if (cadena[0] == '#' || cadena == "") {
                cadena.clear();
            }
            else {
                cadenas.push_back(separarCadenas(cadena));
            }
        }
        for (int i = 0; i < cadenas.size(); ++i) {
            if (i == 0 || i > 5)
                cadenasAux.push_back(cadenas[i]);
        }
        guardarEstados(cadenasAux);
        alfabetoCinta_ = cadenas[1];
        alfabetoEntrada_ = cadenas[2];
        estadoInicial_ = cadenas[3][0];
        blanco_ = cadenas[4][0];
        conjuntoFinal_ = cadenas[5];

        fichero.close();
    }
    else {
        cout << endl << "~ El fichero no se pudo abrir o no existe." << endl;
    }
}

bool MT::preAnalisis(string cadena) {
    int contador = 0;
    for (int i = 0; i < cadena.size(); ++i) {
        for (int j = 0; j < alfabetoCinta_.size(); ++j) {
            if (cadena[i] == alfabetoCinta_[j][0])
                ++contador;
        }
    }
    if (contador == cadena.size()) {
        Cinta Aux(cadena, 1);
        Cadena_ = Aux;
        return true;
    }
    else
        return false;
}

bool MT::analisis() {
    Estado EstadoAc;
    for (int i = 0; i < estados_.size(); ++i) {
        if (estadoInicial_ == estados_[i].getNombreEstado_())
            EstadoAc = estados_[i];
    }
    do {
        Transicion TransElegida = EstadoAc.buscarTransicion(Cadena_.leer());
        if (TransElegida.getEstadoSiguiente_() != "") {
            Cadena_.escribir(TransElegida.getCaracterEscrito_());
            if (TransElegida.getMovimiento_() == "R")
                Cadena_.derecha();
            else if (TransElegida.getMovimiento_() == "L")
                Cadena_.izquierda();
            for (int i = 0; i < estados_.size(); ++i) {
                if (TransElegida.getEstadoSiguiente_() == estados_[i].getNombreEstado_())
                    EstadoAc = estados_[i];
            }
        }
        else {
            for (int i = 0; i < conjuntoFinal_.size(); ++i) {
                if (EstadoAc.getNombreEstado_() == conjuntoFinal_[i])
                    return true;
            }
            return false;
        }
    } while (true);
}

void MT::guardarEstados(vector<vector<string>> estados) {
    for (int i = 0; i < estados[0].size(); ++i) {
        vector <Transicion> AuxV;
        for (int j = 1; j < estados.size(); ++j) {
            if (estados[0][i] == estados[j][0]) {
                Transicion AuxT(estados[j][2], estados[j][1], estados[j][3], estados[j][4]);
                AuxV.push_back(AuxT);
            }
        }
        Estado AuxE(estados[0][i], AuxV);
        estados_.push_back(AuxE);
    }
}

vector<string> MT::separarCadenas(string cadena) {
    vector <string> cadenas;
    string cadenaAux;
    int i = 0;
    while(i < cadena.size()) {
        if (cadena[i] != ' ') {
            cadenaAux.push_back(cadena[i]);
        }
        else {
            if (cadenaAux != "")
                cadenas.push_back(cadenaAux);
            cadenaAux.clear();
        }
        ++i;
    }
    if (cadenaAux != "")
        cadenas.push_back(cadenaAux);
    return cadenas;
}

const vector<Estado> &MT::getEstados_() const {
    return estados_;
}

void MT::setEstados_(const vector<Estado> &estados_) {
    MT::estados_ = estados_;
}

const vector<string> &MT::getAlfabetoCinta_() const {
    return alfabetoCinta_;
}

void MT::setAlfabetoCinta_(const vector<string> &alfabetoCinta_) {
    MT::alfabetoCinta_ = alfabetoCinta_;
}

const vector<string> &MT::getAlfabetoEntrada_() const {
    return alfabetoEntrada_;
}

void MT::setAlfabetoEntrada_(const vector<string> &alfabetoEntrada_) {
    MT::alfabetoEntrada_ = alfabetoEntrada_;
}

const string &MT::getEstadoInicial_() const {
    return estadoInicial_;
}

void MT::setEstadoInicial_(const string &estadoInicial_) {
    MT::estadoInicial_ = estadoInicial_;
}

const string &MT::getBlanco_() const {
    return blanco_;
}

void MT::setBlanco_(const string &blanco_) {
    MT::blanco_ = blanco_;
}

const vector<string> &MT::getConjuntoFinal_() const {
    return conjuntoFinal_;
}

void MT::setConjuntoFinal_(const vector<string> &conjuntoFinal_) {
    MT::conjuntoFinal_ = conjuntoFinal_;
}

const Cinta &MT::getCadena_() const {
    return Cadena_;
}

void MT::setCadena_(const Cinta &Cadena_) {
    MT::Cadena_ = Cadena_;
}

MT &MT::operator=(const MT &cp) {
    estados_ = cp.getEstados_();
    alfabetoCinta_ = cp.getAlfabetoCinta_();
    alfabetoEntrada_ = cp.getAlfabetoEntrada_();
    estadoInicial_ = cp.getEstadoInicial_();
    blanco_ = cp.getBlanco_();
    conjuntoFinal_ = cp.getConjuntoFinal_();
    Cadena_ = cp.getCadena_();
    return *this;
}

bool MT::operator==(const MT &cp) {
    return false;
}

ostream &operator<<(ostream &out, const MT &cp) {
    out << endl << "Estados: " << endl << endl;
    for (int i = 0; i < cp.getEstados_().size(); ++i) {
        out << cp.getEstados_()[i] << endl;
    }
    out << "Alfabeto Cinta: ";
    for (int j = 0; j < cp.getAlfabetoCinta_().size(); ++j) {
        out << cp.getAlfabetoCinta_()[j] << " | ";
    }
    out << endl << "Alfabeto Entrada: ";
    for (int k = 0; k < cp.getAlfabetoEntrada_().size(); ++k) {
        out << cp.getAlfabetoEntrada_()[k] << " | ";
    }
    out << endl << "Estado Inicial: " << cp.getEstadoInicial_() << endl;
    out << "Blanco: " << cp.getBlanco_() << endl << "Estados de Aceptacion: " ;
    for (int l = 0; l < cp.getConjuntoFinal_().size(); ++l) {
        out << cp.getConjuntoFinal_()[l] << " | ";
    }
    out << endl << cp.getCadena_();
    out << endl;
    return out;
}
