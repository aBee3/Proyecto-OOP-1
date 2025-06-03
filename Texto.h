#ifndef TEXTO_H
#define TEXTO_H
#include <string>

class Texto{
    protected:
        int idioma;                     // 1 = Español,    2 = Chino
        std::string original;           
        std::string traduccion;
        std::string pronunciacion;

    public:
        //   CONSTRUCTORES ========================= 
        Texto();
        Texto(int Idi, const std::string Ori); // const le quita las copias innecesarias
        virtual ~Texto                   () = default;   // DESTRUCTOR 

        //   SETTERS       ========================= 
        void setOriginal                 (std::string Ori);
        void setTraduccion               (std::string Traduccion);
        void setPronunciacion            (std::string Pronunciacion);
        void setIdioma                   (int Idioma);


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
