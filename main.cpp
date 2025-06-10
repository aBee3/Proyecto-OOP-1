/*
 * Proyecto Traductor CHINO - ESPAÑOL (main)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El main es el encargado de crear los objetos tipos texto que serán agregados a la clase traductor el cual,
 * es una clase abstracta, responsable de manejar los diferentes objetos tipo texto y de los métodos virtuales de traducción.
 */


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

// Main
int main() {

    // Interacción con el usuario
    // Cambiamos el sistema para que sea capaz de leer caractéres chinos:
    system("chcp 65001");
    
    std::cout << "\n\n----------------------------------------------\nBienvenido al traductor ESPAÑOL - CHINO\n\n"<<std::endl;
    

    // Variable para el manejo del programa
    int cantidad;

    cout << "¿Cuántos textos deseas agregar? \n\n     -->  ";
    std::cin >> cantidad;

    // Ignora el salto de línea
    std::cin.ignore(); 

    // Inicializamos el Traductor con la cantidad de textos
    Traductor traductor(cantidad); //

    std::string palabrasenespañol = traductor.leerDiccionarioEsp();
    std::cout << "Palabras que puedes usar:\n---------------------------------\n"<< palabrasenespañol <<std::endl; 

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

        // Para verificación del idioma
        std::string idiomas[] = {"Español", "Chino"};
        std::cout << "Idioma seleccionado: \n         " << idiomas[idioma-1] << std::endl;

        // Recibir el idioma
        cout << "Introduce el texto original:\n     --> ";
        getline(cin, original);

        // Creamos un nuevo texto Default (AGREGACIÓN)
        Texto* nuevoTexto;

        //Ahora dependiendo del idioma creamos objetos de tipo individual
        if (idioma == 1) {
            // Español: se traduce al chino
            
            // (APUNTADORES)
            nuevoTexto = new TextoEspañol(original);
            std::cout<<"\nTexto en Español creado\n\n";
        } 
        else {
            // Chino: se traduce al español
            nuevoTexto = new TextoChino(original);
            std::cout<<"\nTexto en chino creado\n\n"<< std:: endl;
        }

        //(AGREGACIÓN)
        traductor.addTexto(nuevoTexto);
    }

    // Mostramos los textos guardados en el Traductor


    traductor.armarLectura();
    traductor.armarGlosario();
    std::cout<< traductor.getGlosario() << std::endl;

    std::cout << "Deseas exportar los contenidos?\n [1] SI [2] NO\n"<<std::endl;
    std::cin >> cantidad;
    if (cantidad == 1){
        std::string nombreArchivo;
        std::cout <<"Ingrese el nombre del archivo:\n    -->    "<<std::endl;
        std::cin >> nombreArchivo;
        traductor.exportar(nombreArchivo);
    }


    std::cout<<"回头见"<<endl;

    return 0;
}
