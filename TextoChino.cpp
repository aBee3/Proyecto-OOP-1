#include <iostream>
#include "TextoChino.h"

/* constructor */
TextoChino::TextoChino(const std::string& original, const int& estilo): Texto(idioma, original) {

}

/* traducción — por ahora vacío */
void TextoChino::traducir() {

}
void TextoChino::traducir(const std::string&, const int&) {
        original = "override";
        std::cout << "Hello, World!";
}
