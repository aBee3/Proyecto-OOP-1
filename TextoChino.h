
/*
 * Proyecto Traductor CHINO - ESPAÑOL (Header Texto Chino)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El Header de la clase hija Texto Chino
 */


#ifndef TEXTO_CHINO_H
#define TEXTO_CHINO_H

#include "Texto.h"

class TextoChino : public Texto
{
public:
    // CONSTRUCTOR
    TextoChino();
    TextoChino(const std::string& ori);

    // Polimorfismo
    void traducir();
};

#endif

