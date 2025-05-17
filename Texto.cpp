#include "Texto.h"

// CONSTRUCTOR (vacío)
Texto::Texto()
{
    original       = "";
    idioma         = "";
    traduccion     = "";
    pronunciacion  = "";
    estilo         = "";
}

// CONSTRUCTOR (sólo texto original)
Texto::Texto(const std::string& original)
{
    this->original      = original;
    idioma              = "";
    traduccion          = "";
    pronunciacion       = "";
    estilo              = "";
}

// CONSTRUCTOR (recibe texto original y estilo)
Texto::Texto(const std::string& original, const std::string& estilo)
{
    this->original      = original;
    idioma              = "";
    traduccion          = "";
    pronunciacion       = "";
    this->estilo        = estilo;
}

// SETTERS
void Texto::setOriginal(const std::string& txt)      { original      = txt; }
void Texto::setTraduccion(const std::string& txt)    { traduccion    = txt; }
void Texto::setPronunciacion(const std::string& txt) { pronunciacion = txt; }
void Texto::setIdioma(const std::string& lang)       { idioma        = lang; }
void Texto::setEstilo(const std::string& est)        { estilo        = est; }

// GETTERS
std::string Texto::getOriginal()       const { return original; }
std::string Texto::getTraduccion()     const { return traduccion; }
std::string Texto::getPronunciacion()  const { return pronunciacion; }
std::string Texto::getIdioma()         const { return idioma; }
std::string Texto::getEstilo()         const { return estilo; }

// MÉTODOS VACÍOS: FALTAN POR IMPLEMENTAR
void Texto::traducir() { /*TRADUCIR bla bla bla chingchongching*/ }
void Texto::traducir(const std::string&, const std::string&, const std::string&) { /* falta */ }
