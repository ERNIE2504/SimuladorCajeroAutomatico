//
// Esta clase es una clase padre que va a heredar el nombre de la persona, establecemos la variable privada nombre
//Después declaramos los métodos públicos: el constructor predeterminado Persona y el constructor con parámetro, finalmente un método para obtener el nombre

#ifndef CAJEROAUTOMATICO_PERSONA_H
#define CAJEROAUTOMATICO_PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona {
    private:
        string nombre;

    public:
        Persona();
        Persona(string nombre);
        string getNombre();
};


#endif //CAJEROAUTOMATICO_PERSONA_H
