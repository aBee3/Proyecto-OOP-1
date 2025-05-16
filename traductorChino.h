#ifndef CHINO_H_
#define CHINO_H_
#include "translator.h"
#include <string>
using namespace std;

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

#endif #endif // CHINO_H_