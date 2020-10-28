#include "arreglo.h"

using namespace std;

int main(){
    Arreglo arreglo;
    arreglo.insertarFinal("el gato");
    arreglo.insertarFinal("gris");
    arreglo.insertarFinal("de alado");
    arreglo.insertarFinal("del la");
    arreglo.insertarFinal("calle");
    arreglo.insertarFinal("está");
    arreglo.insertarFinal("bonito");
    arreglo.insertarFinal("!");
    arreglo.insertarInicio("¡");
    arreglo.insertarInicio(":3 ");
    arreglo.insertarInicio("\n");

    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}