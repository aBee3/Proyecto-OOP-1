/*
 * Proyecto Traductor CHINO - ESPAÑOL (Texto Español .h)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El header de Texto Español, incluye sus constructores y su único método virtual
 */


#ifndef TEXTO_ESPAÑOL_H
#define TEXTO_ESPAÑOL_H

#include "Texto.h"

class TextoEspañol : public Texto
{
public:
    // CONSTRUCTOR
    
    TextoEspañol();
    TextoEspañol(const std::string& ori) : Texto(1, ori) {}

    // OVERRIDE & OVERLOAD
    
    void traducir();
    /**
     * traducir() es un método sobre-escrito que busca la palabra en español 
     * y regresa la palabra en chino, además de la pronunciación.
     * Abre el diccionario, guarda las palabras buscando el texto en español,
     * regresa las traducciones y rellena los datos faltantes.
     * Si no lo encuentra, regresa [?]
     * 
     *
     * @param
     * @return 
     */

    
};

#endif
