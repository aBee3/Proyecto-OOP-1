/*
 * Proyecto Traductor CHINO - ESPAÑOL (Traductor .cpp)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * Encargada de manejar los textos, definimos los constructores default, inicializa el arreglo para sostener apuntadores de tipo texto 
 * haciendo uso del doble apuntador.
 * 
 */


#include "Traductor.h"
#include "TextoEspañol.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

// CONSTRUCTOR
Traductor::Traductor(){
    index = 0;
    cantidad = 10;
    textos = new Texto*[cantidad];           // (AGREGACIÓN) Inicializamos un arreglo de tamaño fijo
    idioma   =  1;        
    lectura  = "";
    glosario = "";
    std::cout<<"Traductor default creado"<<endl;
}


Traductor::Traductor(int cantidad) : cantidad(cantidad), index(0) {
    textos = new Texto*[cantidad];
}


// SETTERS
string Traductor::getGlosario(){
    return glosario;
}

string Traductor::getLectura(){
    return lectura;
}

// MÉTODOS

void Traductor::addTexto(Texto* nuevoTexto) {
    if (index < cantidad) {
        textos[index] = nuevoTexto; // Pongo el  nuevo texto en la lista de textos
        index++;  // Movemos el índice
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
    glosario = "----------------------------------------------\n"
               " Glosario:\n"
               "----------------------------------------------\n";
    glosario += "ORIGINAL  -   TRADUCCIÓN -  PRONUNCIACIÓN\n";

    for (int i = 0; i < cantidad; ++i)
    {
        glosario += std::to_string(i + 1) + ".\n";

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
            std::string palabraO;
            while (o < lenO && original[o] != ' ')
                palabraO += original[o++];
            o++;

            // palabra traducción
            std::string palabraT;
            while (t < lenT && traduccion[t] != ' ')
                palabraT += traduccion[t++];
            t++;

            // palabra pronunciación
            std::string palabraP;
            while (p < lenP && pronunciacion[p] != ' ')
                palabraP += pronunciacion[p++];
            p++;

            // Agregar la línea al glosario
            glosario += palabraO + " -> " + palabraT + " — " + palabraP + "\n";
        }

        glosario += "----------------------------------------------\n";
    }
}



void Traductor::armarLectura(){
    mostrarTextos(); 
    std::cout<< "\n"<<std::endl;
    traducir();
    mostrarTraducciones();
}

// MÉTODOS
void Traductor::mostrarTraducciones() {
    lectura = "----------------------------------------------\n"
               "Traducciones:\n"
               "----------------------------------------------\n";

    for (int i = 0; i < cantidad; i++) {
        lectura += std::to_string(i + 1) + "\n";
        lectura += "Original: " + textos[i]->getOriginal() + "\n";
        lectura += "Traducción: " + textos[i]->getTraduccion() + "\n";
        lectura += "Pronunciación: " + textos[i]->getPronunciacion() + "\n";
    }

    lectura += "----------------------------------------------\n\n";

    std::cout << lectura;  // Print after modifying
}

void Traductor::mostrarPronunciaciones() { 
    lectura += "----------------------------------------------\n"
               "Pronunciaciones:\n"
               "----------------------------------------------\n";

    for (int i = 0; i < cantidad; i++) {
        lectura += std::to_string(i + 1) + "\n";
        lectura += "Traducción: " + textos[i]->getTraduccion() + "\n";
        lectura += "Pronunciación: " + textos[i]->getPronunciacion() + "\n";
    }

    lectura += "----------------------------------------------\n\n";

    std::cout << lectura;  // Print after modifying
}

void Traductor::mostrarTextos()  {
    lectura += "Lista de textos:\n";

    for (int i = 0; i < cantidad; i++) {
        if (textos[i] != nullptr) {
            lectura += std::to_string(i + 1) + ".  " + textos[i]->getOriginal() + "\n";
        } else {
            lectura += "Error: textos[" + std::to_string(i) + "] no existe.\n";
        }
    }

    lectura += "----------------------------------------------\n\n";

    std::cout << lectura;  
}

std::string Traductor::leerDiccionarioEsp(){
    std::ifstream archivo("diccionario.txt");;
    std::string linea, palabra, palabrasEsp;
    bool esp = true; 

    if (archivo.is_open() == false) {
        return "Cierra el diccionario antes de usar: \n";
    }

    while (std::getline(archivo, linea)) {
        std::istringstream stream(linea);
        stream >> palabra;  

        if (esp) {
            palabrasEsp = palabra;  
            esp = false;
        } else {
            palabrasEsp += " " + palabra;
        }
    }

    archivo.close();
    return palabrasEsp;
}




// Exportar lo hecho por el traductor a formato de texto

#include <fstream>  // Librería para los archivos

void Traductor::exportar(const std::string& nombreArchivo)
{
    std::ofstream archivo(nombreArchivo);  // Crear un archivo nuevo con el nombre

    if (archivo.is_open()) {
        archivo << glosario;  // Escribe lo que hay en el glosario
        archivo << lectura;
        archivo.close();       // Close the file
        std::cout << "Se exportó tu glosario ^^ : " << nombreArchivo << std::endl;
    } else {
        std::cerr << "ERROR!: " << nombreArchivo << std::endl;
    }
}

