/*
 * Proyecto Traductor CHINO - ESPAÑOL (Texto Español .cpp)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * Clase hija de TEXTO. Tiene el atributo original en chino y la traducción a español. La pronunciación es siempre en chino.
 */

#include "TextoEspañol.h"
#include <iostream>

// Librerías para la lectura del diccionario: 
// La documentación para leer el texto fue obtenido de (W3Schools.Com, n.d.).
#include <fstream>
#include <sstream>

// CONSTRUCTOR
TextoEspañol::TextoEspañol() : Texto(1, "") {
    std::cout<<"Texto creado\n" << std:: endl;
}

void TextoEspañol::traducir() {
    std::cout << "     Traduciendo texto en español..." << std::endl;

    // Usando librería leemos el texto en diccionario.txt
    std::ifstream file("diccionario.txt"); // abre el diccionario y lo lee

    if (!file.is_open()) {
        traduccion    = "[diccionario no disponible]";
        pronunciacion = "[diccionario no disponible]";
        return;
    }

    // Esto quita problemas con las minúsculas
    for (char& c : original) {
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');
        }
    }

    // Como quiero usar frases creamos la frase en chino y en español
    // CHino ESPañol PINyin (pronunciación)
    std::string palabra   = "";
    std::string fraseCH   = "";
    std::string frasePIN  = "";
    std::string esp, ch, pin;

    int i = 0;
    while (i < original.length()) {
        palabra = "";

        // reconoce espacios para identificar la palabra completa
        while (i < original.length() && original[i] != ' ') {
            palabra += original[i];
            i++;
        }

        i++;

        // Buscar la palabra en el diccionario
        std::ifstream diccionario("diccionario.txt");

        // Por default no está encontrada
        bool found = false;

        // De la librería se usa >> (como con cin) para extraer caracteres y continúa hasta que encuentre la palabra
        //(GeeksforGeeks, 2025)
        
        while (diccionario >> esp >> ch >> pin) {
            if (palabra == esp) {
                fraseCH  += ch + " ";             // aquí ahora ya puedes juntar frases
                frasePIN += pin + " ";
                found = true;
                break;
            }
        }

        if (!found) {
            fraseCH  += "[?] ";                  // cambio desconocido por ?
            frasePIN += "[?] ";
        }

        // cerramos el archivo del diccionario
        diccionario.close();
    }

    // Returns 
    traduccion    = fraseCH;
    pronunciacion = frasePIN;
}

// FINAL