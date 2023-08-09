/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   empleados.h
 * Author: Roberto Carlos
 *
 * Created on 8 de agosto de 2023, 4:18 p. m.
 */
#include <iostream>
#ifndef EMPLEADOS_H
#define EMPLEADOS_H

using namespace std;

class empleados {

private:
    string nombre;
    string genero;
    int edad;
    string DNI;
    int sueldo;
       
public:
    

    empleados(string nombre, string genero, int edad, string DNI, int sueldo) :
    nombre(nombre), genero(genero), edad(edad), DNI(DNI), sueldo(sueldo) {
    }

    empleados(const empleados& orig);
    virtual ~empleados();
    
    string getDNI();    
    int getEdad();
    string getGenero();
    string getNombre();
    int getSueldo();
    
    void setDNI(string);
    void setEdad(int);
    void setGenero(string);
    void setNombre(string);
    void setSueldo(int);

    void incrementarSueldo(int);
   

};

#endif /* EMPLEADOS_H */

