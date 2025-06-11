
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
    /**
     * traducir() es un método sobre-escrito que busca la palabra en CHINO 
     * y regresa la palabra en ESPAÑOL, además de la pronunciación.
     * Abre el diccionario, guarda las palabras buscando el texto en CHINO,
     * regresa las traducciones y rellena los datos faltantes.
     * Si no lo encuentra, regresa [?]
     * 
     *
     * @param
     * @return 
     */
    
};

#endif

