# Abigail Godoy Araujo
# Creador de Glosario en Chino del Español

## Objetivo
El programa traduce frases del **chino** al **español**, luego genera una lectura con **tres versiones** de la frase:

1. La frase original en **chino** y **español**.
Nota: El chino no tiene conjugaciones, tus frases tendrán siempre el verbo en infinitivo. Por ejemplo "Yo correr mucho" o "gato ser grande".
Evita usar acentos o caractéres como Ñ.
2. La **pronunciación** en pinyin.
3. La **traducción** al español.

Además, el programa crea un **glosario** con las palabras más usadas.
Si la palabra no está disponible en el diccionario, se mostrará **[?]**.

---

## Clases

### **Texto**
Define la frase a traducir y tiene el método `traducir()`, que recibe:
- El idioma de **origen**.
- El idioma **destino**.
- El **estilo**, para decidir si se obtiene la **traducción** o la **pronunciación**.

**Atributos:**  
- `original`: Texto original.  
- `traducción`: Resultado de la traducción.  
- `pronunciación`: Resultado en pinyin.  

**Métodos:**  
- Constructor con el idioma de origen.  
- Getters y setters de los atributos.  
- `traducir()`: Método virtual que varía según el idioma origen.  

### **Clases Derivadas**
1. **Texto Chino**: Traducción de **chino a español** con ajustes de idioma destino.
2. **Texto Español**: Traducción de **español a chino**.

### **Traductor (Clase Principal)**
Encargado de recibir el texto original y su idioma (**español o chino**).  
Utiliza `Texto` mediante **apuntadores** para obtener la **traducción** y la **pronunciación**.

**Atributos:**  
- `texto`: Instancia de la clase `Texto`.  
- `glosario`: Palabras más usadas en el texto.  
- `lectura`: Genera una estructura de texto lista para exportar.  

**Métodos:**  
1. `armarGlosario()`  
2. `armarLectura()`  
3. `exportar()`: Guarda la lectura y el glosario en un archivo de texto.  

---

## Casos de Fallo
El programa fallará si:
- Se inserta un texto en otro idioma que **no sea chino ni español**.
- No se especifica correctamente el idioma.
- Se usan **acentos** o caracteres especiales (`Ñ, ó, ...`).

---

## Guía de Uso

### **Compilación**
Compila todo el código con:
```sh
g++ *.cpp -o traductor
```

### **Ejecución**
Corre el código:
```sh
.\traductor.exe
```

Para salir, usa:
```sh
Ctrl + C
```

### **Pasos a seguir**
1. Selecciona la cantidad de textos (*máximo recomendado: 3*).
2. Elige el idioma:
   - `1` → Español (*Funciona mejor*).
   - `2` → Chino.
3. Escribe las palabras en minúsculas.  
   - **Ejemplo**: `perro`, `gato`, `hola`.
4. ¡Listou!

---

## Notas de mejora
- Mejorar el loop para agregar/modificar palabras.
- Evitar que el programa termine después de una traducción.
- Mejorar la exportación del texto.
- Optimizar la lectura generada.

## Ejemplo
```sh
\Documents\Proyectos Programación\Programación Orientada a Objetos\Proyecto OOP 1> .\a.exe
Active code page: 65001


----------------------------------------------
Bienvenido al traductor ESPAÑOL - CHINO


¿Cuántos textos deseas agregar?

     -->  3
---------------------------------------------
Introduce el idioma para el texto:
     Español [1], Chino [2]

     -->  1
Idioma seleccionado:
         Español
Introduce el texto original:
     --> hola yo grande 

Texto en Español creado

---------------------------------------------
Introduce el idioma para el texto:
     Español [1], Chino [2]

     -->  1 
Idioma seleccionado:
         Español
Introduce el texto original:
     --> yo amar tu

Texto en Español creado

---------------------------------------------
Introduce el idioma para el texto:
     Español [1], Chino [2]

     -->  yo gustar gato
Entrada inválida. Por favor, escribe 1 o 2.
---------------------------------------------
Introduce el idioma para el texto:
     Español [1], Chino [2]

     -->  1
Idioma seleccionado:
         Español
Introduce el texto original:
     --> perro bonito gato pequeño

Texto en Español creado :)

Lista de textos:
1.  hola yo grande
2.  yo amar tu
3.  perro bonito gato pequeo


Traduciendo...
     Traduciendo texto en español...
     Traduciendo texto en español...
     Traduciendo texto en español...

LISTO

----------------------------------------------
Traducciones:
----------------------------------------------
1
Original: hola yo grande
Traducción: 你好 我 大
Pronunciación: nǐhǎo wǒ dà
2
Original: yo amar tu
Traducción: 我 爱 你
Pronunciación: wǒ ài nǐ
3
Original: perro bonito gato pequeo
Traducción: 狗 漂亮 猫 [?]
Pronunciación: gǒu piàoliang māo [?]
----------------------------------------------

----------------------------------------------
 Glosario:
----------------------------------------------
ORIGINAL  -   TRADUCCIÓN -  PRONUNCIACIÓN
1
hola -> 你好 — nǐhǎo
yo -> 我 — wǒ
grande -> 大 — dà
----------------------------------------------
2
yo -> 我 — wǒ
amar -> 爱 — ài
tu -> 你 — nǐ
----------------------------------------------
3
perro -> 狗 — gǒu
bonito -> 漂亮 — piàoliang
gato -> 猫 — māo
pequeo -> [?] — [?]
----------------------------------------------

你好世界
```
## Referencias
Git - gitignore Documentation, https://git-scm.com/docs/gitignore.

W3Schools.com. (n.d.). https://www.w3schools.com/cpp/ref_fstream_fstream.asp

GeeksforGeeks. (2025, May 14). Basic input / output in C++. GeeksforGeeks. https://www.geeksforgeeks.org/basic-input-output-c/
