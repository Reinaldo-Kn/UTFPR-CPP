#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Pessoa
{
private:
    /* data */
    string nome;
    const int cpf;
     
public:
    Pessoa(int cpfNum= 0):  cpf(cpfNum) { cout<< "criado dados" <<endl;};
    ~Pessoa(){cout<< "removido dados da pessoa" << endl;};

    void setNome(string n){
		nome = n;
	}
	string getNome(){
		return nome;
	}
    int getCpf(){
        return cpf;
    }
};

class Data
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int dayNow = ltm->tm_mday;
    int mesNow = 1 + ltm->tm_mon;
    int anoNow = 1900 + ltm->tm_year;
    int dia,mes,ano;
    string mesExtenso;

    
public:
    
    Data(int d , int m , int y): dia(d) , mes(m), ano(y){
        d= getDia();
    }
    Data(): dia(dayNow), mes(mesNow), ano(anoNow){
        cout << "inicio do default" << endl;
    }; 
    
    ~Data(){cout << "removido data" << endl;};

    void setDia(int diaNow){
        if (dia > 31 || dia <=0)
        {
            cout<< "Dia invalido , a data deve ser maior que 0 e menor que 31" << endl;
            dia = 0;
        }
        dia = diaNow;
    }
    int getDia(){ 
        return dia ;
    }
    void setMes(int mesNow){
        if (mes > 12 || mes <=0)
        {
            cout << "Mes invalido, o mes deve ser maior que 0 e menor que 12" << endl;
            mes = 0;
        }
        
        mes = mesNow;
    }
    int getMes(){
    
        return mes;
    }
    void setAno(int anoNow){
        if (ano <=0)
        {
            cout << "Ano invalido, o ano deve ser maior que 0 " <<endl;
            ano = 0;
        }

        ano = anoNow;
    }

    int getAno(){
        
        return ano;
    }

    string getExtenso(){
         switch(mes) {
            case 1 : return "Janeiro";
            case 2 : return "Fevereiro";
            case 3 : return "Marco";
            case 4 : return "Abril";
            case 5 : return "Maio";
            case 6 : return "Junho";
            case 7 : return "Julho";
            case 8 : return "Agosto";
            case 9 : return "Setembro";
            case 10 : return "Outubro";
            case 11 : return "Novembro";
            case 12 : return "Dezembro";
            default : return "NaN";
    }
    }
};



int main(int argc, char const *argv[])
{
   Data hoje;
    cout<< "dia é: " << hoje.getDia() << endl;
    cout << "o mes é: " << hoje.getMes() << endl;
    cout << "o ano é : "<< hoje.getAno() << endl;

    cout << "por extenso: " << hoje.getDia() << " de " << hoje.getExtenso() << " de " << hoje.getAno() << endl;
    return 0;
}


