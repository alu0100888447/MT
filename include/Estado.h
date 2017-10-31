//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_ESTADO_H
#define M_T_ESTADO_H

#include "Transicion.h"

class Estado {
private:
    string nombreEstado_;
    vector <Transicion> transiciones_;
public:
    Estado();
    Estado(string nombreEstado, vector <Transicion> transiciones);
    Estado(const Estado &cp);
    virtual ~Estado();

    const string &getNombreEstado_() const;
    void setNombreEstado_(const string &nombreEstado_);
    const vector<Transicion> &getTransiciones_() const;
    void setTransiciones_(const vector<Transicion> &transiciones_);

    Estado& operator=(const Estado &cp);
    bool operator==(const Estado &cp);

    friend ostream& operator<<(ostream &out, const Estado &cp);

};


#endif //M_T_ESTADO_H
