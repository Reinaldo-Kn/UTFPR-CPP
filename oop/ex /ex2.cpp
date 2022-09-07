// crie um função que receba um número inteiro positivo e teste se ele é primo,
// retornando um bool, sendo true caso seja primo e false se for par

#include<iostream>
#include </home/reinaldo/Documentos/UTFPR-CPP/oop/termcolor.hpp>

using namespace std;
int main()
{
    int num,div=0,x;
    bool teste;

    cout << termcolor::on_white << "Insira numero:" << "\n";
    cin >> num;

    for(x=1; x <= num; x++){
           if (num % x == 0){
            div++;
           } 
    }
    if( div == 2){
        cout << termcolor::on_bright_cyan << num << " é primo!" << "\n";
    }
    else{
        cout << termcolor::on_bright_yellow << num << " não é primo!" << "\n";
    }

    return 0;
}