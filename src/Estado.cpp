//
// Created by izm20 on 27/10/17.
//

#include "../include/Estado.h"

Estado::Estado() {
    nombreEstado_ = "";
}

Estado::Estado(string nombreEstado, vector<Transicion> transiciones) {
    nombreEstado_ = nombreEstado;
    transiciones_ = transiciones;
}

Estado::Estado(const Estado &cp) {
    nombreEstado_ = cp.getNombreEstado_();
    transiciones_ = cp.getTransiciones_();
}

Estado::~Estado() {
    nombreEstado_.clear();
    transiciones_.clear();
}

Transicion Estado::buscarTransicion(string caracter) {
    for (int i = 0; i < transiciones_.size(); ++i) {
        if (transiciones_[i].getCaracterLeido_() == caracter)
            return transiciones_[i];
    }
    Transicion Aux;
    return Aux;
}

const string &Estado::getNombreEstado_() const {
    return nombreEstado_;
}

void Estado::setNombreEstado_(const string &nombreEstado_) {
    Estado::nombreEstado_ = nombreEstado_;
}

const vector<Transicion> &Estado::getTransiciones_() const {
    return transiciones_;
}

void Estado::setTransiciones_(const vector<Transicion> &transiciones_) {
    Estado::transiciones_ = transiciones_;
}

Estado &Estado::operator=(const Estado &cp) {
    nombreEstado_ = cp.getNombreEstado_();
    transiciones_ = cp.getTransiciones_();
    return *this;
}

bool Estado::operator==(const Estado &cp) {
    if (nombreEstado_ == cp.getNombreEstado_() && transiciones_.size() == cp.getTransiciones_().size())
        for (int i = 0; i < transiciones_.size(); ++i) {
            if (!(transiciones_[i] == cp.getTransiciones_()[i]))
                return false;
        }
    else
        return false;
    return true;
}

ostream &operator<<(ostream &out, const Estado &cp) {
    out << "\t-- Estado: " << cp.getNombreEstado_() << endl << endl;
    for (int i = 0; i < cp.getTransiciones_().size(); ++i) {
        out << cp.getTransiciones_()[i];
    }
    out << endl;
    return out;
}
