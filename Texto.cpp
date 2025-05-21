#include "Texto.h"

// CONSTRUCTOR (vacío)
Texto::Texto(){
    // Como el texto puede que sea largo, usaré referencias y const para estas variables.
    string original       = "";
    string traduccion     = "";
    string pronunciacion  = "";
    estilo         = "";
    idioma         = "";
}

Texto::Texto(string Idi, string Ori){
    string original = Ori;
    string traduccion = "";
    string pronunciacion = "";
    estilo ="";
    idioma = Idi;
}

// SETTERS
void Texto::setOriginal(string txt)      { string  original      = txt; }
void Texto::setTraduccion(string txt)    { string traduccion    = txt; }
void Texto::setPronunciacion(string txt) { string  pronunciacion = txt; }
void Texto::setIdioma(string lang)              { idioma        = lang; }
void Texto::setEstilo(string est)               { estilo        = est; }

// GETTERS
std::string Texto::getOriginal()        { return original; }
std::string Texto::getTraduccion()      { return traduccion; }
std::string Texto::getPronunciacion()   { return pronunciacion; }
std::string Texto::getIdioma()          { return idioma; }
std::string Texto::getEstilo()          { return estilo; }

// MÉTODOS VACÍOS: FALTAN POR IMPLEMENTAR
void Texto::traducir() { /*TRADUCIR bla bla bla chingchongching*/ }
void Texto::traducir(const string&  ori, string idi, string est) { /* falta */ }
