#ifndef TEXTO_ESPAÑOL_H
#define TEXTO_ESPAÑOL_H

#include "Texto.h"

class TextoEspañol : public Texto
{
public:
    // CONSTRUCTOR
    TextoEspañol(const std::string& original, const std::string& estilo);

    // OVERRIDE & OVERLOAD
    void traducir() override;
    void traducir(const std::string& original,
                  const std::string& idioma,
                  const std::string& estilo) override;
};

#endif
