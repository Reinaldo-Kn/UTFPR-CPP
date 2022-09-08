#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Pessoa{  //pai
protected:
    string Nome;
    string Email;
public:
    Pessoa(string nome,string email):Nome(nome), Email(email){}
    Pessoa(){}
    void setNome(string nome){
        Nome = nome;
    }
    string getNome(){
        return Nome;
    }
    void setEmail(string email){
        Email = email;
    }
    string getEmail(){
        return Email;
    }
    virtual void Apresentacao(){
        cout <<"Nome: " << Nome << "\n Email: " << Email << endl;
    }    
};


class Aluno : public Pessoa{
private:
    vector<string>Disciplinas;
public:
    Aluno(string nome, string email): Pessoa(nome,email){}
    Aluno(){}
    void setDisciplina(string disciplina){
        Disciplinas.push_back(disciplina);
    }    
    void Apresentacao(){
        cout <<"Nome: " << Nome << "\n Email: " << Email << endl;
    }
    string getRelatorio(){
        string relatorio = Nome + "\n" + Email;
        for(int i =0; i < Disciplinas.size(); i++){
            relatorio = relatorio + "\n" + Disciplinas[i];
        }
        return relatorio;
    }
};

class Professor: public Pessoa{
private:
    bool DedicacaoExclusiva;
    vector<string>Turmas;
public:
    Professor(string nome, string email): Pessoa(nome,email){}
    Professor(){}
    void setDedicacaoExclusiva(bool dedicacao){
        DedicacaoExclusiva = dedicacao;
    }
    bool getDedicacaoExclusiva(){
        return DedicacaoExclusiva;
    }
    void setTurmas(string turmas){
        Turmas.push_back(turmas);
    }  
    void Apresentacao(){
        cout <<"Nome: " << Nome << "\n Email: " << Email << endl;
    } 
        
};

class Tecnico: public Pessoa{
private:
    string Setor;
    int CargaHoraria;

public:
    Tecnico(string nome, string email): Pessoa(nome,email){}
    Tecnico(){}
    void setSetor(string setor){
        Setor = setor;
    } 
    string getSetor(){
        return Setor;
    }
    void setCargaHoraria(int carga){
        CargaHoraria = carga;
    }
    int getCargaHoraria(){
        return CargaHoraria;
    }
};
int main(int argc, char const *argv[])
{
    Pessoa* pessoa = new Pessoa();
    pessoa->setNome("Teste 14");
    pessoa->setEmail("cccc@hotmail.com");
    pessoa->Apresentacao();

    Professor* prof = new Professor();
    prof->setNome (" Teste 13");
    prof->setEmail("bbb@hotmail.com");
    prof->Apresentacao();
    
    Aluno* a = new Aluno();
    a->setNome("Teste 12");
    a->setEmail("aaa@hotmail.com");
    a->Apresentacao();
    return 0;
}
