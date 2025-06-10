/*
 * Proyecto Traductor CHINO - ESPAÑOL (Traductor .h)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El header de la clase Traductor encargada de manejar los textos, definimos los constructores default, inicializa el arreglo para sostener apuntadores de tipo texto 
 * haciendo uso del doble apuntador.
 * 
 */

#ifndef TRADUCTOR_H
#define TRADUCTOR_H

#include <string>
#include <vector>
#include "Texto.h"
using namespace std;

class Traductor
{
private:
    Texto** textos;            // Doble puntero para usarlo en lugar del vector
    int idioma;       
    int cantidad;
    int index;
    std::string lectura;
    std::string glosario;

public:
    // CONSTRUCTOR
    Traductor(); // default
    Traductor(int cantidad);
    
    //GETTERS
    std::string getGlosario();
    std::string getLectura();

    // MÉTODOS
    void traducir();
    void addTexto(Texto* nuevoTexto);
    void armarGlosario();
    void armarLectura();

    // Métodos reales
    void mostrarTraducciones() ;
    void mostrarPronunciaciones() ;
    void mostrarTextos() ;
    std::string leerDiccionarioEsp();

    void exportar(const std::string& nombreArchivo) ;
};

#endif
