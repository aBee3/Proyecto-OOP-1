/*
 * Proyecto Traductor CHINO - ESPAÑOL (Texto Chino .cpp)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * Clase hija de TEXTO. Tiene el atributo original en chino y la traducción a español. La pronunciación es siempre en chino.
 */


#include <iostream>
#include "TextoChino.h"

// Librerías para la lectura del diccionario: 
// La documentación para leer el texto fue obtenido de (W3Schools.Com, n.d.).
#include <fstream>
#include <sstream>

// Constructor 
TextoChino::TextoChino() : Texto(2, "") {
    std::cout<<"Construyendo texto en Chino..."<< std:: endl;
} 
// Default
TextoChino::TextoChino(const std::string& ori) : Texto(2, ori) {}


// Método
void TextoChino::traducir(){
    std::cout << "     Traduciendo texto en Chino..." << std:: endl;

    // Usando iftream verificamos que el archivo de diccionario esté disponible
    std::ifstream file("diccionario.txt");
    if (!file.is_open())
    {
        traduccion     = "[diccionario no disponible]";
        pronunciacion  = "[diccionario no disponible]";
        return;
    }

    std::string esp, ch, pin;
    bool found = false;

    // Texto chino no se pasa a minúsculas

    while (file >> esp >> ch >> pin)
    {
        if (original == ch)               // buscamos por (el caracter) en chino
        {
            traduccion    = esp;          // Polimorfismo: Chino a Español
            pronunciacion = pin;          // pinyin
            original      = ch;           // Ahora puedes buscar con el pinyin 
            found = true;
            break;
        }
    }

    if (!found)
    {
        traduccion    = "[?]";
        pronunciacion = "[?]";
    }
}