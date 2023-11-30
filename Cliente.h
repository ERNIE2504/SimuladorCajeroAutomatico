//Esta clase es una clase hija que deriva de Persona la cual fue llamada Servicio, establecemos las variables privadas usuarioValido, contraseñaValida, saldo y servicios que va a almacenar objetos de la calse servicio, las cuales van a almacenar el usuario, al contraseña y el saldo
//Después declaramos los métodos públicos: el constructor predeterminado Cliente y el constructor con parámetro,
// Además de establecer métodos para mostrar el menu para el cliente y el menu para realizar un pago de servicio
// finalmente  metodos para poder realizar pagos, depositos, retiros, consultas de saldo. También de tener un método para verificar las credenciales del usuario al iniciar sesion

#ifndef CAJEROAUTOMATICO_CLIENTE_H
#define CAJEROAUTOMATICO_CLIENTE_H
#include "Servicio.h"
#include "Persona.h"

#include <string>
using namespace std;
class Cliente: public Persona {
    private:
        string usuarioValido;
        string contrasenaValida;
        double saldo;
        Servicio servicios;

    public:
        Cliente();
        Cliente(string _nombre,string usuarioCorrecto, string contrasenaCorrecta,double _saldo);
        void mostrarMenuCliente();
        bool pagarServicio(Servicio servicio);
        bool validarCredenciales(string usuario, string contrasena);
        void ingresarDinero(double monto);
        void retirarDinero(double monto);
        void consultarSaldo();
        void mostrarMenuServicios();
};


#endif //CAJEROAUTOMATICO_CLIENTE_H
