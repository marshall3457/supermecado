/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   empleados.cpp
 * Author: Roberto Carlos
 * 
 * Created on 8 de agosto de 2023, 4:18 p. m.
 */

#include "empleados.h"



empleados::empleados(const empleados& orig) {
}

empleados::~empleados() {
}


string empleados::getDNI() {
    return DNI;
}

int empleados::getEdad()  {
    return edad;
}

string empleados::getGenero()  {
    return genero;
}

string empleados::getNombre()  {
    return nombre;
}

int empleados::getSueldo() {
    return sueldo;
}


void empleados::incrementarSueldo(int sueldo){
    this->sueldo += sueldo;
}


void empleados::setDNI(string DNI) {
    this->DNI = DNI;
}

void empleados::setEdad(int edad) {
    this->edad = edad;
}

void empleados::setGenero(string genero) {
    this->genero = genero;
}

void empleados::setNombre(string nombre) {
    this->nombre = nombre;
}

void empleados::setSueldo(int sueldo) {
    this->sueldo = sueldo;
}



