/*
 * Proyecto Traductor a idiomas con otros sistemas de escritura
 * Abigail Godoy Araujo A01709167
 * El tdisplayManager provee de ejemplos, exporta recibe, limpia y muestra el texto (incluso lo puede exportar a un nuevo archivo).
 */

#ifndef MANAGER_H_
#define MANAGER_H_
#include "translator.h"
#include <string>
using namespace std;

// CLASE: DISPLAY MANAGER
class DisplayManager{
    private:
    string Idioma;
    string Original;
    string Estilo; //puede ser pronunciacion o traducción
    string Pronunciacion;
    string Traduccion;
    
    public:
    DisplayManager(): Idioma("") , Original(""), Estilo(""), Traduccion(""), Pronunciacion("") {}; //constructor por default
    // Getters
    string getOriginal(); //Guarda el texto
    string getTraduccion();
    string getPronunciacion();
    string getIdioma();
    
    //Setters
        void setOriginal(string original){
            Original = original;
        }

// Faltaría implementar los métodos de traducción con los traductores
        void traducir(string Original, string Idioma, string Estilo){};
        void display();
        void ejemplo(); // Crea un ejemplo
        void exportar(); // Lo manda a un archivo

};

#endif // MANAGER_H_