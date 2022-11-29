


#include <iostream>
#include <vector>
using namespace std;

class MinhaEx: public exception {
private:
    int codErro;
public:
    MinhaEx(int err) : exception(), codErro(err){}
 
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

class Pilha{
    private:
        vector<int> pilha;
    public:
        Pilha(){}
        void empilha(int elem){
            pilha.push_back(elem);
        }
        int desempilha(){
            int elem = pilha.back();
            pilha.pop_back();
            return elem;
        }
        bool vazia(){
            return pilha.empty();
        }
        int getTopo(){
            return pilha.back();
        }
};
    
    
int main(){    
    Pilha pilha;
   try{ 
    pilha.empilha(10);
    pilha.empilha(20);
    pilha.empilha(30);
    pilha.empilha(40);
    pilha.empilha(40);
    pilha.empilha(40);
    pilha.empilha(40);
    pilha.empilha(50);}catch(MinhaEx &e){
        cout << e.what() << endl;
    }


    while(!pilha.vazia()){
        cout<< pilha.desempilha() <<endl;
    }
    
    
return 0;  
}