//
// Aquí implementamos la clase Persona, con el constructor predeterminado incializamos la variable nombre con una cadena vacia
//Con el constructor con parámetro tomamos un argumento tipo string para guardarlo en la variable nombre, ya con el método devolvemos el valor actual del nombre

#include "Persona.h"
Persona::Persona() {
    nombre="";

}

Persona::Persona(string _nombre){
    nombre= _nombre;
}

string Persona::getNombre() {
    return nombre;
}