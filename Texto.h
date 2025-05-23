#ifndef TEXTO_H
#define TEXTO_H
#include <string>

class Texto
{
protected:
    int idioma;                     // 0 = Español,    1 = Chino
	int estilo;
    std::string original;           // 0 = Traducción, 1 = Pronunciación
	std::string traduccion;
	std::string pronunciacion;

public:
    // CONSTRUCTORES
    Texto();
    Texto(int idioma);
    Texto(int Idi, std::string Ori);
    virtual ~Texto() = default;   // DESTRUCTOR 

    // SETTERS
    void setOriginal(std::string Original);
    void setTraduccion(std::string Traduccion);
    void setPronunciacion(std::string Pronunciacion);
    void setIdioma(int Idioma);
    void setEstilo(int Estilo);

    // GETTERS
    std::string getOriginal()       ;
    std::string getTraduccion()     ;
    std::string getPronunciacion()  ;
    int getIdioma()         ;
    int getEstilo()         ;

    // MÉTODOS (sobrecarga + sobrescritura)
    virtual void traducir();
    virtual void traducir(const std::string& original, const int& estilo);
};

#endif
