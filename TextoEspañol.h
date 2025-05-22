#ifndef TEXTO_ESPAÑOL_H
#define TEXTO_ESPAÑOL_H

#include "Texto.h"

class TextoEspañol : public Texto
{
public:
    // CONSTRUCTOR
    TextoEspañol(const std::string& original, const int& estilo);

    // OVERRIDE & OVERLOAD
    void traducir();
    void traducir(const std::string& original, const int& idioma, const int& estilo);
};

#endif
