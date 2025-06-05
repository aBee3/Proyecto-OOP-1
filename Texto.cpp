
/*
 * Proyecto Traductor CHINO - ESPAÑOL (Texto.cpp)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * Define los métodos del header Texto, la cual es la clase abstracta para los dos tipos de texto (Español y Chino).
 * Pueden haber más sentidos de traducción de tipo texto.
 * Encargado del método de buscar y regresar la traducción y la pronunciación.
 * 
 */

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
//                         GETTERS
// ====================================================

std::string Texto::getOriginal()        const { return original; }
std::string Texto::getTraduccion()      const { return traduccion; }
std::string Texto::getPronunciacion()   const { return pronunciacion; }
int Texto::getIdioma()                  const { return idioma; }



// No defino Traducir() porque es virtual
