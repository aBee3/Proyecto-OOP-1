#include <iostream>
#include "TextoChino.h"
// Librerías para la lectura del diccionario: 
#include <fstream>
#include <sstream>


// Constructor 
TextoChino::TextoChino() : Texto(2, "") {
    std::cout<<"Construyendo texto en Chino..."<< std:: endl;
} // Default
TextoChino::TextoChino(const std::string& ori) : Texto(2, ori) {}

// Método
void TextoChino::traducir(){
    std::cout << "     Traduciendo texto en Chino..." << std:: endl;
    std::ifstream file("diccionario.txt");
    if (!file.is_open())
    {
        traduccion     = "[diccionario no disponible]";
        pronunciacion  = "[diccionario no disponible]";
        return;
    }

    std::string esp, zh, pin;
    bool found = false;

    while (file >> esp >> zh >> pin)
    {
        if (original == zh)               // buscamos por chino
        {
            traduccion    = esp;          // Polimorfismo: Chino a Español
            pronunciacion = pin;          // pinyin
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

