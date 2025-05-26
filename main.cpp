
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
    int cantidad;
    cout << "¿Cuántos textos deseas agregar? ";
    cin >> cantidad;

    // Inicializamos el Traductor con la cantidad de textos
    Traductor traductor(cantidad); // creo que cantidad no inicializa el array de textos correctamente
    // Este cantidad no funciona

    for (int i = 0; i < cantidad; i++) {
        int idioma;
        string original;

        cout << "Introduce el idioma para el texto " << i + 1 << ": ";
        cin >> idioma;
        cin.ignore(); // 

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
    std::cout<<"Falta corregir mostrarTextos para que los textos se muestren correctamente. No está funcionando inicializar el traductor"<<endl;

    return 0;
}
