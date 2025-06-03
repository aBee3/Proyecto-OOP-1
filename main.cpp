
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

    // Función manipulable con el usuario
    system("chcp 65001");
    std::cout << "\n\n----------------------------------------------\nBienvenido al traductor ESPAÑOL - CHINO\n\n"<<std::endl;
    int cantidad;

    cout << "¿Cuántos textos deseas agregar? \n\n     -->  ";
    std::cin >> cantidad;
    std::cin.ignore(); 

    // Inicializamos el Traductor con la cantidad de textos
    Traductor traductor(cantidad); //

    for (int i = 0; i < cantidad; i++) {
        int idioma = 0;
        std::string input;
        std::string original;

       while (true) {
            std::cout << "---------------------------------------------"<<std::endl;
            std::cout << "Introduce el idioma para el texto: \n     Español [1], Chino [2]\n\n     -->  ";
            std::getline(std::cin, input);  

            // Esto lo puse con stringstream para que reconozca incluso las letras y así pueda checar
            // si es el int 1 o 2 que necesito.
            std::stringstream ss(input);
            if (ss >> idioma && (idioma == 1 || idioma == 2)) {
                break; 
            }

            std::cout << "Entrada inválida. Por favor, escribe 1 o 2.\n";
        }
        std::string idiomas[] = {"Español", "Chino"};
        std::cout << "Idioma seleccionado: \n         " << idiomas[idioma-1] << std::endl;

        cout << "Introduce el texto original:\n     --> ";
        getline(cin, original);

        // Creamos un nuevo texto Default
        Texto* nuevoTexto;

        //Ahora dependiendo del idioma creamos objetos de tipo individual
        if (idioma == 1) {
            // Español: se traduce al chino
            
            nuevoTexto = new TextoEspañol(original);
            std::cout<<"\nTexto en Español creado\n\n";
        } 
        else {
            // Chino: se traduce al español
            nuevoTexto = new TextoChino(original);
            std::cout<<"\nTexto en chino creado\n\n"<< std:: endl;
        }

        traductor.addTexto(nuevoTexto);
    }

    // Mostramos los textos guardados en el Traductor
    traductor.mostrarTextos(); 
    std::cout<< "\n"<<std::endl;
    traductor.traducir();
    traductor.mostrarTraducciones();
    traductor.armarGlosario();
    // Esto queda por arreglarse, se verá después
    std::cout<< traductor.getGlosario()<<std::endl;
    std::cout<<"你好世界"<<endl;

    //changed this

    return 0;
}
