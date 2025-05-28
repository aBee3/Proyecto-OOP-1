#include <iostream>
#include "Texto.h"
#include <vector>

// Diccionario con palabras falsas


// CONSTRUCTOR (vacío)
Texto::Texto()
    : original(""), traduccion(""), pronunciacion(""), estilo(1), idioma(0){}

// Constructor principal
Texto::Texto(int Idi, const std::string Ori)
    : idioma(Idi), original(Ori), traduccion(""), pronunciacion(""), estilo(1) {}

// SETTERS
void Texto::setOriginal(std::string Ori) {
    this->original = Ori;
}

void Texto::setTraduccion(std::string txt) {
    this->traduccion = txt;
}

void Texto::setPronunciacion(std::string txt) {
    this->pronunciacion = txt;
}

void Texto::setIdioma(int idi) {
    this->idioma = idi;
}

void Texto::setEstilo(int est) {
    this->estilo = est;
}

// GETTERS
std::string Texto::getOriginal()        const { return original; }
std::string Texto::getTraduccion()      const { return traduccion; }
std::string Texto::getPronunciacion()   const { return pronunciacion; }
int Texto::getIdioma()                  const { return idioma; }
int Texto::getEstilo()                  const { return estilo; }

// Métodos para polimorfismo
void Texto::traducir() {
    std::cout<<"Método PADRE de traducción"<< std::endl;
 }

// Voy a tener que borrar estilo
/*
void Texto::traducir(const std::string&  ori) { 
    std::cout<< "Idioma no definido" <<std::endl;
}
    */

