/*
 * Proyecto Traductor CHINO - ESPAÑOL (Traductor .h)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El header de la clase Traductor encargada de manejar los textos, 
 * definimos los constructores default, inicializa el arreglo para 
 * sostener apuntadores de tipo texto 
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
    /**
     * Los getters regresan el string de Glosario y Lectura respectivamente.
     *
     * @param
     * @return string con los valores de Glosario y Lectura.
     */

     
    // MÉTODOS
   
    void traducir();
    /**
     * traducir llama a la función traducir de cada elemento texto 
     * en el arreglo textos.
     *
     * concatena todos los valores de los atributos en un string para ser impreso
     *
     * @param
     * @return
     */
    
    void addTexto(Texto* nuevoTexto);
    /**
     * addTexto agrega textos específicos al arreglo, puede ser un texto en español o
     * un texto en chino (creados en el main).
     *
     * @param apuntador de clase texto
     * @return
     */
    
    void armarGlosario();
    /**
     * armarGlosario hace un string estético con las palabras y fraces traducidas.
     * Concatena las palabras en un string con diseño.
     *
     * @param
     * @return 
     */
  
    void armarLectura();
    /**
     * armarLectura convierte a atributos a string.
     *
     * concatena todos los valores de los atributos en un string para ser impreso
     *
     * @param
     * @return 
     */
   
    void mostrarTraducciones() ;
    /**
     * mostrarTraducciones prints las traducciones de tus textos
     *
     * concatena todos los valores de los atributos en un string para ser impreso
     *
     * @param
     * @return 
     */

        

    void mostrarPronunciaciones() ;
    /**
     * mostrarPronunciaciones prints las pronunciaciones de tus textos
     *
     * concatena todos los valores de los atributos en un string para ser impreso
     *
     * @param
     * @return 
     */
  
    void mostrarTextos() ;
    /**
     * mostrarTextos prints los textos que el usuario ingresó
     *
     * concatena todos los valores de los atributos en un 
     * string para ser impreso
     *
     * @param
     * @return 
     */
        

    std::string leerDiccionarioEsp();
    /**
     * leerDiccionario() actualiza el diccionario  y regresa las palabras 
     * en español que contiene
     *
     * Extrae las palabras en español del diccionario
     *
     * @param
     * @return string de las palabras que el usuario puede usar
     */

    void exportar(const std::string& nombreArchivo) ;
    /**
     * exportar() convierte la lectura y el glosario en un sólo archivo de texto. 
     * Crea el archivo, lo pega y lo exporta.
     *
     * @param nombre del archivo con el que será creado
     * @return 
     */
   
};

#endif
