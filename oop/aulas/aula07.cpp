#include <iostream>
using namespace std;

class Base {};

class Derivada : public Base{
    public:
        void metodo(){
            cout << " Estou na classe derivada " << endl;
        }
};
int main(int argc, char const *argv[])
{
    Base* obj = new Derivada();
    return 0;
}
