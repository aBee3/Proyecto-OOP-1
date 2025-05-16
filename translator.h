/*
 * Proyecto Traductor a idiomas con otros sistemas de escritura
 * Abigail Godoy Araujo A01709167
 * El traductor es el encargado de traducir el texto que el displaymanager obtiene, lo traduce y regresa el texto traducido. The CHILD classes, 
 * traductor chino, coreano, y japonés son encargados de regresar el pinyin en específico y el texto traducido. 
 * La clase de displayManager se encarga de mostrar el resultado.
 */

#ifndef TRANSLATOR_H_
#define TRANSLATOR_H_
#include <string>
using namespace std;

// MOTHER CLASS: TRADUCTOR
class Traductor{
    //ATRIBUTOS
    protected:
    string textoOriginal;
    string textoTraducido;

    //MÉTODOS
    public: 
    //Constructor
        Traductor(){
            textoOriginal = "";
            textoTraducido = "";
        }; //default

        Traductor(string original, string traducido):
            textoOriginal(original), textoTraducido(traducido) {};


    //Getters: Texto original
    string getOriginal(){
        return textoOriginal;
    }
    string getTraducido(){
        return textoTraducido;
    }

    //Setters: Traducción
    void setText(string original){
        textoOriginal = original;
    };
    void setTraduccion(string traduccion){
        textoTraducido = traduccion;
    }

    //Métodos
    virtual void tranducir() = 0; // depende del idioma, sería sobreescrito
    virtual string getPronunciation() = 0; //método abstracto que será sobreescrito

};

// CHILD CLASSES: IDIOMAS
//CHINO
class traductorChino: public Traductor {
    // Atributos
    private:
    string Pinyin;
    string Pronunciation;

    // Constructor
    traductorChino(): Traductor("chino", "traducción"){};
    traductorChino(string pinyin, string pronunciacion): Traductor(textoOriginal, textoTraducido)
        {
        Pinyin = pinyin;
        Pronunciation = pronunciacion;
        }

    public: 
    //Getters
    string getPronunciation(){
        return Pronunciation;
    }
    // Método
    string traducir(){
        return textoTraducido;
    }
};

// JAPONES
class traductorJapones: public Traductor {
    // Atributos
    private:
    string Hiragana;
    string Pronunciation;

    public: 
    // Constructor normal
    traductorJapones(): Traductor("japonés", "traducción"){};
    traductorJapones(string hiragana, string pronunciacion): Traductor(textoOriginal, textoTraducido)
        {
        Hiragana = hiragana;
        Pronunciation = pronunciacion;
        }
    
    
    //Getters
    string getPronunciation() {
        return Pronunciation;
    };
    // Método
    string traducir(){
        return textoTraducido;
    }
};

#endif // TRANSLATOR_H_