//
// Aquí implementamos la clase Servicio, con el constructor predeterminado incializamos las variables montoPagar con numeros 0 y nombreServicio con una cadena vacia
//Con el constructor con parámetro tomamos un argumento tipo string para guardarlo en la variable _nombreServicio y un argumento tipo double para guardarlo en _montoPagar
//ya con el método set asignamos el valor a montoPagar, con los getters obtenemos el valor en ese momento del nombre del servicio y su cantidad a pagar

#include "Servicio.h"

using namespace std;

Servicio::Servicio(){
    montoPagar =0.00;
    nombreServicio ="";
}
Servicio::Servicio(double _montoPagar, string _nombreServicio) {
    montoPagar= _montoPagar;
    nombreServicio= _nombreServicio;
}
double Servicio::setMontoPagar(double montoServicio) {
    montoPagar=montoServicio;
    return montoPagar;
}
string Servicio::getNombreServicio() {
    return nombreServicio;
}
double Servicio::getMontoPagar() {
    return montoPagar;
}
