#include "Traductor.h"
#include <iostream>
#include <vector>
using namespace std;

// CONSTRUCTOR
Traductor::Traductor(){
    index = 0;
    cantidad = 10;
    textos = new Texto*[cantidad];
    idioma   =  1;        
    lectura  = "";
    glosario = "";
    std::cout<<"Traductor default creado"<<endl;
}


Traductor::Traductor(int cantidad) : cantidad(cantidad), index(0) {
    textos = new Texto*[cantidad];
    for (int i = 0; i < cantidad; i++) {
        textos[i] = nullptr;
    }
}

// DESTRUCTOR
Traductor::~Traductor() {
    for (int i = 0; i < cantidad; i++) {
        delete textos[i]; 
    }
    delete[] textos; 
}



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

void Traductor::addTexto(Texto* nuevoTexto) {
    if (index < cantidad) {
        textos[index] = nuevoTexto; // Pongo el  nuevo texto en la lista de textos
        this-> index++;  // Movemos el índice
    } else {
        cout << "No hay espacio para más textos." << endl;
    }
}



void Traductor::traducir(){
    std::cout << "Traduciendo..."<<std::endl;
    for (int i = 0; i < cantidad; i++) {
        textos[i] -> traducir();
    }
    std::cout <<"\nLISTO\n"<< std::endl;
}

void Traductor::armarGlosario()
{
    std::cout << "----------------------------------------------\n"
                 " Glosario:\n"
                 "----------------------------------------------" << std::endl;
    std::cout << "ORIGINAL  -   TRADUCCIÓN -  PRONUNCIACIÓN\n";

    for (int i = 0; i < cantidad; ++i)
    {
        std::cout << i + 1 << std::endl;

        std::string original      = textos[i]->getOriginal();
        std::string traduccion    = textos[i]->getTraduccion();
        std::string pronunciacion = textos[i]->getPronunciacion();

        // Indices para dividir la frase en palabras
        int o = 0, t = 0, p = 0;
        int lenO = original.length();
        int lenT = traduccion.length();
        int lenP = pronunciacion.length();

        while (o < lenO || t < lenT || p < lenP)
        {
            // palabra original
            std::string palabraO = "";
            while (o < lenO && original[o] != ' ')
            {
                palabraO += original[o];
                o++;
            }
            o++;

            // palabra traducción
            std::string palabraT = "";
            while (t < lenT && traduccion[t] != ' ')
            {
                palabraT += traduccion[t];
                t++;
            }
            t++;

            // palabra pronunciación
            std::string palabraP = "";
            while (p < lenP && pronunciacion[p] != ' ')
            {
                palabraP += pronunciacion[p];
                p++;
            }
            p++;

            // mostrar el resultadol
            std::cout << palabraO << " -> " << palabraT << " — " << palabraP << std::endl;
        }

        std::cout << "----------------------------------------------\n";
    }
}


void Traductor::armarLectura(const std::string& traduccion, const std::string& pronunciacion){}

// MÉTODOS
void Traductor::mostrarTraducciones()   const {
    std::cout << "----------------------------------------------\nTraducciones: \n----------------------------------------------"<<std::endl;
    for (int i = 0; i < cantidad; i++) {
        std::cout << i +1 << std::endl;
        std::string original = textos[i] -> getOriginal();
        std::cout << "Original: "<< original << std::endl;
        std::string traduccion = textos[i] -> getTraduccion();
        std::cout << "Traducción: "<< traduccion << std::endl;
        std::string pronunciacion = textos[i] -> getPronunciacion();
        std::cout << "Pronunciación: "<< pronunciacion << std::endl;
    }
    std::cout <<"----------------------------------------------\n"<< std::endl;
}
void Traductor::mostrarPronunciaciones()const { /* falta */ }

void Traductor::mostrarTextos() const {
    cout << "Lista de textos:" << endl;
    for (int i = 0; i < cantidad; i++) {
        if (textos[i] != nullptr) {
            cout << i+1 <<".  "<< textos[i]->getOriginal() << endl; 
        }
        else {
            cout << "Error: textos[" << i << "] es nullptr." << endl;
        }
    }
}


// Exportar lo hecho por el traductor a formato de texto
void Traductor::exportar()            const { /* falta */ }

// Método para crear ejemplos de traductores
void Traductor::ejemplo()             const {
    
}