#include "Traductor.h"
#include <iostream>
#include <vector>
using namespace std;

// CONSTRUCTOR
Traductor::Traductor(){
    index = 0;
    cantidad = 10;
    textos.resize(10, nullptr);
    idioma   =  1;        
    lectura  = "";
    glosario = "";
    std::cout<<"Traductor default creado"<<endl;
}


Traductor::Traductor(int cant){
    index = 0;
    cantidad = cant;
    textos.resize(cantidad, nullptr); 
    idioma   =  1;        
    lectura  = "";
    glosario = "";
}

// DESTRUCTOR
Traductor::~Traductor() {
	for (auto texto : textos) {
            delete texto;
}}

// SETTERS
void Traductor:: setCantidad(const int&  cant){
    cantidad = cant;
}

void Traductor::setIndex(const int & ind){
    index = ind;
}

void Traductor::setLectura(const std::string & lect){
    lectura = lect;
}

void Traductor::setGlosario(const std::string & glos){
    glosario = glos;
}

// GETTERS
int Traductor::getCantidad(){
    return cantidad;
}

int Traductor::getIndex(){
    return index;
}

string Traductor::getGlosario(){
    return string(glosario);
}

string Traductor::getLectura(){
    return string(lectura);
}


// MÉTODOS
void Traductor::addTexto(){
    textos[index] = new Texto(1); // el uno es porque quiero el método sobreescrito que pide al usuario agregar texto
    
    setIndex(index);
}

void Traductor::armarGlosario(const std::string& traduccion, const std::string& pronunciacion){
    const string& glosario = traduccion + " — " + pronunciacion;
}
void Traductor::armarLectura(const std::string& traduccion, const std::string& pronunciacion){}

// MÉTODOS faltantes
void Traductor::mostrarTraducciones()   const { /* falta */ }
void Traductor::mostrarPronunciaciones()const { /* falta */ }
void Traductor::mostrarTextos() const{ }

// Exportar lo hecho por el traductor a formato de texto
void Traductor::exportar()            const { /* falta */ }

// Método para crear ejemplos de traductores
void Traductor::ejemplo()             const {
    Texto textoEnEspañol(1, "Después del trabajo me gusta jugar fútbol.");
    Texto textoEnChino(2, "下班后我喜欢踢足球。"); // Pronunciación : xiàbānhòu wǒxǐhuān tīzúqiú
}