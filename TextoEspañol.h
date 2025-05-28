#ifndef TEXTO_ESPAÑOL_H
#define TEXTO_ESPAÑOL_H

#include "Texto.h"

class TextoEspañol : public Texto
{
public:
    // CONSTRUCTOR

    //TextoEspañol();
    TextoEspañol(const std::string& original); 

    // OVERRIDE & OVERLOAD
    void traducir();
    //void traducir(const std::string& original);
};

#endif