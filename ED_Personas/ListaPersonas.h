//
// Created by sebas on 2/27/2019.
//

#ifndef ED_PRACTICA_LISTAPERSONAS_H
#define ED_PRACTICA_LISTAPERSONAS_H

#include "NodoPersona.h"

class ListaPersonas {
private:
    NodoPersona *cabeza;
    int length;
public:
    ListaPersonas();
    NodoPersona *getCabeza();
    void setCabeza(NodoPersona *);
    int getLength();
    void setLength(int);
    void agregarInicio(Persona *);
    void agregarFinal(Persona *);
    void agregarOrdenado(Persona *);
    bool esVacia();
    NodoPersona *buscarNodo(std::string);
    Persona *buscar(std::string);
    bool eliminar(std::string);
    bool eliminarIndice(int &);
    void toString();
};


#endif //ED_PRACTICA_LISTAPERSONAS_H
