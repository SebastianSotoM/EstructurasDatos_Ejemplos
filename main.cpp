#include <iostream>
#include "ED_Personas/ListaPersonas.h"

using namespace std;

int main() {
    ListaPersonas *lista = new ListaPersonas();

    lista->agregarOrdenado(new Persona("5","Santi",18));
    lista->agregarOrdenado(new Persona("4","Santi",18));
    lista->agregarOrdenado(new Persona("3","Santi",18));
    lista->agregarOrdenado(new Persona("2","Santi",18));

    lista->toString();
    cout<<lista->getLength()<<endl;
    cout<<lista->eliminar("2")<<endl;
    lista->toString();
    cout<<lista->getLength()<<endl;



    return 0;
}