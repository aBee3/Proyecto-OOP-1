#include "Traductor.h"

// CONSTRUCTOR
Traductor::Traductor()
{
    texto    = nullptr;
    lectura  = "";
    glosario = "";
}

// CONSTRUCTOR (recibe pointer hacia Texto)
Traductor::Traductor(Texto* t)
{
    texto    = t; // el puntero
    lectura  = "";
    glosario = "";
}

// DESTRUCTOR
Traductor::~Traductor()
{
    delete texto;  // 
}

// SETTER
void Traductor::setTexto(Texto* t)
{
    texto = t;
}

// MÉTODOS PARA GLOSARIO Y LECTURA
void Traductor::armarGlosario(const std::string& traduccion,
                              const std::string& pronunciacion)
{
    glosario = traduccion + " — " + pronunciacion;
}

void Traductor::armarLectura(const std::string& traduccion,
                             const std::string& pronunciacion)
{
    if (texto)
        lectura = texto->getOriginal() + "\n" + pronunciacion + "\n" + traduccion;
}

// Si pongo pasarelas aquí las pondría pero no creo 

// MÉTODOS faltantes
void Traductor::mostrarTraduccion()   const { /* falta */ }
void Traductor::mostrarPronunciacion()const { /* falta */ }
void Traductor::ejemplo()             const { /* falta */ }
void Traductor::exportar()            const { /* falta */ }
