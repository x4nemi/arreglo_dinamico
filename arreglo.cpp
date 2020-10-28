#include "arreglo.h"

using namespace std;

Arreglo::Arreglo(){
    arreglo = new string[MAX];
    cont = 0;
    dim = MAX;
}

Arreglo::~Arreglo(){
    delete[] arreglo;
}

void Arreglo::expandir(){
    string *nuevo = new string[dim + MAX];

    for(int i = 0; i < cont; i++){
        nuevo[i] = arreglo[i];
    }

    delete[] arreglo;
    arreglo = nuevo;
    dim += MAX;

}

void Arreglo::insertarFinal(const string& v){
    if(cont == dim){
        expandir();
    }

    arreglo[cont++] = v;
}

void Arreglo::insertarInicio(const string& v){
    if (cont == dim) {
        expandir();
    }

    for (size_t i = cont; i > 0; i--) {
        arreglo[i] = arreglo[i - 1]; 
    }
    arreglo[0] = v;
    cont++;
}

size_t Arreglo::size(){
    return cont;
}