/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   productos.cpp
 * Author: Roberto Carlos
 * 
 * Created on 8 de agosto de 2023, 4:18 p. m.
 */

#include "productos.h"


productos::productos(const productos& orig) {
}

productos::~productos() {
}

string productos::GetId()  {
    return id;
}

string productos::GetNombre()  {
    return nombre;
}

int productos::GetPrecio()  {
    return precio;
}
