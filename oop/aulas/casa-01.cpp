#include <iostream>

using namespace std;

class AbstractEmpregado{

};

class Empregado{
private:
    string Nome;
    string Empresa;
    int Idade;
public:    
    void setNome(string nome){
        Nome = nome;
    }
    string getNome(){
        return Nome;
    }
    void setEmpresa ( string empresa){
        Empresa = empresa;
    }
    string getEmpresa(){
        return Empresa;
    }
    void setIdade(int idade){
        Idade = idade;
    }
    int getIdade(){
        return Idade;
    }
    void IntroducaoEmpregado(){
        cout << " Nome: " << Nome << " \n Empresa: " << Empresa << " \n Idade: " << Idade << endl;
    }
    Empregado (string nome, string empresa, int idade ){
        Nome= nome;
        Empresa = empresa;
        Idade = idade;
    }
};


class Developer:public Empregado{
public:
    string FavLingua;
    Developer(string nome, string empresa, int idade, string favlingua): Empregado(nome,empresa,idade){
        FavLingua=favlingua;
    }

    void Apresentacao(){
        cout << getNome() << " trabalha em " << getEmpresa() << " e tem " << getIdade() << " anos e usa " << FavLingua << endl;
    }
};



int main(int argc, char const *argv[])
{
    Empregado empregado1= Empregado("Laura", "sim", 21);
    // empregado1.Nome = "Reinaldin";
    // empregado1.Empresa = "Utf";
    // empregado1.Idade = 20;

    empregado1.IntroducaoEmpregado();
    empregado1.setIdade(15);
    cout << empregado1.getNome() << " tem " << empregado1.getIdade() << " anos " << endl;

    Developer d= Developer("Euu", "utfpr", 20, "C++");
    
    Empregado* e1 = &d;
    e1->IntroducaoEmpregado();
    return 0;
}
