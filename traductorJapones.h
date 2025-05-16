#ifndef JAPONES_H_
#define JAPONES_H_
#include "translator.h"
#include <string>
using namespace std;

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

#endif // JAPONES_H_