/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Excepciones.h
 * Author: Roberto Carlos
 *
 * Created on 8 de agosto de 2023, 4:26 p. m.
 */

#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H
#include <string>

using namespace std;

class Excepciones {
public:

    Excepciones(string message) :
    message(message) {
    }

    virtual ~Excepciones();

    string GetMessage() const {
        return message;
    }

private:
    string message;
};

#endif

