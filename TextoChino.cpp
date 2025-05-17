#include "TextoChino.h"

/* constructor */
TextoChino::TextoChino(const std::string& original,
                           const std::string& estilo)
        : Texto(original, estilo) {}

/* traducción — por ahora vacío */
void TextoChino::traducir() { /* TODO */ }
void TextoChino::traducir(const std::string&, const std::string&,
                            const std::string&) { /* TODO */ }
