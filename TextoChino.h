
#ifndef TEXTO_CHINO_H
#define TEXTO_CHINO_H

#include "Texto.h"

class TextoChino : public Texto
{
public:
    // CONSTRUCTOR
    TextoChino(const std::string& original, const int& estilo);

    // OVERRIDE & OVERLOAD
    void traducir() override;
    void traducir(const std::string& ori, int idi, int est) override; //para la sobre escritura
};

#endif

