//
// Created by izm20 on 27/10/17.
//

#include "../include/Cinta.h"

Cinta::Cinta() {
    cinta_ = "$";
    cabezal_ = 0;
}

Cinta::Cinta(string cinta, int cabezal) {
    cinta_ = "$";
    cinta_ += cinta + "$";
    cabezal_ = cabezal;
}

Cinta::Cinta(const Cinta &cp) {
    cinta_ = cp.getCinta_();
    cabezal_ = cp.getCabezal_();
}

Cinta::~Cinta() {
    cinta_.clear();
    cabezal_ = -1;
}

const string &Cinta::getCinta_() const {
    return cinta_;
}

void Cinta::setCinta_(const string &cinta_) {
    Cinta::cinta_ = cinta_;
}

int Cinta::getCabezal_() const {
    return cabezal_;
}

void Cinta::setCabezal_(int cabezal_) {
    Cinta::cabezal_ = cabezal_;
}

Cinta &Cinta::operator=(const Cinta &cp) {
    cinta_ = cp.getCinta_();
    cabezal_ = cp.getCabezal_();
    return *this;
}

bool Cinta::operator==(const Cinta &cp) {
    if (cinta_ == cp.getCinta_() && cabezal_ == cp.getCabezal_())
        return true;
    return false;
}

ostream &operator<<(ostream &out, const Cinta &cp) {
    out << "Cinta: " << cp.getCinta_() << " | Cabezal: " << cp.getCabezal_() << endl;
    return out;
}

