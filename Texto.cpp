#include <iostream>
#include "Texto.h"
#include <vector>

// Diccionario con palabras falsas


// CONSTRUCTOR (vacío)
Texto::Texto()
    : original(""), traduccion(""), pronunciacion(""), estilo(1), idioma(0){}

/* Dudo usar esta parte, como es un puntero o uso this o uso la inicialización de arriba :)
// Aquí le voy a poner un int sólo para diferenciar que este inicializa todo.
Texto::Texto(int idioma){
    int ans = 0;
    std::vector<std::string> idiomas = {"Español", "Chino"};
    std::cout << "Ingrese el idioma de origen \n     0 = Español\n     1 = Chino\n\n";
    std::cin >> idioma; // Guardamos el idioma de origen
    std::cout << "Ingresa tu texto en " << idiomas[idioma] <<"\n"<< std::endl;
    std::cin >> original; // Guardamos el texto original
    std::cout << "LISTO"<< std::endl;
*/

Texto::Texto(int Idi, std::string Ori)
    : idioma(Idi), original(Ori), traduccion(""), pronunciacion(""), estilo(1) {}

// SETTERS
void Texto::setOriginal(std::string Ori) {
    this->original = Ori;
}

void Texto::setTraduccion(std::string txt) {
    this->traduccion = txt;
}

void Texto::setPronunciacion(std::string txt) {
    this->pronunciacion = txt;
}

void Texto::setIdioma(int idi) {
    this->idioma = idi;
}

void Texto::setEstilo(int est) {
    this->estilo = est;
}

// GETTERS
std::string Texto::getOriginal() const  { return original; }
std::string Texto::getTraduccion()      { return traduccion; }
std::string Texto::getPronunciacion()   { return pronunciacion; }
int Texto::getIdioma()                  { return idioma; }
int Texto::getEstilo()                  { return estilo; }

// Métodos para polimorfismo
void Texto::traducir() {
    
 }

// Voy a tener que borrar estilo
void Texto::traducir(const std::string&  ori, const int& est) { 
    this -> estilo = 2;
    this -> original = "clase base";
}

