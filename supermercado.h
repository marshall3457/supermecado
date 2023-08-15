/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   supermecado.h
 * Author: Roberto Carlos
 *
 * Created on 10 de agosto de 2023, 3:58 p. m.
 */

#include <iostream>
#include <list>
#include "empleados.h"
#include "productos.h"
#include "Excepciones.h"

#ifndef SUPERMERCADO_H
#define SUPERMERCADO_H

using namespace std;

class supermercado {

private:
    string nombre;
    list<empleados *> * listaEmpleados;
    list<productos *> * listaProductos;
 
public:
    
    supermercado(string nombre) :
    nombre(nombre) {
        listaEmpleados = new list<empleados *>();
        listaProductos = new list<productos *>();
        
    }
    
        
    supermercado(const supermercado& orig);
    virtual ~supermercado();
    
    list<empleados*>* GetListaEmpleados();
    list<productos*>* GetListaProductos();
    string GetNombre();
    
    void SetNombre(string);
    
    
    void agregarNuevoEmpleado(empleados * empleadoNuevo);
    void agregarNuevoProducto(productos * productoNuevo);
    void eliminarEmpleado(string);
    void eliminarProducto(string);
    
    empleados * buscarEmpleado(string);
    productos * buscarProducto(string);
    

};

#endif /* SUPERMERCADO_H */

