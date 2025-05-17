#ifndef TRADUCTOR_H
#define TRADUCTOR_H

#include <string>
#include "Texto.h"

class Traductor
{
private:
    Texto* texto;            // PUNTERO PARA POLIMORFISMO
    std::string lectura;
    std::string glosario;

public:
    // CONSTRUCTOR
    Traductor();
    explicit Traductor(Texto* t);
    // DESTRUCTOR
    ~Traductor();  // ignoren por ahora pero es para el polimorfismo

    // SETTER
    void setTexto(Texto* t);

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
