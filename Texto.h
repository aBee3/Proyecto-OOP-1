#ifndef TEXTO_H
#define TEXTO_H

#include <string>

class Texto
{
protected:
    std::string original;
    std::string idioma;
    std::string traduccion;
    std::string pronunciacion;
    std::string estilo;

public:
    // CONSTRUCTORES
    Texto();
    explicit Texto(const std::string& original);
    Texto(const std::string& original, const std::string& estilo);
    virtual ~Texto() = default;   // DESTRUCTOR 

    // SETTERS
    void setOriginal(const std::string& txt);
    void setTraduccion(const std::string& txt);
    void setPronunciacion(const std::string& txt);
    void setIdioma(const std::string& lang);
    void setEstilo(const std::string& est);

    // GETTERS
    std::string getOriginal()       const;
    std::string getTraduccion()     const;
    std::string getPronunciacion()  const;
    std::string getIdioma()         const;
    std::string getEstilo()         const;

    // MÉTODOS (sobrecarga + sobrescritura)
    virtual void traducir();
    virtual void traducir(const std::string& original,
                          const std::string& idioma,
                          const std::string& estilo);
};

#endif
