#include <iostream>
using namespace std;

class Base{

};
class Derivada : public Base{

};   
    
    
int main(){    
    try{
        throw Derivada();
    } catch(Base a){
        cout<< "B"<<endl;
    }catch(Derivada a){
        cout<< "D"<<endl;
    }
return 0;  
}