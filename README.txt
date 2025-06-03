Creador de Glosario en Chino del español.
El objetivo del programa es, primero traducir una frase del chino al español, luego armar una lectura con 3 frases distintas: la frase original en chino / español, la pronunciación y la traducción, además de un glosario con las palabras más usadas.

Clases
Texto: El texto tiene el método "traducir" que recibe el idioma de origen, de destino y el "estilo" que indica si buscas obtener la traducción o la pronunciación. Luego esto lo guarda como "traducción", "pronunciación". Los métodos incluyen un constructor con el idioma de origen los getters y los setters de estos atributos y el método traducir dependiente del idioma de origen, que es un método virtual pues responderá de forma distinta.

Derivadas de Texto:
a) Texto Chino: método de traducción chino-español, además del idioma destino distinto.
b) Texto Español: método de traducción español - chino.

Traductor (clase principal): encargada de recibir el texto original y el idioma en el que está (español o chino). Traductor está compuesto de texto, hace uso de los métodos de texto implementando apuntadores para obtener la traducción y la pronunciación de la frase. Finalmente el traductor arma un string de lectura y otro de glosario que serán escritas en un archivo de texto y exportadas al final.
Atributos: texto, glosario y lectura. Además tendrá acceso a los atributos de TEXTO por medio de los apuntadores como lo son el texto.original, texto.traduccion, texto.pronunciacion. Sus métodos incluyen el de armarGlosario() y armarLectura() y finalmente el de exportar() que es el encargado de pasarlo a un archivo de texto.

Proceso ideal:
Ingresa tu idioma origen: "Español"
Ingresa tu texto: "Me gusta ver películas en casa".
Traducción: "我喜欢在家看电影"
Pronunciación: "Wǒ xǐhuān zàijiā kàn diànyǐng".
Glosario has been exported. <- glosario.txt
Lectura has been exported. <- lectura.txt

Casos de Fallo
Los casos en los que el programa fallará es si se inserta una frase en cualquier otro idioma o si no se especifica adecuadamente el idioma en el que la frase está (español, chino), si se inserta una frase en inglés, el programa fallará.
1. No funcionará si el texto no está en chino.
2. No funcionará si te equivocas al agregar un texto.

**Guía de Uso**

FAVOR DE LEER ANTES DE CORRER
Primero compila todo usando:
g++ *.cpp -o a

Luego Corre el código con 
.\a.exe

Ctrl + C para salir del código.

Ejemplo de pasos a seguir:
1. Te preguntará el número de textos, elige el que quieras, recomiendo máximo 3 para evitar errores
2. Ingresa 1 para español (recomendado), pues tendrías que meter la palabra en chino para probar textos en chino.
3. Ingresa la palabra en minúsculas: 
    EJEMPLO: perro, gato, hola
4. Disfruta de la traducción

Notas de mejora:
1. Cambiar el loop para agregar o modificar palabras.
2. Hacer que el proceso no termine
3. Ser capaz de combinar palabras para hacer frases (pendiente).
4. Exportar
5. Hacer lectura.
