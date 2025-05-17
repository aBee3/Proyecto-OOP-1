#ifndef TEXTO_CHINO_H
#define TEXTO_CHINO_H

#include "Texto.h"

class TextoChino : public Texto
{
public:
    // CONSTRUCTOR
    TextoChino(const std::string& original, const std::string& estilo);

    // OVERRIDE & OVERLOAD
    void traducir() override;
    void traducir(const std::string& original,
                  const std::string& idioma,
                  const std::string& estilo) override; //para la sobre escritura
};

#endif

