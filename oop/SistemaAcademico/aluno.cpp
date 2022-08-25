#include "aluno.h"

void Aluno::setNome(std::string nome){
    this->nome = nome;
}
std::string Aluno::getNome(){
    return this->nome;
}
void Aluno::setRa(int ra){
    this->ra = ra;
}
int Aluno::getRa(){
    return this->ra;
}
