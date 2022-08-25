#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <vector>
#include "professor.h"
#include "aluno.h"

using namespace std;

class Disciplina {
    private:
        string nome;
        int semestre;
        Professor professor;
        vector<Aluno> lista_alunos;

    public:
        void setNome(string nome); //protótipo do método
        string getNome();
        void setSemestre(int semestre);
        int getSemestre();
        void setProfessor(Professor professor);
        Professor getProfessor();
        void setLista_alunos(vector<Aluno> lista_alunos);
        vector<Aluno> getLista_alunos();
        void incluirAluno(Aluno aluno);
};

#endif
