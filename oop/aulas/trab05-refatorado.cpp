#include <iostream>
#include <string>
#include <ctime>

using namespace std;


class Data{
private:   

    int Dia,Mes,Ano;
    string Extenso; 
public:

    Data(){         // Default
        time_t now = time(0);
        tm *ltm = localtime(&now);
        Dia = ltm->tm_mday;
        Mes = 1 + ltm->tm_mon;
        Ano = 1900 + ltm->tm_year;
    };
    Data(int dia , int mes , int ano): Dia(dia), Mes(mes), Ano(ano) {};
    ~Data(){};
    void FormatoCompacto(){
        cout << Dia << "/" << Mes << "/" << Ano << endl;
    };
    string getExtenso(){
         switch(Mes) {
            case 1 : return Extenso ="Janeiro";
            case 2 : return Extenso ="Fevereiro";
            case 3 : return Extenso ="Marco";
            case 4 : return Extenso ="Abril";
            case 5 : return Extenso ="Maio";
            case 6 : return Extenso ="Junho";
            case 7 : return Extenso ="Julho";
            case 8 : return Extenso ="Agosto";
            case 9 : return Extenso ="Setembro";
            case 10 : return Extenso ="Outubro";
            case 11 : return Extenso ="Novembro";
            case 12 : return Extenso ="Dezembro";
            default : return Extenso ="NaN";
        }
    }
   
    void FormatoExtenso(){
        getExtenso();
        cout << Dia << " de " << Extenso << " de " << Ano << endl;
    }
    void setDia(int dia){
        if(dia<= 31 && dia >0)
        Dia = dia;
    }
    int getDia(){
        return Dia;
    }
    void setMes(int mes){
        if(mes<=12 && mes >0)
        Mes = mes;
    }
    int getMes(){
        return Mes;
    }
    void setAno(int ano){
        if(ano >= 0)
        Ano = ano;
    }
    int getAno(){
        return Ano;
    }
};

class Pessoa{
private:
    string Nome;
    int Cpf;
    Data* DataNascimento;

public:
    Pessoa(int cpf=0) : Cpf(cpf){};

    void setNome(string nome){
        Nome = nome;
    }
    string getNome(){
        return Nome;
    }
    void setDataNascimento(Data* n){
        DataNascimento = n;
    }
    Data* getDataNascimento(){
        return DataNascimento;
    }
    void setCpf(int cpf){
        Cpf = cpf;
    }
    int getCpf(){
        return Cpf;
    }
    void Apresentacao(){
        system("clear||cls");
        cout << " SEU DOCUMENTO: "<<"\nNome: " << Nome << "\nCPF: " << Cpf << endl;
        getDataNascimento()->FormatoExtenso();
        getDataNascimento()->FormatoCompacto();
    }
};

int main(int argc, char const *argv[])
{
   int quero =0, cpf,nasceu,dia,mes,ano; 
   string nome;
    Pessoa p;
    Data* hoje = new Data();
   
  

while (quero == 0)
{
    cout << "TERMINAL DE CADASTRO:" <<endl;
    cout << " Digite o Nome: " <<endl;
    cin>> nome;
    p.setNome(nome);
    cout << " Digite o CPF: " <<endl;
    cin >> cpf;
    p.setCpf(cpf);
    cout << " Nasceu hoje? Digite 1 para sim e 0 para nao " << endl;
    cin >> nasceu;
    if(nasceu == 1){
        
        p.setDataNascimento(hoje);
    } else{
        
        p.setDataNascimento(hoje);
        cout << " Digite o dia: " << endl;
        cin >> dia;
        hoje->setDia(dia);
         cout << " Digite o mes: " << endl;
        cin >> mes;
        hoje->setMes(mes);
         cout << " Digite o ano: " << endl;
        cin >> ano;
        hoje->setAno(ano);
        
    }
    quero = 1;
}
     p.Apresentacao();
     delete(hoje);
    return 0;
}
