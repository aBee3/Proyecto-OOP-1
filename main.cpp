
// Librerías a utilizar
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

// Headers de las clases
#include "Traductor.h"
#include "TextoEspañol.h"
#include "TextoChino.h"
#include "Texto.h"


int main() {
    std::cout << "Bienvenido al traductor ESPAÑOL - CHINO\n Idiomas:\n Español [1], Chino [2]"<<std::endl;
    int cantidad;

    cout << "¿Cuántos textos deseas agregar? ";
    std::cin >> cantidad;
    std::cin.ignore(); 


    // Inicializamos el Traductor con la cantidad de textos
    Traductor traductor(cantidad); //

    for (int i = 0; i < cantidad; i++) {
        int idioma = 0;
        std::string input;
        std::string original;

       while (true) {
            std::cout << "Introduce el idioma para el texto (1 o 2): ";
            std::getline(std::cin, input);  

            std::stringstream ss(input);
            if (ss >> idioma && (idioma == 1 || idioma == 2)) {
                break; 
            }

            std::cout << "Entrada inválida. Por favor, escribe 1 o 2.\n";
        }
        std::cout << "Idioma seleccionado: " << idioma << std::endl;

        cout << "Introduce el texto original: ";
        getline(cin, original);

        // Creamos un nuevo Texto con idioma y original
        Texto* nuevoTexto = new Texto(idioma, original);

        // Lo añadimos al traductor
        traductor.addTexto(nuevoTexto);
    }

    // Mostramos los textos guardados en el Traductor
    cout << "\nTextos guardados en el Traductor:\n";
    traductor.mostrarTextos(); //

    return 0;
}
