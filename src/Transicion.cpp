//
// Created by izm20 on 27/10/17.
//

#include "../include/Transicion.h"

Transicion::Transicion() {
    estadoSiguiente_ = "";
    caracterLeido_ = "";
    caracterEscrito_ = "";
    movimiento_ = "";
}

Transicion::Transicion(string estadosiguiente, string caracterLeido, string caracterEscrito, string movimiento) {
    estadoSiguiente_ = estadosiguiente;
    caracterLeido_ = caracterLeido;
    caracterEscrito_ = caracterEscrito;
    movimiento_ = movimiento;
}

Transicion::Transicion(const Transicion &cp) {
    estadoSiguiente_ = cp.getEstadoSiguiente_();
    caracterLeido_ = cp.getCaracterLeido_();
    caracterEscrito_ = cp.getCaracterEscrito_();
    movimiento_ = cp.getMovimiento_();
}

Transicion::~Transicion() {
    estadoSiguiente_.clear();
    caracterLeido_.clear();
    caracterEscrito_.clear();
    movimiento_.clear();
}

const string &Transicion::getEstadoSiguiente_() const {
    return estadoSiguiente_;
}

void Transicion::setEstadoSiguiente_(const string &estadoSiguiente_) {
    Transicion::estadoSiguiente_ = estadoSiguiente_;
}

const string &Transicion::getCaracterLeido_() const {
    return caracterLeido_;
}

void Transicion::setCaracterLeido_(const string &caracterLeido_) {
    Transicion::caracterLeido_ = caracterLeido_;
}

const string &Transicion::getCaracterEscrito_() const {
    return caracterEscrito_;
}

void Transicion::setCaracterEscrito_(const string &caracterEscrito_) {
    Transicion::caracterEscrito_ = caracterEscrito_;
}

const string &Transicion::getMovimiento_() const {
    return movimiento_;
}

void Transicion::setMovimiento_(const string &movimiento_) {
    Transicion::movimiento_ = movimiento_;
}

Transicion &Transicion::operator=(const Transicion &cp) {
    estadoSiguiente_ = cp.getEstadoSiguiente_();
    caracterLeido_ = cp.getCaracterLeido_();
    caracterEscrito_ = cp.getCaracterEscrito_();
    movimiento_ = cp.getMovimiento_();
    return *this;
}

bool Transicion::operator==(const Transicion &cp) {
    if (estadoSiguiente_ == cp.getEstadoSiguiente_() && caracterLeido_ == cp.getCaracterLeido_() &&
            caracterEscrito_ == cp.getCaracterEscrito_() && movimiento_ == cp.getMovimiento_())
        return true;
    else
        return false;
}

ostream &operator<<(ostream &out, const Transicion &cp) {
    out << "Caracter leido: " << cp.getCaracterLeido_() << " | Caracter escrito: " << cp.getCaracterEscrito_() <<
        " | Movimiento: " << cp.getMovimiento_() << " | Estado siguiente: " << cp.getEstadoSiguiente_() << endl;
    return out;
}
