#include "TextoEspañol.h"
#include <iostream>

// Librerías para la lectura del diccionario: 
#include <fstream>
#include <sstream>

//TextoEspañol::TextoEspañol(): Texto(){}

// CONSTRUCTOR
TextoEspañol::TextoEspañol(const std::string& Ori) : Texto(0, original) {}


// Traducir de Español a Chino
void TextoEspañol::traducir()
{
    std::ifstream file("diccionario.txt"); // abre el diccionario y lo lee
    if (!file.is_open())
    {
        traduccion     = "[diccionario no disponible]"; // por si el archivo no carga
        pronunciacion  = "[diccionario no disponible]";
        return;
    }

    // Español, chino y pronunciación (pinyin)
    std::string esp, zh, pin;
    bool found = false;

    while (file >> esp >> zh >> pin)
    {
        if (original == esp)
        {
            traduccion    = zh;   // Polimorfismo: De Español a Chino
            pronunciacion = pin;  // always pinyin
            found = true;
            break;
        }
    }

    if (!found)
    {
        traduccion    = "[desconocido]";
        pronunciacion = "[desconocido]";
    }
}

//void TextoEspañol::traducir(const std::string& s) { original = s; }
