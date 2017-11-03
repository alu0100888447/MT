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

/**
 * @class Transicion
 * @brief Representa una transicion de un estado de una maquina de turing.
 */
class Transicion {
private:
    string estadoSiguiente_;
    string caracterLeido_;
    string caracterEscrito_;
    string movimiento_;
public:
    /**
     * @brief Constructor por defecto.
     */
    Transicion();
    /**
     * @brief Constructor parametrizado.
     * @param estadosiguiente
     * @param caracterLeido
     * @param caracterEscrito
     * @param movimiento
     */
    Transicion(string estadosiguiente, string caracterLeido, string caracterEscrito, string movimiento);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    Transicion(const Transicion &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~Transicion();
    /**
     * @brief Getter estadoSiguiente_.
     * @return
     */
    const string &getEstadoSiguiente_() const;
    /**
     * @brief Setter estadoSiguiente_.
     * @param estadoSiguiente_
     */
    void setEstadoSiguiente_(const string &estadoSiguiente_);
    /**
     * @brief Getter caracterLeido_.
     * @return
     */
    const string &getCaracterLeido_() const;
    /**
     * @brief Setter caracterLeido_.
     * @param caracterLeido_
     */
    void setCaracterLeido_(const string &caracterLeido_);
    /**
     * @brief Getter caracterEscrito_.
     * @return
     */
    const string &getCaracterEscrito_() const;
    /**
     * @brief Setter caracterEscrito_.
     * @param caracterEscrito_
     */
    void setCaracterEscrito_(const string &caracterEscrito_);
    /**
     * @brief Getter movimiento_.
     * @return
     */
    const string &getMovimiento_() const;
    /**
     * @brief Setter movimiento_.
     * @param movimiento_
     */
    void setMovimiento_(const string &movimiento_);
    /**
     * @brief Sobrecarga del operador =.
     * @param cp
     * @return
     */
    Transicion& operator=(const Transicion &cp);
    /**
     * @brief Sobrecarga del operador ==.
     * @param cp
     * @return
     */
    bool operator==(const Transicion &cp);
    /**
     * @brief Sobrecarga del operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream& operator<<(ostream &out, const Transicion &cp);

};


#endif //M_T_TRANSICION_H
