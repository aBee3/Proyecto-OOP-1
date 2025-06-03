#include "TextoEspañol.h"
#include <iostream>

// Librerías para la lectura del diccionario: 
#include <fstream>
#include <sstream>

// CONSTRUCTOR
TextoEspañol::TextoEspañol() : Texto(1, "") {
    std::cout<<"Construyendo texto en español..." << std:: endl;
}

void TextoEspañol::traducir() {
    std::cout << "     Traduciendo texto en español..." << std::endl;
    std::ifstream file("diccionario.txt"); // abre el diccionario y lo lee
    if (!file.is_open()) {
        traduccion    = "[diccionario no disponible]";
        pronunciacion = "[diccionario no disponible]";
        return;
    }

    // Esto me quita problemas con las minúsculas
    for (char& c : original) {
        if (c >= 'A' && c <= 'Z') {
            c += ('a' - 'A');
        }
    }

    // Como quiero usar grases creamos la frase en chino y en español
    std::string palabra   = "";
    std::string fraseZH   = "";
    std::string frasePIN  = "";
    std::string esp, zh, pin;

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
        bool found = false;

        // el métodp que tenía antes
        while (diccionario >> esp >> zh >> pin) {
            if (palabra == esp) {
                fraseZH  += zh + " ";             // aquí ahora ya puedes juntar frases
                frasePIN += pin + " ";
                found = true;
                break;
            }
        }

        if (!found) {
            fraseZH  += "[?] ";                  // cambio desconocido por ?
            frasePIN += "[?] ";
        }

        // cerramos el archivo del diccionario
        diccionario.close();
    }

    // Returns 
    traduccion    = fraseZH;
    pronunciacion = frasePIN;
}
