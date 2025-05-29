
#ifndef TEXTO_CHINO_H
#define TEXTO_CHINO_H

#include "Texto.h"

class TextoChino : public Texto
{
public:
    // CONSTRUCTOR
    TextoChino();
    TextoChino(const std::string& ori);

    // OVERRIDE & OVERLOAD
    void traducir();
};

#endif

