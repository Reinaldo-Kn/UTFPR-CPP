#include <iostream>
using namespace std;

class Base {
    public:
       virtual void metodo(){
            cout << "Estou na classe base 🐦" <<endl;
        }
};

class Derivada : public Base{
    public:
        void metodo(){
            cout << "Estou na classe derivada 😽" << endl;
        }
};
class Derivada2 : public Base{
    public:
        void metodo(){
            cout << "Estou na classe derivada2 🐘" << endl;
        }
};
int main(int argc, char const *argv[])
{
    Base* obj;
    cout <<  "1️⃣  objeto base \n"<<
             "2️⃣  objeto derivado \n"<<
             "3️⃣  objeto derivado2 \n " <<endl;

    int opcao;
    cin>>opcao;

    switch(opcao){
        case 1:
            obj = new Base();
            break;
        case 2:
            obj = new Derivada();
            break;
        case 3:
            obj = new Derivada2();
            break;
        default:
            obj = nullptr;            
    }
    if(obj != nullptr){
        obj->metodo();
    }
    return 0;
}
