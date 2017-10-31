//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_TRANSICION_H
#define M_T_TRANSICION_H

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

class Transicion {
private:
    string estadoSiguiente_;
    string caracterLeido_;
    string caracterEscrito_;
    string movimiento_;
public:
    Transicion();
    Transicion(string estadosiguiente, string caracterLeido, string caracterEscrito, string movimiento);
    Transicion(const Transicion &cp);
    virtual ~Transicion();

    const string &getEstadoSiguiente_() const;
    void setEstadoSiguiente_(const string &estadoSiguiente_);
    const string &getCaracterLeido_() const;
    void setCaracterLeido_(const string &caracterLeido_);
    const string &getCaracterEscrito_() const;
    void setCaracterEscrito_(const string &caracterEscrito_);
    const string &getMovimiento_() const;
    void setMovimiento_(const string &movimiento_);

    Transicion& operator=(const Transicion &cp);
    bool operator==(const Transicion &cp);

    friend ostream& operator<<(ostream &out, const Transicion &cp);

};


#endif //M_T_TRANSICION_H
