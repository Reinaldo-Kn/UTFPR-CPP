#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <string>

class Professor {
    //atributos
    private:
        std::string nome;

    //m�todos
    public:
       void setNome(std::string nome);
       std::string getNome();
} ;

#endif
