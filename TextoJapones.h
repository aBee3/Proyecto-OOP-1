#ifndef TEXTO_JAPONES_H
#define TEXTO_JAPONES_H

#include "Texto.h"

class TextoJapones : public Texto
{
public:
    // CONSTRUCTOR
    TextoJapones(const std::string& original, const std::string& estilo);

    // OVERRIDE & OVERLOAD
    void traducir() override;
    void traducir(const std::string& original,
                  const std::string& idioma,
                  const std::string& estilo) override;
};

#endif
