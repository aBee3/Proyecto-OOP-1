#ifndef TRADUCTOR_H
#define TRADUCTOR_H

#include <string>
#include "Texto.h"
using namespace std;

class Traductor
{
private:
    Texto* texto;            // PUNTERO
    int idioma;
    std::string original;
    std::string lectura;
    std::string glosario;

public:
    // CONSTRUCTOR
    Traductor(); // default
    Traductor(int idioma, const string&  original, string estilo);

    // Destructor (limpiar)
    ~Traductor();  

    // SETTER
    void setOriginal(const string&  original);
    void setIdioma(int idioma);


    //GETTERS
    std::string getOriginal();
    int getIdioma();
    std::string getGlosario();
    std::string getLectura();

    // MÉTODOS
    void armarGlosario(const std::string& traduccion,
                       const std::string& pronunciacion);
    void armarLectura(const std::string& traduccion,
                      const std::string& pronunciacion);

    // No sé si deba usar pasarelas o los pointers

    // Métodos reales
    void mostrarTraduccion() const;
    void mostrarPronunciacion() const;
    void ejemplo() const;
    void exportar() const;
};

#endif
