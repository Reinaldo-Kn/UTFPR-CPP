#include <iostream>
#include <algorithm>  
using namespace std;
    
class Pessoa{
    public:
    string nome;
    int idade;
    Pessoa(string n, int i):nome(n),idade(i){}
    bool operator<=(Pessoa p){
        if (nome != p.nome)
            {return nome <= p.nome;}
        return idade <= p.idade;    
    }
};    
class Animal{
    public:
    int patas;
    Animal(int n): patas(n){}
    bool operator <(Animal a) { return patas < a.patas;}
    bool operator ==(Animal a){ return patas == a.patas;}
};    
template <typename T>
bool emordem(T a, T b, T c){
    if(a <= b and b<=c){
        cout << "em ordem \n" << endl;
        return true;
    }else{
        cout << "🐦 \n" <<endl;
        return false;
    }
}
int main(){    

   emordem(Pessoa("joao",12), Pessoa("joao",15), Pessoa("joao ",21));
return 0;  
}