/*
 * Proyecto Traductor a idiomas con otros sistemas de escritura
 * Abigail Godoy Araujo A01709167
 * El tdisplayManager provee de ejemplos, exporta recibe, limpia y muestra el texto (incluso lo puede exportar a un nuevo archivo).
 */

#ifndef MANAGER_H_
#define MANAGER_H_

// El display Manager está compuesto de translators.

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
    string getOriginal(){
        return Original;
    }; //Guarda el texto
    string getTraduccion(){
        return Traduccion;
    };
    string getPronunciacion(){
        return Pronunciacion;
    };
    string getIdioma(){
        return Idioma;
    };
    
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