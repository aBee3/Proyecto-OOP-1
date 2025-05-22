
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
    std::cout << "Bienvenido al creador de lecturas CHINO - ESPAÑOL ";
    Traductor traductor(2); // probando el constructor para dos textos
    traductor.addTexto();
  

    return 0;
}
