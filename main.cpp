#include <iostream>
#include <iomanip>
#include "supermercado.h"

using namespace std;

int main() {
    supermercado * nuevoSupermercado = new supermercado("Colombia Center");

    //    empleados(string nombre, string genero, int edad, string DNI, int sueldo) :

    empleados * nuevoEmpleado = new empleados("Carlos", "M", 21, "224", 30000);
    empleados * nuevoEmpleado1 = new empleados("Alberto", "M", 21, "243", 30000);
    empleados * nuevoEmpleado2 = new empleados("Fernanda", "F", 21, "254", 30000);
    empleados * nuevoEmpleado3 = new empleados("Ana", "F", 21, "212", 30000);
    empleados * nuevoEmpleado4 = new empleados("Zapata", "M", 21, "276", 30000);
    empleados * nuevoEmpleado5 = new empleados("Fabio", "M", 21, "298", 30000);

    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado);
    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado1);
    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado2);
    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado3);
    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado4);
    nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleado5);

    //    productos(string nombre, int precio, string id) :

    productos * nuevoProducto = new productos("Azucar", 3000, "P20");
    productos * nuevoProducto1 = new productos("Arroz", 5000, "P43");
    productos * nuevoProducto2 = new productos("Yogur", 4000, "F45");
    productos * nuevoProducto3 = new productos("Harina", 30000, "K45");
    productos * nuevoProducto4 = new productos("Pan", 2000, "H34");
    productos * nuevoProducto5 = new productos("Sal", 1000, "G44");

    nuevoSupermercado->agregarNuevoProducto(nuevoProducto);
    nuevoSupermercado->agregarNuevoProducto(nuevoProducto1);
    nuevoSupermercado->agregarNuevoProducto(nuevoProducto2);
    nuevoSupermercado->agregarNuevoProducto(nuevoProducto3);
    nuevoSupermercado->agregarNuevoProducto(nuevoProducto4);
    nuevoSupermercado->agregarNuevoProducto(nuevoProducto5);

    int opcion = 0, accion = 0;

    do {
        try {
            cout << "Digite lo que desea realizar" << endl;
            cout << "1- Empleado" << endl;
            cout << "2- Producto" << endl;
            cout << "3- Salir del programa" << endl;
            cin>>opcion;

            if (!(opcion > 0 && opcion <= 3)) {
                throw new Excepciones("Opcion no valida!");

            }

            if (opcion == 1) {
                do {
                    try {
                        system("clear");
                        cout << "Digite la accion a realizar" << endl;
                        cout << "1- Buscar empleado" << endl;
                        cout << "2- Aumentar sueldo" << endl;
                        cout << "3- Registrar empleado" << endl;
                        cout << "4- Generar reporte de salarios" << endl;
                        cout << "5- Eliminar empleado" << endl;
                        cout << "6- Modificar datos" << endl;
                        cout << "7- volver al menu principal" << endl;
                        cout << "8- Salir del programa" << endl;
                        cin>>accion;

                        if (accion == 1) {
                            string DNI;
                            cout << "Ingrese el DNI del usuario a buscar" << endl;
                            cin>>DNI;

                            cout << "El nombre del empleado es: " << nuevoSupermercado->buscarEmpleado(DNI)->getNombre() << endl;
                            cout << "La edad del empleado es: " << nuevoSupermercado->buscarEmpleado(DNI)->getEdad() << endl;
                            cout << "El Genero del empleado es: " << nuevoSupermercado->buscarEmpleado(DNI)->getGenero() << endl;
                            cout << "El DNI del empleado es: " << nuevoSupermercado->buscarEmpleado(DNI)->getDNI() << endl;
                            cout << "El Sueldo del empleado es: " << nuevoSupermercado->buscarEmpleado(DNI)->getSueldo() << endl;


                        }
                        if (accion == 2) {
                            string DNI;
                            int incremento = 0;

                            cout << "Ingrese el DNI del empleado" << endl;
                            cin>>DNI;
                            cout << "Ingrese el incremento a realizar" << endl;
                            cin>>incremento;

                            nuevoSupermercado->buscarEmpleado(DNI)->incrementarSueldo(incremento);

                            cout << "El incremento fue realizado con exito" << endl;



                        }
                        if (accion == 3) {
                            string nombre, genero, DNI;
                            int edad, sueldo;

                            cout << "Ingrese los siguientes datos" << endl;
                            cout << "Nombre: " << endl;
                            cin>>nombre;
                            cout << "Edad: " << endl;
                            cin>>edad;
                            cout << "DNI: " << endl;
                            cin>>DNI;
                            cout << "Genero: " << endl;
                            cin>>genero;
                            cout << "Sueldo: " << endl;
                            cin>>sueldo;

                            empleados * nuevoEmpleadoAgregar = new empleados(nombre, genero, edad, DNI, sueldo);
                            nuevoSupermercado->agregarNuevoEmpleado(nuevoEmpleadoAgregar);

                        }
                        if (accion == 4) {

                            cout << "Todos los salarios: " << endl;

                            list<empleados *> * resultado = nuevoSupermercado->GetListaEmpleados();
                            list<empleados *>::iterator it = resultado->begin();

                            empleados * e = NULL;

                            for (; it != resultado->end(); it++) {
                                e = *it;
                                cout << "Nombre: " << e->getNombre() << " Sueldo:" << e->getSueldo() << endl;

                            }



                        }
                        if (accion == 5) {
                            string DNI;
                            cout << "Ingrese el DNI del empleado a eliminar" << endl;
                            cin>>DNI;

                            nuevoSupermercado->eliminarEmpleado(DNI);

                            cout << "Empleado eliminado con exito\n\n";


                        }
                        if (accion == 6) {
                            string DNI;
                            int opcionModificacion;
                            cout << "Ingrese el DNI del empleado" << endl;
                            cin>>DNI;
                            cout << "Que campo desea modificar" << endl;
                            cout << "1- Nombre" << endl;
                            cout << "2- Edad" << endl;
                            cout << "3- DNI" << endl;
                            cout << "4- Genero" << endl;
                            cout << "5- Saldo" << endl;
                            cin>>opcionModificacion;



                            if (opcionModificacion == 1) {
                                string nombre;
                                cout << "Ingrese el nuevo nombre: " << endl;
                                cin>>nombre;
                                nuevoSupermercado->buscarEmpleado(DNI)->setNombre(nombre);

                            } else if (opcionModificacion == 2) {
                                int edad;
                                cout << "Ingrese la nueva edad" << endl;
                                cin>>edad;
                                nuevoSupermercado->buscarEmpleado(DNI)->setEdad(edad);

                            } else if (opcionModificacion == 3) {
                                string nuevoDNI;
                                cout << "Ingrese el nuevo DNI" << endl;
                                cin>>nuevoDNI;

                                nuevoSupermercado->buscarEmpleado(DNI)->setDNI(nuevoDNI);

                            } else if (opcionModificacion == 4) {
                                string genero;
                                cout << "Ingrese el nuevo genero" << endl;
                                cin>>genero;
                                nuevoSupermercado->buscarEmpleado(DNI)->setGenero(genero);

                            } else if (opcionModificacion == 5) {
                                int saldo;
                                cout << "Ingrese el nuevo saldo" << endl;
                                cin>>saldo;
                                nuevoSupermercado->buscarEmpleado(DNI)->setSueldo(saldo);
                            }
                        }

                        if (accion == 8) {
                            system("clear");
                            cout << "---------FIN DEL PROGRAMA---------";
                            exit(0);
                        }
                        system("pause");
                        system("clear");

                    } catch (Excepciones * exc) {
                        // Si no se encuentra el estudiante, entonces se genera una excepcion
                        cout << "ERROR : " << exc->GetMessage() << endl;
                        system("pause");
                    }
                } while (accion != 7);


            }

            if (opcion == 2) {
                do {
                    try {
                        system("clear");
                        cout << "Digite la accion a realizar" << endl;
                        cout << "1- Buscar producto" << endl;
                        cout << "2- Registrar producto" << endl;
                        cout << "3- Eliminar producto" << endl;
                        cout << "4- Modificar datos" << endl;
                        cout << "5- Ver todos los productos" << endl;
                        cout << "6- Menu principal" << endl;
                        cout << "7- Salir del programa" << endl;
                        cin>>accion;

                        if (accion == 1) {
                            string id;
                            cout << "Ingrese el id del producto" << endl;
                            cin>>id;
                            //    productos(string nombre, int precio, string id) :

                            cout << "Nombre: " << nuevoSupermercado->buscarProducto(id)->GetNombre() << endl;
                            cout << "Precio: " << nuevoSupermercado->buscarProducto(id)->GetPrecio() << endl;
                            cout << "Id: " << nuevoSupermercado->buscarProducto(id)->GetId() << endl;


                        }
                        if (accion == 2) {
                            string nombre, id;
                            int precio;
                            cout << "Ingrese los siguiente datos: " << endl;
                            cout << "Nombre: " << endl;
                            cin>>nombre;
                            cout << "Precio: " << endl;
                            cin>>precio;
                            cout << "id: " << endl;
                            cin>>id;

                            productos * agregarProducto = new productos(nombre, precio, id);
                            nuevoSupermercado->agregarNuevoProducto(agregarProducto);

                            cout << "El producto a sido agregado con exito" << endl;

                        }

                        if (accion == 3) {
                            string id;
                            cout << "Ingrese el id del producto a eliminar" << endl;
                            cin>>id;

                            nuevoSupermercado->eliminarProducto(id);

                            cout << "Producto eliminado con exito" << endl;

                        }

                        if (accion == 4) {
                            string id;
                            int opcionModificacion;
                            cout << "Ingrese el id del producto" << endl;
                            cin>>id;

                            cout << "Que campo desea actualizar" << endl;
                            cout << "1- Nombre" << endl;
                            cout << "2- Precio" << endl;
                            cout << "3- id" << endl;
                            cin>>opcionModificacion;

                            if (opcionModificacion == 1) {
                                string nombre;
                                cout << "Digite el nombre: " << endl;
                                cin>>nombre;
                                nuevoSupermercado->buscarProducto(id)->SetNombre(nombre);

                            }

                            if (opcionModificacion == 2) {
                                int precio;
                                cout << "Digite el precio: " << endl;
                                cin>>precio;
                                nuevoSupermercado->buscarProducto(id)->SetPrecio(precio);

                            }

                            if (opcionModificacion == 3) {
                                string id;
                                cout << "Ingrese el id: " << endl;
                                cin>>id;
                                nuevoSupermercado->buscarProducto(id)->SetId(id);

                            }

                        }

                        if (accion == 5) {
                            cout << "Productos" << endl;

                            list<productos *> * resultados = nuevoSupermercado->GetListaProductos();
                            list<productos *>::iterator it = resultados->begin();

                            productos * e = NULL;

                            for (; it != resultados->end(); it++) {
                                e = *it;
                                cout << "Nombre: " << setw(10) << left << e->GetNombre() //le da un espacio de 10 y justifica el contenido a la izquierda; haci dejando el espacio sobrante
                                        << "Precio: " << setw(10) << left << e->GetPrecio()
                                        << "Id: " << e->GetId() << endl;

                            }

                        }



                        if (accion == 7) {
                            system("clear");
                            cout << "---------FIN DEL PROGRAMA---------";
                            exit(0);
                        }

                        system("pause");
                        system("clear");


                    } catch (Excepciones * exc) {
                        // Si no se encuentra el estudiante, entonces se genera una excepcion
                        cout << "ERROR : " << exc->GetMessage() << endl;
                        system("pause");
                    }
                } while (accion != 6);
            }

        } catch (Excepciones * exc) {
            
            // Si no se encuentra el estudiante, entonces se genera una excepcion
            cout << "ERROR : " << exc->GetMessage() << endl;
            system("pause");
            system("cls");
        }

    } while (opcion != 3);




    system("clear");
    cout << "---------FIN DEL PROGRAMA---------";



    // Finalmente, liberar el supermercado
    delete nuevoSupermercado;
    delete nuevoEmpleado;
    delete nuevoEmpleado1;
    delete nuevoEmpleado2;
    delete nuevoEmpleado3;
    delete nuevoEmpleado4;
    delete nuevoEmpleado5;

    // Luego, liberar los productos
    delete nuevoProducto;
    delete nuevoProducto1;
    delete nuevoProducto2;
    delete nuevoProducto3;
    delete nuevoProducto4;
    delete nuevoProducto5;

    return 0;
}