#ifndef TEXTO_ESPAÑOL_H
#define TEXTO_ESPAÑOL_H

#include "Texto.h"

class TextoEspañol : public Texto
{
public:
    // CONSTRUCTOR
    TextoEspañol();
    TextoEspañol(const std::string& ori) : Texto(1, ori) {}

    // OVERRIDE & OVERLOAD
    void traducir();
};

#endif
