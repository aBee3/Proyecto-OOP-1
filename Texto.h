#ifndef TEXTO_H
#define TEXTO_H

using namespace std;
#include <string>

class Texto
{
protected:
    string original;
	string idioma;
	string estilo;
	string traduccion;
	string pronunciacion;

public:
    // CONSTRUCTORES
    Texto();
    Texto(string ori, string idi);
    virtual ~Texto() = default;   // DESTRUCTOR 

    // SETTERS
    void setOriginal( string Original);
    void setTraduccion(string Traduccion);
    void setPronunciacion(string Pronunciacion);
    void setIdioma(string Idioma);
    void setEstilo(string Estilo);

    // GETTERS
    string getOriginal()       ;
    string getTraduccion()     ;
    string getPronunciacion()  ;
    string getIdioma()         ;
    string getEstilo()         ;

    // MÉTODOS (sobrecarga + sobrescritura)
    virtual void traducir();
    virtual void traducir(string ori, string idi, string est);
};

#endif
