#include "Traductor.h"
#include <iostream>
#include <vector>
using namespace std;

// CONSTRUCTOR
Traductor::Traductor()
{

    original = "";
    idioma   =  1;        
    std::vector<std::string> idiomas = {"Español", "Chino"};
    texto    = nullptr;
    lectura  = "";
    glosario = "";
}

Traductor::Traductor(int idi, const string & ori){
    std::cout << "Ingrese el idioma de origen \n     0 = Español\n     1 = Chino ";
    std::cin >> idioma; // Guardamos el idioma de origen
    std::cout << "Ingresa tu texto en " << idiomas[idioma] << std::endl;
    std::cin >> original; // Guardamos el texto original
    std::cout << "Traducir tu texto\n-->\n" << original << "\n\n Al idioma\n-> "<< idiomas[idioma] << "?"<< std::endl;
}

//Constructor
Traductor::Traductor(int idioma, const string&  original, string estilo) {
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

void Traductor::setIdioma(int Idioma){
    idioma = Idioma;
}

// GETTERS
string Traductor::getOriginal(){
    return original;
}


int Traductor::getIdioma(){
    return int(idioma);
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
void Traductor::armarGlosario(const std::string& traduccion, const std::string& pronunciacion){
    const string& glosario = traduccion + " — " + pronunciacion;
}

void Traductor::armarLectura(const std::string& traduccion, const std::string& pronunciacion){
    if (texto)
    const string& lectura = texto->getOriginal() + "\n" + pronunciacion + "\n" + traduccion;
}

// MÉTODOS faltantes
void Traductor::mostrarTraduccion()   const { /* falta */ }
void Traductor::mostrarPronunciacion()const { /* falta */ }
void Traductor::exportar()            const { /* falta */ }

// Método para crear ejemplos de traductores
void Traductor::ejemplo()             const {
    Texto textoEnEspañol(1, "Después del trabajo me gusta jugar fútbol.");
    Texto textoEnChino(2, "下班后我喜欢踢足球。"); // Pronunciación : xiàbānhòu wǒxǐhuān tīzúqiú
}