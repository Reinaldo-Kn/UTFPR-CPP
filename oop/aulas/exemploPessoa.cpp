#include <iostream>
#include <string>
#include <vector>
#include <locale>

using namespace std;

class Pessoa {
    protected:
        string nome;
        string email;

    public:
        Pessoa(string n, string e) : nome(n), email(e){}
        //setters
        void setNome(string n){
            nome = n;
        }
        void setEmail(string e){
            email = e;
        }
        //getters
        string getNome(){
            return nome;
        }
        string getEmail(){
            return email;
        }
        void gerarRelatorio(){
            cout << "Informações:" << endl;
            cout << "- Nome: " << nome << endl;
            cout << "- E-mail: " << email << endl;
        }
};

class Aluno : public Pessoa {
    private:
        vector<string> disciplinas;
    public:
        Aluno(string n, string e) : Pessoa(n,e) {}

        void inserirDisciplinas(string d){
            disciplinas.push_back(d);
        }

        void gerarRelatorio(){
            Pessoa::gerarRelatorio();
            cout << "- Disciplinas matriculadas:" << endl;
            if(!disciplinas.size()){
                cout << "--- Não há matrícula em disciplinas!" << endl;
            }
            for(int i=0; i < disciplinas.size(); i++){
                cout << "--- " + disciplinas[i] << endl;
            }

        }
};

class Professor : public Pessoa {
    private:
        bool dedicacaoExclusiva;
        vector<string> turmas;
    public:
        void setDedicacaoExclusiva(bool d){
            dedicacaoExclusiva = d;
        }
        bool getDedicacaoExclusiva(){
            return dedicacaoExclusiva;
        }
        void inserirTurma(string t){
            turmas.push_back(t);
        }
};

class Tecnico : public Pessoa {
    private:
        string setor;
        int cargaHoraria;
    public:
        void setSetor(string s){
            setor = s;
        }
        void setCargaHoraria(int c){
            cargaHoraria = c;
        }
        string getSetor(){
            return setor;
        }
        int getCargaHoraria(){
            return cargaHoraria;
        }
};

int main(){
    setlocale(LC_ALL, "");

    Aluno a("Maria Aparecida", "maria@uol.com.br");
    a.inserirDisciplinas("Fundamentos de Orientação a Objetos");
    a.inserirDisciplinas("Compiladores");
    a.inserirDisciplinas("Circuitos Digitais");


    a.gerarRelatorio();

    system("PAUSE");
    return 0;
}
