#include "TextoEspañol.h"

// CONSTRUCTOR
TextoEspañol::TextoEspañol(const std::string& original, const std::string& estilo)
{
    this->original = original; //ya estoy usando los pointers mejor
    this->estilo   = estilo;
    idioma         = "japonés";
    traduccion     = "";
    pronunciacion  = "";
}

void TextoEspañol::traducir() { /* falta */ }
void TextoEspañol::traducir(const std::string&, const std::string&, const std::string&) { /* falta */ }
