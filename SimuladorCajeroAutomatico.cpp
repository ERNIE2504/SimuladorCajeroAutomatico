#include <iostream>
#include "Cliente.h"
using namespace std;

int main() {
    //En este apartado declaramos las varibles que se van a utilizar para recibir los datos del cliente
    int opcion;
    int numServicio;
    double monto;
    double montoServicio=0;
    string nombreIngresado;
    int edadIngresada;
    string usuarioIngresado;
    string contrasenaIngresada;
    string usuario;
    string contrasena;
    //Damos mensaje de bienvenida y empezamos a solicitar datos
    cout<<"\t Bienvenido a BanTEC"<<endl;
    cout<<"Favor de proporcionar los datos siguientes "<<endl;
    cout<<"Ingrese su nombre: ";
    cin>> nombreIngresado;
    cout<<"Ingrese su edad: ";
    cin>> edadIngresada;
    //Creamos los objetos de servicio que nos van a ayudar mas adelante
    Servicio agua(0.00, "Agua");
    Servicio luz(0.00, "Luz");
    Servicio telefono(0.00, "Telefono");
    //Hacemos uso de un if para que si el cliente no es mayor de edad no pueda usar el Cajero
    if (edadIngresada>= 18){
        //Pedimos que cree una cuenta
        cout<<"Favor de crear una cuenta "<<endl;
        cout<<"Ingrese un usuario: ";
        cin>> usuarioIngresado;
        cout<<"Ingrese una contrasena: ";
        cin>> contrasenaIngresada;
        cout<<"Cuenta creada exitosamente"<<endl;
        //Aquí pedimos que inicie sesión
        cout<<"Favor de iniciar sesion "<<endl;
        cout<<"Usuario: ";
        cin>>usuario;
        cout<<"Contrasena: ";
        cin>>contrasena;
        //Creamos un Objeto cliente con los datos proporcionados
        Cliente cliente1(nombreIngresado,usuarioIngresado,contrasenaIngresada,0.00);
        //Con los datos podemos validar las credencial usando uno de los metodos, si no son correctos lo sacara del Cajero
        if (cliente1.validarCredenciales(usuario, contrasena)){
            //Creamos un do while para que el cliente pueda salir cuando desee
            do {
                //Damos bienvenida y mostramos menu para despues pedirle una opcion
                cout<<"Bienvenido "<<cliente1.getNombre()<<endl;
                cliente1.mostrarMenuCliente();
                cin>>opcion;
                //usamos uso de switch para hacer una accion diferente dependiendo el numero seleccionado
                switch (opcion) {
                    case 1:
                        cout << "Ingrese el monto a depositar: $";
                        cin >> monto;
                        cliente1.ingresarDinero(monto);
                        break;
                    case 2:
                        cout << "Ingrese el monto a retirar: $";
                        cin >> monto;
                        cliente1.retirarDinero(monto);
                        break;
                    case 3:
                        cliente1.consultarSaldo();
                        break;
                    case 4:
                        //Volvemos a hacer un do while para mostrar otro menu y que seleccione una opcion
                        do {
                            cliente1.mostrarMenuServicios();
                            cin >> numServicio;
                            switch (numServicio) {
                                case 6:
                                    cout << "Ingresa el monto a pagar del servicio: $";
                                    cin >> montoServicio;
                                    agua.setMontoPagar(montoServicio);
                                    cliente1.pagarServicio(agua);
                                    break;
                                case 7:
                                    cout << "Ingresa el monto a pagar del servicio: $";
                                    cin >> montoServicio;
                                    luz.setMontoPagar(montoServicio);
                                    cliente1.pagarServicio(luz);
                                    break;
                                case 8:
                                    cout << "Ingresa el monto a pagar del servicio: $";
                                    cin >> montoServicio;
                                    telefono.setMontoPagar(montoServicio);
                                    cliente1.pagarServicio(telefono);
                                    break;
                                case 9:
                                    break;
                                default:
                                    cout << "Opcion no valida. Intente de nuevo.\n";
                                }
                            }while (numServicio != 9);
                            break;
                            case 5:
                                cout << "Gracias por utilizar BanTEC. ¡Hasta luego!" << endl;
                                break;
                            default:
                                cout << "Opcion no valida. Intente de nuevo.\n";
                        }
            } while (opcion != 5);
        }
        else{
            cout<<"Contrasena y/o usuario invalido";
        }
    }
    else{
        cout<<"Debes ser mayor de edad para poder utilizar BanTEC"<<endl;
    }
}
