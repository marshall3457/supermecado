/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   productos.h
 * Author: Roberto Carlos
 *
 * Created on 8 de agosto de 2023, 4:18 p. m.
 */
#include <iostream>
#ifndef PRODUCTOS_H
#define PRODUCTOS_H

using namespace std;

class productos {

private:
    string nombre;
    int precio;
    string id;
    
public:
    
    productos(string nombre, int precio, string id) :
    nombre(nombre), precio(precio), id(id) {
    }
    
    
    productos(const productos& orig);
    virtual ~productos();
    
    string GetId();
    
    string GetNombre();

    int GetPrecio();
    
    void SetId(string id);
    
    void SetNombre(string nombre);

    void SetPrecio(int precio);



    
    

};

#endif /* PRODUCTOS_H */

