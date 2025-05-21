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

Texto::Texto(string ori, string idi){
    original = ori;
    idioma = idi;
}

// SETTERS
void Texto::setOriginal(string txt)      { original      = txt; }
void Texto::setTraduccion(string txt)    { traduccion    = txt; }
void Texto::setPronunciacion(string txt) { pronunciacion = txt; }
void Texto::setIdioma(string lang)       { idioma        = lang; }
void Texto::setEstilo(string est)        { estilo        = est; }

// GETTERS
std::string Texto::getOriginal()        { return original; }
std::string Texto::getTraduccion()      { return traduccion; }
std::string Texto::getPronunciacion()   { return pronunciacion; }
std::string Texto::getIdioma()          { return idioma; }
std::string Texto::getEstilo()          { return estilo; }

// MÉTODOS VACÍOS: FALTAN POR IMPLEMENTAR
void Texto::traducir() { /*TRADUCIR bla bla bla chingchongching*/ }
void Texto::traducir(string ori, string idi, string est) { /* falta */ }
