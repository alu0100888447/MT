//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_MT_H
#define M_T_MT_H

#include "Estado.h"
#include "Cinta.h"

class MT {
private:
    vector <Estado> estados_;
    vector <string> alfabetoEntrada_;
    vector <string> alfabetoCinta_;
    string estadoInicial_;
    string blanco_;
    vector <string> conjuntoFinal_;
    Cinta Cadena_;
public:
    MT();
    MT(vector<Estado> estados, vector<string> alfabetoCinta, vector<string> alfabetoEntrada, string estadoInicial,
       string blanco, vector<string> conjuntoFinal, Cinta Cadena);
    MT(const MT &cp);
    virtual ~MT();

    void leerFichero(string nombreFichero);
    bool preAnalisis(string cadena);
    bool analisis();
    void guardarEstados(vector <vector <string>> estados);
    vector <string> separarCadenas(string cadena);

    const vector<Estado> &getEstados_() const;
    void setEstados_(const vector<Estado> &estados_);
    const vector<string> &getAlfabetoEntrada_() const;
    void setAlfabetoEntrada_(const vector<string> &alfabetoEntrada_);
    const vector<string> &getAlfabetoCinta_() const;
    void setAlfabetoCinta_(const vector<string> &alfabetoCinta_);
    const string &getEstadoInicial_() const;
    void setEstadoInicial_(const string &estadoInicial_);
    const string &getBlanco_() const;
    void setBlanco_(const string &blanco_);
    const vector<string> &getConjuntoFinal_() const;
    void setConjuntoFinal_(const vector<string> &conjuntoFinal_);
    const Cinta &getCadena_() const;
    void setCadena_(const Cinta &Cadena_);

    MT& operator=(const MT &cp);
    bool operator==(const MT &cp);

    friend ostream& operator<<(ostream &out, const MT &cp);
};


#endif //M_T_MT_H
