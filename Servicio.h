//
//Esta clase es una clase de agregación que fue llamada Servicio, establecemos las variables privadas montoPagar y nombreServicio, los cuales van a almacenar el costo del servicio y su nombre
//Después declaramos los métodos públicos: el constructor predeterminado Servicio y el constructor con parámetro, además de establecer métodos para obtener el costo del servicio y su nombre, finalmente un metodo para establecer el monto a pagar

#ifndef CAJEROAUTOMATICO_SERVICIO_H
#define CAJEROAUTOMATICO_SERVICIO_H

#include <string>

using namespace std;

class Servicio {
    private:
        double montoPagar;
        string nombreServicio;

    public:
        Servicio();
        Servicio(double , string);
        string getNombreServicio();
        double getMontoPagar();
        double setMontoPagar(double);
};


#endif //CAJEROAUTOMATICO_SERVICIO_H
