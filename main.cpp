
// Librerías a utilizar
#include <iostream>
#include <string>
#include <vector>

// Headers de las clases
#include "Traductor.h"
#include "TextoEspañol.h"
#include "TextoChino.h"
#include "Texto.h"


int main() {
    // Variables para inicializar el traductor
    int idioma      = 1;
    string original = "Hola";
    std::vector<std::string> idiomas = {"Español", "Chino"};

    // Creamos un objeto traductor por el momento
    Traductor traductor = Traductor();

    std::cout << "Bienvenido al creador de lecturas CHINO - ESPAÑOL ";
    std::cout << "Ingrese el idioma de origen \n 1= Español\n2 = Chino ";
    std::cin >> idioma; // Guardamos el idioma de origen
    std::cout << "Ingresa tu texto en " << idiomas[idioma] << std::endl;

    return 0;
}
