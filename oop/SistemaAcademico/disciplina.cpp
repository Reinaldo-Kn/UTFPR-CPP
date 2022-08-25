#include "disciplina.h"

using namespace std;

void Disciplina::setNome(string nome){
    this->nome = nome;
}

string Disciplina::getNome(){
    return this->nome;
}

void Disciplina::setSemestre(int semestre){
    this->semestre = semestre;
}

int Disciplina::getSemestre(){
    return this->semestre;
}

void Disciplina::setProfessor(Professor professor){
    this->professor = professor;
}

Professor Disciplina::getProfessor(){
    return this->professor;
}

void Disciplina::setLista_alunos(vector<Aluno> lista_alunos){
    this->lista_alunos = lista_alunos;
}

vector<Aluno> Disciplina::getLista_alunos(){
    return this->lista_alunos;
}

void Disciplina::incluirAluno(Aluno aluno){
    this->lista_alunos.push_back(aluno);
}
