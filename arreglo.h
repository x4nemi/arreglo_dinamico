#ifndef ARREGLO_H
#define ARREGLO_H

#include <iostream>

class Arreglo{
    private:
        std::string *arreglo;
        size_t dim;
        size_t cont;
        const static size_t MAX = 5;
        void expandir();

    public:
        Arreglo();
        ~Arreglo();

        void insertarInicio(const std::string&);
        void insertarFinal(const std::string&);

        size_t size();
        std::string operator[](size_t p){
            return arreglo[p];
        }
};

#endif