#include "../include/MT.h"

int main(int argc, char const *argv[]) {
    string cadena;
    MT Maquina;
    if(argc == 2)
        cadena = argv[1];
    else {
        cout << "* Introduzca el nombre del fichero con la MT: ";
        cin >> cadena;
    }
    while (!Maquina.leerFichero(cadena)) {
        cout << endl << "* Introduzca el nombre del fichero con la MT: ";
        cin >> cadena;
    }
    cout << Maquina << endl << endl;
    int a = 0;
    do {
        cadena.clear();
        cout << "0.- Salir" << endl;
        cout << "1.- Analizar Cadena" << endl;
        cout << "-> ";
        cin >> a;
        if(a == 1) {
            cout << "* Introduzca la cadena a analizar: ";
            cin >> cadena;
            cout << endl;
            if(Maquina.preAnalisis(cadena)) {
                if (Maquina.analisis()) {
                    cout << "\n\n\t\t\033[1;32m| La cadena introducida es aceptada por la MT. |\033[0m\n" << endl;
                }
                else {
                    cout << "\n\n\t\t\033[1;31m| La cadena introducida no es aceptada por la MT. |\033[0m\n" << endl;
                }
            }
            else
                cout << "\n\t\t\033[1;31m[!La cadena introducida contiene caracteres no reconocibles por la MT.]\033[0m\n" << endl;
        }
    } while (a != 0);
    return 0;
}