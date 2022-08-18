#include <iostream>
#include </home/aluno/Documentos/oop/termcolor.hpp>

using namespace std;

int main(){
    string name,sobre,completo;
    cout << termcolor::on_white << "Insira nome:" << "\n";

   getline( cin, name);
    
    cout << termcolor::on_bright_cyan <<"Insira sobrenome:" << "\n";
    cin >> sobre;

    completo= name + " " + sobre;

    cout <<  termcolor::on_bright_green << termcolor::bright_magenta << completo << "\n";
    cout << completo.size() << "\n";
    system("PAUSE");
    return 0;
}