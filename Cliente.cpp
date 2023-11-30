//Aquí implementamos la clase Cliente, con el constructor predeterminado incializamos las variables saldo con numeros 0 y usuarioValido con contraseñaValida con una cadenas vacias
// Con el constructor con parámetro tomamos un argumentos tipo string y double para guardarlo en las variables mencionadas antes
//ya con los métodos podemos realizar depositos, retiros, pagar servicios y consultar saldo. Ademas de mostar los menus al cliente para que seleccione su opcion

#include "Cliente.h"
#include <string>
using namespace std;
Cliente::Cliente() {
    usuarioValido="";
    contrasenaValida="";
    saldo=0.00;
}
Cliente::Cliente(string _nombre,  string usuarioCorrecto, string contrasenaCorrecta, double _saldo):Persona(_nombre) {
    usuarioValido= usuarioCorrecto;
    contrasenaValida= contrasenaCorrecta;
    saldo= _saldo;
}
bool Cliente::validarCredenciales(string usuarioCorrecto, string contrasenaCorrecta) {
    return (usuarioCorrecto==usuarioValido && contrasenaCorrecta==contrasenaValida);
}
void Cliente::mostrarMenuCliente() {
    cout<<"Selecciona la opcion que desees realizar\n 1. Depositar dinero\n 2.Retirar dinero\n 3. Ver saldo actual\n 4. Pagar un servicio\n 5.Salir "<<endl;
}
void Cliente::mostrarMenuServicios() {
    cout<<"Escoge tu servicio a pagar: \n6. Agua\n 7. Luz\n 8. Telefono \n 9. Regresar al menu"<<endl;
}
void Cliente::ingresarDinero(double monto) {
    if (monto > 0) {
        saldo += monto;
        cout << "Deposito exitoso \n Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Error: El monto debe ser mayor a cero." << endl;
    }
}
void Cliente::retirarDinero(double monto) {
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso \n Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Error: Monto no válido o saldo insuficiente." << endl;
    }
}
void Cliente::consultarSaldo() {
    cout<<"Su saldo es de: $"<<saldo<<endl;
}
bool Cliente::pagarServicio(Servicio servicio) {
    if (saldo >= servicio.getMontoPagar()) {
        saldo -= servicio.getMontoPagar();
        cout << "Pago de $" << servicio.getMontoPagar() << " realizado al servicio : " << servicio.getNombreServicio() << ". Nuevo saldo: $" << saldo <<endl;
        return true;
    } else {
        cout << "Saldo insuficiente para realizar el pago al servicio " << servicio.getNombreServicio() <<endl;
        return false;
    }
}
