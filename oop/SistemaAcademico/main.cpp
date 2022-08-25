#include <iostream>
#include <locale>
#include "disciplina.h"

using std::cout;

int main(){
    setlocale(LC_ALL, "");

    Professor prof;
    Aluno aluno1;
    Aluno aluno2;
    Disciplina disc;

    aluno1.setNome("Joao");
    aluno1.setRa(1135663);
    aluno2.setNome("Maria");
    aluno2.setRa(1135688);

    prof.setNome("Leandro");

    disc.setNome("Fundamentos de Orientação a Objetos");
    disc.setSemestre(4);
    disc.setProfessor(prof);
    disc.incluirAluno(aluno1);
    disc.incluirAluno(aluno2);

    cout << "Disciplina: " << disc.getNome() << std::endl;
    cout << "Professor: " << disc.getProfessor().getNome() << std::endl;
    cout << "Alunos: " << "\n";
    for(int i=0; i < disc.getLista_alunos().size(); i++){
        cout << "- " << disc.getLista_alunos().at(i).getNome() << " (" << disc.getLista_alunos().at(i).getRa() << ")" << "\n";
    }

    system("PAUSE");
    return 0;
}
