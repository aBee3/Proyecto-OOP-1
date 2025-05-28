
#ifndef TEXTO_CHINO_H
#define TEXTO_CHINO_H

#include "Texto.h"

class TextoChino : public Texto
{
public:
    // CONSTRUCTOR
    //TextoChino(); // lo borré pero veamos qué sucede
    TextoChino(const std::string& original);

    // OVERRIDE & OVERLOAD
    void traducir();
    //void traducir(const std::string& original); //para la sobre escritura
};

#endif

