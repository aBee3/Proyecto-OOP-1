#include <iostream>
#include "Texto.h"
#include <vector>

// CONSTRUCTOR (vacío)
Texto::Texto(){
    // Como el texto puede que sea largo, usaré referencias y const para estas variables.
    std::string original       = "";
    std::string traduccion     = "";
    std::string pronunciacion  = "";
    estilo         = 1; // Traducción por default
    idioma         = 1; // Español por default 
}

// Aquí le voy a poner un int sólo para diferenciar que este inicializa todo.
Texto::Texto(int idioma){
    int ans = 0;
    std::vector<std::string> idiomas = {"Español", "Chino"};
    std::cout << "Ingrese el idioma de origen \n     0 = Español\n     1 = Chino\n\n";
    std::cin >> idioma; // Guardamos el idioma de origen
    std::cout << "Ingresa tu texto en " << idiomas[idioma] <<"\n"<< std::endl;
    std::cin >> original; // Guardamos el texto original
    std::cout << "LISTO"<< std::endl;
}

Texto::Texto(int Idi, std::string Ori){
    std::string original = Ori;
    std::string traduccion = "";
    std::string pronunciacion = "";
    estilo = 1;
    idioma = 1;
}

// SETTERS
void Texto::setOriginal(std::string txt)      {std::string  original      = txt; }
void Texto::setTraduccion(std::string txt)    {std::string traduccion    = txt; }
void Texto::setPronunciacion(std::string txt) {std::string  pronunciacion = txt; }
void Texto::setIdioma(int idi)                { idioma        = idi; }
void Texto::setEstilo(int est)                { estilo        = est; }

// GETTERS
std::string Texto::getOriginal() const  { return original; }
std::string Texto::getTraduccion()      { return traduccion; }
std::string Texto::getPronunciacion()   { return pronunciacion; }
int Texto::getIdioma()                  { return idioma; }
int Texto::getEstilo()                  { return estilo; }

// MÉTODOS VACÍOS: FALTAN POR IMPLEMENTAR
void Texto::traducir() {
    original = "Método traducir base";
    std::cout << original;
 }
void Texto::traducir(const std::string&  ori, const int& est) { 
    estilo = 2;
    original = "clase base";
}

