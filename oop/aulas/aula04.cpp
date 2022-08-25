#include <iostream>
#include </home/reinaldo/Documentos/UTFPR-CPP/oop/termcolor.hpp>
using namespace std;
    
    
  // usar visual Paradigma para diagrama de classes  
class Retangulo {
     private: int base, altura;
    // float area(){
    //     return (base *  altura);
    // }

    public:
        void setBase(int b){
            base = b;
        }
        void setAltura(int a){
            altura = a;
        }
        int getBase(){
            return base;
        }
        int getAltura(){
            return altura;
        }
        float area(){
            return (base * altura);
        }
};

int main(){    
     Retangulo r; // declaração de um objeto

     r.setBase (10);
     r.setAltura(20);
    cout <<  termcolor::on_bright_green << termcolor::bright_magenta <<"Area = " << r.area() << "\n";
     
return 0;  
}