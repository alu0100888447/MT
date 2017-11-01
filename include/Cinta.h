//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_CINTA_H
#define M_T_CINTA_H

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

class Cinta {
private:
    string cinta_;
    int cabezal_;
public:
    Cinta();
    Cinta(string cinta, int cabezal);
    Cinta(const Cinta &cp);
    virtual ~Cinta();
    string leer();
    void escribir(string caracter);
    void derecha();
    void izquierda();

    const string &getCinta_() const;
    void setCinta_(const string &cinta_);
    int getCabezal_() const;
    void setCabezal_(int cabezal_);

    Cinta& operator=(const Cinta &cp);
    bool operator==(const Cinta &cp);

    friend ostream& operator<<(ostream &out, const Cinta &cp);
};


#endif //M_T_CINTA_H
