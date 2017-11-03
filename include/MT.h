//
// Created by izm20 on 27/10/17.
//

#ifndef M_T_MT_H
#define M_T_MT_H

#include "Estado.h"
#include "Cinta.h"

/**
 * @class MT
 * @brief Representa una maquina de turing con su 7-upla como atributos.
 */
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
    /**
     * @brief Constructor por defecto.
     */
    MT();
    /**
     * @brief Constructor parametrizado.
     * @param estados
     * @param alfabetoCinta
     * @param alfabetoEntrada
     * @param estadoInicial
     * @param blanco
     * @param conjuntoFinal
     * @param Cadena
     */
    MT(vector<Estado> estados, vector<string> alfabetoCinta, vector<string> alfabetoEntrada, string estadoInicial,
       string blanco, vector<string> conjuntoFinal, Cinta Cadena);
    /**
     * @brief Constructor de copia.
     * @param cp
     */
    MT(const MT &cp);
    /**
     * @brief Destructor por defecto.
     */
    virtual ~MT();
    /**
     * @brief Funcion que realiza la lectura del fichero.
     * @param nombreFichero
     * @return
     */
    bool leerFichero(string nombreFichero);
    /**
     * @brief Funcion que analiza la cadena de entrada y verifica sus caracteres.
     * @param cadena
     * @return
     */
    bool preAnalisis(string cadena);
    /**
     * @brief Funcion que realiza la traza de la maquina de turing.
     * @return
     */
    bool analisis();
    /**
     * @brief Funcion que guarda los estados y las transiciones.
     * @param estados
     * @return
     */
    bool guardarEstados(vector <vector <string>> estados);
    /**
     * @brief Funcion que separa una string en un vector de string sin espacios.
     * @param cadena
     * @return
     */
    vector <string> separarCadenas(string cadena);
    /**
     * @brief Getter estados_.
     * @return
     */
    const vector<Estado> &getEstados_() const;
    /**
     * @brief Setter estados_.
     * @param estados_
     */
    void setEstados_(const vector<Estado> &estados_);
    /**
     * @brief Getter alfabetoEntrada_.
     * @return
     */
    const vector<string> &getAlfabetoEntrada_() const;
    /**
     * @brief Setter alfabetoEntrada_.
     * @param alfabetoEntrada_
     */
    void setAlfabetoEntrada_(const vector<string> &alfabetoEntrada_);
    /**
     * @brief Getter alfabetoCinta_.
     * @return
     */
    const vector<string> &getAlfabetoCinta_() const;
    /**
     * @brief Setter alfabetoCinta_.
     * @param alfabetoCinta_
     */
    void setAlfabetoCinta_(const vector<string> &alfabetoCinta_);
    /**
     * @brief Getter estadoInicial_.
     * @return
     */
    const string &getEstadoInicial_() const;
    /**
     * @brief Setter estadoInicial_.
     * @param estadoInicial_
     */
    void setEstadoInicial_(const string &estadoInicial_);
    /**
     * @brief Getter blanco_.
     * @return
     */
    const string &getBlanco_() const;
    /**
     * @brief Setter blanco_.
     * @param blanco_
     */
    void setBlanco_(const string &blanco_);
    /**
     * @brief Getter conjuntoFinal_.
     * @return
     */
    const vector<string> &getConjuntoFinal_() const;
    /**
     * @brief Setter conjuntoFinal_.
     * @param conjuntoFinal_
     */
    void setConjuntoFinal_(const vector<string> &conjuntoFinal_);
    /**
     * @brief Getter cadena_.
     * @return
     */
    const Cinta &getCadena_() const;
    /**
     * @brief Setter cadena_.
     * @param Cadena_
     */
    void setCadena_(const Cinta &Cadena_);
    /**
     * @brief Sobrecarga operador =.
     * @param cp
     * @return
     */
    MT& operator=(const MT &cp);
    /**
     * @brief Sobrecarga operador ==.
     * @param cp
     * @return
     */
    bool operator==(const MT &cp);
    /**
     * @brief Sobrecarga operador <<.
     * @param out
     * @param cp
     * @return
     */
    friend ostream& operator<<(ostream &out, const MT &cp);

};


#endif //M_T_MT_H
