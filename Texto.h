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
    Texto(int Idi, std::string Ori);
    virtual ~Texto() = default;   // DESTRUCTOR 

    // SETTERS
    void setOriginal(std::string Ori);
    void setTraduccion(std::string Traduccion);
    void setPronunciacion(std::string Pronunciacion);
    void setIdioma(int Idioma);
    void setEstilo(int Estilo);

    // GETTERS
    std::string getOriginal() const      ;
    std::string getTraduccion()          ;
    std::string getPronunciacion()       ;
    int getIdioma()         ;
    int getEstilo()         ;

    // MÉTODOS (sobrecarga + sobrescritura)
    virtual void traducir() = 0;
    virtual void traducir(const std::string& original, const int& estilo) = 0; //creo que este terminaré borrándolo
};

#endif
