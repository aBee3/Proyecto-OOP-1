#include "TextoJapones.h"

// CONSTRUCTOR
TextoJapones::TextoJapones(const std::string& original, const std::string& estilo)
{
    this->original = original; //ya estoy usando los pointers mejor
    this->estilo   = estilo;
    idioma         = "japonés";
    traduccion     = "";
    pronunciacion  = "";
}

void TextoJapones::traducir() { /* falta */ }
void TextoJapones::traducir(const std::string&, const std::string&, const std::string&) { /* falta */ }
