
#include <iostream>
#include <string>
using namespace std;

class MinhaEx: public exception {
private:
    int codErro;
public:
    MinhaEx(int err) : exception(), codErro(err){}
  
    const char* what() const throw(){
        switch(codErro){
        case 1:
            return "Pilha vazia";
        case 2:
            return "Pilha cheia";
        default:
            return "Erro inesperado";
        }
    }
};

class Pilha {
private:
    int *pilha;
    int topo;
    int tamanho;
public:
    Pilha(int tam){
        tamanho = tam;
        topo = -1;
        pilha = new int[tamanho];
    }
    ~Pilha(){
        delete[] pilha;
    }
    //empilha um elemento
    void empilha(int elem){
        if(topo == tamanho-1)
            throw MinhaEx(2); //dispara exce��o
        topo++;
        pilha[topo] = elem;
    }
    //desempilha um elemento
    int desempilha(){
        if(topo == -1)
            throw MinhaEx(1); //dispara exce��o
        int elem = pilha[topo];
        topo--;
        return elem;
    }
    //retorna o elemento do topo da pilha
    int getTopo(){
        return pilha[topo];
    }
    //retorna true se a pilha estiver vazia
    bool vazia(){
        return topo == -1;
    }
};

int main() {
    Pilha p(5);

    try{
        p.empilha(1);
        p.empilha(2);
        p.empilha(3);
        p.empilha(4);
        p.empilha(54);
        p.empilha(5);
    }catch(MinhaEx &e){
        cout << e.what() << endl;
    }
}