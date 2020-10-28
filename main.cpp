#include "arreglo.h"

using namespace std;

int main(){
    Arreglo arreglo;
    arreglo.insertarFinal("hola");
    arreglo.insertarFinal("mundo");
    arreglo.insertarFinal("!");
    arreglo.insertarInicio("¡");

    for(int i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << endl;
    }

    return 0;
}