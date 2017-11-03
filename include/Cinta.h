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

/**
 * @class Cinta
 * @brief Representa la cinta infinita de la maquina de turing.
 */
class Cinta {
private:
    string cinta_;
    int cabezal_;
public:
    /**
     * @brief Constructor por defecto.
     */
    Cinta();
    /**
     * @brief Constructor parametrizado.
     * @param cinta
     * @param cabezal
     */
    Cinta(string cinta, int cabezal);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    Cinta(const Cinta &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~Cinta();
    /**
     * @brief Funcion que devuelve el caracter leido por el cabezal.
     * @return
     */
    string leer();
    /**
     * @brief Funcion que escribe el caracter en la posicion del cabezal.
     * @param caracter
     */
    void escribir(string caracter);
    /**
     * @brief Funcion que mueve el cabezal a la derecha y comprueba si se acaba la cinta.
     */
    void derecha();
    /**
     * @brief Funcion que mueve el cabezal a la izquierda y comprueba si se acaba la cinta.
     */
    void izquierda();
    /**
     * @brief Getter cinta_.
     * @return
     */
    const string &getCinta_() const;
    /**
     * @brief Setter cinta_.
     * @param cinta_
     */
    void setCinta_(const string &cinta_);
    /**
     * @brief Getter cabezal_.
     * @return
     */
    int getCabezal_() const;
    /**
     * @brief Setter cabezal_.
     * @param cabezal_
     */
    void setCabezal_(int cabezal_);
    /**
     * @brief Sobrecarga del operador =.
     * @param cp
     * @return
     */
    Cinta& operator=(const Cinta &cp);
    /**
     * @brief Sobrecarga del operador ==.
     * @param cp
     * @return
     */
    bool operator==(const Cinta &cp);
    /**
     * @brief Sobrecarga del operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream& operator<<(ostream &out, const Cinta &cp);

};


#endif //M_T_CINTA_H
