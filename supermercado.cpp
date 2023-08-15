/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   supermecado.cpp
 * Author: Roberto Carlos
 * 
 * Created on 10 de agosto de 2023, 3:58 p. m.
 */

#include "supermercado.h"

supermercado::supermercado(const supermercado& orig) {
}

supermercado::~supermercado() {
}

list<empleados*>* supermercado::GetListaEmpleados()  {
    return listaEmpleados;
}

list<productos*>* supermercado::GetListaProductos()  {
    return listaProductos;
}

string supermercado::GetNombre()  {
    return nombre;
}


void supermercado::SetNombre(string nombre) {
    this->nombre = nombre;
}


void supermercado::agregarNuevoEmpleado(empleados * empleadoNuevo){
    list<empleados*>::iterator iterador = this->listaEmpleados->begin();
    empleados * e = NULL;
    while (iterador != this->listaEmpleados->end()) {
        e = (* iterador);

        // logica propia del método
        if (empleadoNuevo->getDNI() == e->getDNI())
            throw new Excepciones("El empleado ya se encuentra registrado");

        iterador++;
    }
    this->listaEmpleados->push_back(empleadoNuevo);
    
}

void supermercado::agregarNuevoProducto(productos * productoNuevo){
    list<productos*>::iterator iterador = this->listaProductos->begin();
    productos * e = NULL;
    while (iterador != this->listaProductos->end()) {
        e = (* iterador);

        // logica propia del método
        if (productoNuevo->GetId() == e->GetId())
            throw new Excepciones("El producto ya se encuentra registrado");

        iterador++;
    }
    this->listaProductos->push_back(productoNuevo);
    
}

void supermercado::eliminarEmpleado(string DNI) {
    list<empleados*>::iterator it = this->listaEmpleados->begin();
    
    for (; it != this->listaEmpleados->end(); ++it) {
        empleados * e = *it;  // Corrección: Debes obtener el puntero al empleado actual
        
        if (e->getDNI() == DNI) {
            it = listaEmpleados->erase(it);  // Corrección: Borra el elemento y actualiza 'it'
            delete e;  // Corrección: Libera la memoria del empleado
            break;  // Corrección: Sale del bucle después de eliminar al empleado
        }
    }
}

void supermercado::eliminarProducto(string id) {
    list<productos*>::iterator it = this->listaProductos->begin();
    
    for (; it != this->listaProductos->end(); ++it) {
        productos * e = *it;  // Corrección: Debes obtener el puntero al empleado actual
        
        if (e->GetId() == id) {
            it = listaProductos->erase(it);  // Corrección: Borra el elemento y actualiza 'it'
            delete e;  // Corrección: Libera la memoria del empleado
            break;  // Corrección: Sale del bucle después de eliminar al empleado
        }
    }
}


empleados * supermercado::buscarEmpleado(string DNI){
    list<empleados *>::iterator it = this->listaEmpleados->begin();
    
    empleados * e = NULL;
    
    for(; it != this->listaEmpleados->end();it++){
        e = *it;
        
        if(e->getDNI() == DNI){
            return e;
        }
    }
    throw new Excepciones("No se encontro al empleado");

}


productos * supermercado::buscarProducto(string id){
    list<productos *>::iterator it = this->listaProductos->begin();
    
    productos * e = NULL;
    
    for(; it != this->listaProductos->end();it++){
        e = *it;
        
        if(e->GetId() == id){
            return e;
        }
    }
    
    throw new Excepciones("No se encontro al producto");

}


