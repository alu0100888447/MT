//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_ESTADO_H
#define M_T_ESTADO_H

#include "Transicion.h"

/**
 * @class Estado
 * @brief Representa un estado dentro de una maquina de turing.
 */
class Estado {
private:
    string nombreEstado_;
    vector <Transicion> transiciones_;
public:
    /**
     * @brief Constructor por defecto.
     */
    Estado();
    /**
     * @brief Constructor parametrizado.
     * @param nombreEstado
     * @param transiciones
     */
    Estado(string nombreEstado, vector <Transicion> transiciones);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    Estado(const Estado &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~Estado();
    /**
     * @brief Funcion que busca en el estado actual una transicion posible para el caracter leido.
     * @param caracter
     * @return
     */
    Transicion buscarTransicion(string caracter);
    /**
     * @brief Getter nombreEstado_.
     * @return
     */
    const string &getNombreEstado_() const;
    /**
     * @brief Setter nombreEstado_.
     * @param nombreEstado_
     */
    void setNombreEstado_(const string &nombreEstado_);
    /**
     * @brief Getter transiciones_.
     * @return
     */
    const vector<Transicion> &getTransiciones_() const;
    /**
     * @brief Setter transiciones_.
     * @param transiciones_
     */
    void setTransiciones_(const vector<Transicion> &transiciones_);
    /**
     * @brief Sobrecarga del operador =.
     * @param cp
     * @return
     */
    Estado& operator=(const Estado &cp);
    /**
     * @brief Sobrecarga del operador ==.
     * @param cp
     * @return
     */
    bool operator==(const Estado &cp);
    /**
     * @brief Sobrecarga del operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream& operator<<(ostream &out, const Estado &cp);

};


#endif //M_T_ESTADO_H
