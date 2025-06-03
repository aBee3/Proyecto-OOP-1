#include <iostream>
#include "Texto.h"
#include <vector>

// ====================================================
//                  CONSTRUCTOR (default)
// ====================================================

Texto::Texto(): original(""), traduccion(""), pronunciacion(""), idioma(0){};

Texto::Texto(int Idi, const std::string Ori)
    : idioma(Idi), original(Ori), traduccion(""), pronunciacion("") {};


// ====================================================
//                      SETTERS 
// ====================================================
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

// ====================================================
//                         GETTERS
// ====================================================

std::string Texto::getOriginal()        const { return original; }
std::string Texto::getTraduccion()      const { return traduccion; }
std::string Texto::getPronunciacion()   const { return pronunciacion; }
int Texto::getIdioma()                  const { return idioma; }



// No defino Traducir() porque es virtual
