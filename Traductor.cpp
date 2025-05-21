#include "Traductor.h"
using namespace std;

// CONSTRUCTOR
Traductor::Traductor()
{
    original = "Me gusta el mango amarillo.";
    idioma = "Español";
    texto    = nullptr;
    lectura  = "";
    glosario = "";
}

//Constructor
Traductor::Traductor(string idioma, string original) {
	texto = new Texto(original, idioma);
}

// DESTRUCTOR
Traductor::~Traductor() {
	delete texto;
}
// SETTERS
void Traductor:: setOriginal(std::string ori){
    original = ori;
}

void Traductor::setIdioma(string Idioma){
    idioma = Idioma;
}

// GETTERS
string Traductor::getOriginal(){
    return string(original);
}

string Traductor::getIdioma(){
    return string(idioma);
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

// MÉTODOS faltantes
void Traductor::mostrarTraduccion()   const { /* falta */ }
void Traductor::mostrarPronunciacion()const { /* falta */ }
void Traductor::ejemplo()             const { /* falta */ }
void Traductor::exportar()            const { /* falta */ }
