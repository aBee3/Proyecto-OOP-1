#ifndef TEXTO_H
#define TEXTO_H
#include <string>

class Texto{
    protected:
        int idioma;                     // 1 = Español,    2 = Chino
        int estilo;                     // Lo voy a quitar ahorita
        std::string original;           // 0 = Traducción, 1 = Pronunciación
        std::string traduccion;
        std::string pronunciacion;

    public:
        // CONSTRUCTORES
        Texto();
        Texto                            (int Idi, const std::string Ori); // const le quita las copias innecesarias
        virtual ~Texto                   () = default;   // DESTRUCTOR 

        // SETTERS
        void setOriginal                 (std::string Ori);
        void setTraduccion               (std::string Traduccion);
        void setPronunciacion            (std::string Pronunciacion);
        void setIdioma                   (int Idioma);
        void setEstilo                   (int Estilo);

        // GETTERS
        std::string getOriginal()        const      ;
        std::string getTraduccion()      const      ;
        std::string getPronunciacion()   const      ;
        int getIdioma()                  const      ;
        int getEstilo()                  const      ;

        // MÉTODOS (sobrecarga + sobrescritura)
        virtual void traducir() = 0; // sólo el texto tiene el virtual
        //sólo uno para ver si es la causa del bad alloc
        //virtual void traducir(const std::string& original) = 0; //creo que este terminaré borrándolo
};

#endif
