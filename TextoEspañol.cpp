#include "TextoEspañol.h"

// CONSTRUCTOR
TextoEspañol::TextoEspañol(const std::string& original, const int& estilo)
{
    this->original = original; //ya estoy usando los pointers mejor
    this -> estilo =  1; // Traducción por default
    idioma         = 1; //1= Español
    traduccion     = "";
    pronunciacion  = "";
}

void TextoEspañol::traducir() {
    original = 93853;
 }
void TextoEspañol::traducir(const std::string& original, const int& idioma, const int& estilo) { 
    
 }
