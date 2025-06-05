
/*
 * Proyecto Traductor CHINO - ESPAÑOL (Texto.h)
 * Abigail Godoy Araujo
 * A01709167
 * 05/06/2025
 * 
 * El header de la clase texto, incluye sus atributos y la definición de métodos.
 */

#ifndef TEXTO_H
#define TEXTO_H
#include <string>

class Texto{
    protected:                          // Protected para herencia
        int idioma;                     // 1 = Español,    2 = Chino
        std::string original;           
        std::string traduccion;
        std::string pronunciacion;

    public:
        //   CONSTRUCTORES ========================= 
        Texto();
        Texto(int Idi, const std::string Ori); // const le quita las copias innecesarias
        virtual ~Texto                   () = default;   // DESTRUCTOR 

        // GETTERS       ========================= 
        std::string getOriginal()        const      ;
        std::string getTraduccion()      const      ;
        std::string getPronunciacion()   const      ;
        int         getIdioma()          const      ;

    // ========================= 
    //     Metodo virtual
    // ========================= 
    
    virtual void traducir() = 0;
    
};

#endif
