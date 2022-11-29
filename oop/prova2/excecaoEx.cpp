#include <iostream>
#include <string>
using namespace std;

class MinhaEx: public exception {
private:
    int codErro;
public:
    MinhaEx(int err) : exception(), codErro(err){}
    /*
    redefini��o da fun��o virtual what() para que retorne as mensagens de erros que escrevemos
    para os dois erros que queremos tratar
    */
    const char* what() const throw(){
        switch(codErro){
        case 1:
            return "CPF com mais de 11 digitos";
        case 2:
            return "CPF deve conter somente digitos";
        default:
            return "Erro inesperado";
        }
    }
};

bool isNumeric(string strcpf){
    for(int i=0;i<strcpf.size(); i++){
        if(strcpf[i] < '0'|| strcpf[i] > '9')
            return false;
    }
    return true;
}

//verifica se um CPF � v�lido ou n�o
bool validarCPF(string strcpf){
    if(!isNumeric(strcpf))
        throw MinhaEx(2); //dispara exce��o
    if(strcpf.size() > 11)
        throw MinhaEx(1); //dispara exce��o


    return true;
}

int main() {
    string cpf1 = "123456789012";
    string cpf2 = "123.456.789.012";
    string cpf3 = "12345678901";
    bool result;

    try{
        result = validarCPF(cpf1);
        cout << "CPF valido!" << endl;
    }catch(MinhaEx &e){
        cout << e.what() << endl;
    }

    system("pause");
    return 0;
}
