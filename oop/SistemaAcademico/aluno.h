#ifndef ALUNO_H
#define ALUNO_H

#include <string>

class Aluno {
    private:
        std::string nome;
        int ra;
    public:
        void setNome(std::string nome);
        std::string getNome();
        void setRa(int ra);
        int getRa();
};

#endif

