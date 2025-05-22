#ifndef TRADUCTOR_H
#define TRADUCTOR_H

#include <string>
#include <vector>
#include "Texto.h"
using namespace std;

class Traductor
{
private:
    std::vector<Texto*> textos;            // PUNTERO con 10 objetos texto
    int idioma;
    int cantidad;
    int index;
    std::string lectura;
    std::string glosario;

public:
    // CONSTRUCTOR
    Traductor(); // default
    Traductor(int cantidad);

    // Destructor (limpiar)
    ~Traductor();  

    // SETTER
    void addTexto();
    void setCantidad(const int&  ori);
    void setIndex(const int& ind);
    void setLectura(const std::string& lect);
    void setGlosario(const std::string& glos);

    //GETTERS
    int getCantidad();
    int getIndex();
    std::string getGlosario();
    std::string getLectura();

    // MÉTODOS
    void armarGlosario(const std::string& trad,
                       const std::string& pron);
    void armarLectura(const std::string& trad,
                      const std::string& pron);

    // Métodos reales
    void mostrarTraducciones() const;
    void mostrarPronunciaciones() const;
    void mostrarTextos() const;
    void ejemplo() const;
    void exportar() const;
};

#endif
