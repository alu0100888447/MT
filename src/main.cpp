#include "../include/MT.h"

int main() {
    Transicion Aux("q1", "a", "a", "R");
    vector <Transicion> aux;
    aux.push_back(Aux);
    Estado AuxEstado ("q0", aux);
    vector<Estado> auxV;
    auxV.push_back(AuxEstado);
    vector<string> cade = {"a" , "b"};
    vector<string> entra = {"a", "b", "$"};
    vector<string> fin = {"q1"};
    MT AuxMT(auxV, cade, entra, "q0", "$", fin);
    cout << AuxMT;
    return 0;
}