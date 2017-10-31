//
// Created by izm20 on 27/10/17.
//

#include "../include/MT.h"

MT::MT() {
    estadoInicial_ = "";
    blanco_ = "$";
}

MT::MT(vector<Estado> estados, vector<string> alfabetoCinta, vector<string> alfabetoEntrada, string estadoInicial,
       string blanco, vector<string> conjuntoFinal) {
    estados_ = estados;
    alfabetoCinta_ = alfabetoCinta;
    alfabetoEntrada_ = alfabetoEntrada;
    estadoInicial_ = estadoInicial;
    blanco_ = blanco;
    conjuntoFinal_ = conjuntoFinal;
}

MT::MT(const MT &cp) {
    estados_ = cp.getEstados_();
    alfabetoCinta_ = cp.getAlfabetoCinta_();
    alfabetoEntrada_ = cp.getAlfabetoEntrada_();
    estadoInicial_ = cp.getEstadoInicial_();
    blanco_ = cp.getBlanco_();
    conjuntoFinal_ = cp.getConjuntoFinal_();
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

MT &MT::operator=(const MT &cp) {
    estados_ = cp.getEstados_();
    alfabetoCinta_ = cp.getAlfabetoCinta_();
    alfabetoEntrada_ = cp.getAlfabetoEntrada_();
    estadoInicial_ = cp.getEstadoInicial_();
    blanco_ = cp.getBlanco_();
    conjuntoFinal_ = cp.getConjuntoFinal_();
    return *this;
}

bool MT::operator==(const MT &cp) {
    return false;
}

ostream &operator<<(ostream &out, const MT &cp) {
    out << "Estados: " << endl;
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
    out << endl;
    return out;
}
