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
Traductor::Traductor(string idioma, const string&  original, string estilo) {
	texto = new Texto(idioma, original);
}

// DESTRUCTOR
Traductor::~Traductor() {
	delete texto;
}
// SETTERS
void Traductor:: setOriginal(const string&  ori){
    original = ori;
}

void Traductor::setIdioma(string Idioma){
    idioma = Idioma;
}

// GETTERS
string Traductor::getOriginal(){
    return original;
}


string Traductor::getIdioma(){
    return string(idioma);
}

string Traductor::getGlosario()
{
return string(glosario);
}

string Traductor::getLectura()
{
return string(lectura);
}

// MÉTODOS PARA GLOSARIO Y LECTURA
void Traductor::armarGlosario(const std::string& traduccion,
                              const std::string& pronunciacion)
{
    const string& glosario = traduccion + " — " + pronunciacion;
}

void Traductor::armarLectura(const std::string& traduccion,
                             const std::string& pronunciacion)
{
    if (texto)
        const string& lectura = texto->getOriginal() + "\n" + pronunciacion + "\n" + traduccion;
}

// MÉTODOS faltantes
void Traductor::mostrarTraduccion()   const { /* falta */ }
void Traductor::mostrarPronunciacion()const { /* falta */ }
void Traductor::ejemplo()             const { /* falta */ }
void Traductor::exportar()            const { /* falta */ }
