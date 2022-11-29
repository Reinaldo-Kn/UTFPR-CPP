#include <iostream>
#include <string>
#include <exception>
using namespace std;
   

class Celular{
    protected:
        int memoria,SizeApp;
    public:
        Celular(): memoria(256){}
        int getMemoria(){ return memoria;}  
        int getSizeApp(){return SizeApp;}
        virtual void instalaApp(int sizeApp){ 
            SizeApp = sizeApp;
            memoria = memoria - SizeApp;
        }

};    
class Nokia2280: public Celular{
    public:
        Nokia2280(){};
        void instalaApp(int sizeApp){
            if(sizeApp > 1){
                throw memoria=0;
            }
        };
};   
     
int main(){    
    Celular *iphone = new Celular();
    iphone->instalaApp(120);
    cout<< iphone->getMemoria() <<endl;
    delete iphone;
    Celular *tijolo = new Nokia2280();
 
    try
    {
      tijolo->instalaApp(12);
    }
    catch(...)
    {
        cout<< "Nokia2280 nao suporta apps" <<endl;
    }
    
    cout<< tijolo->getMemoria() <<endl;
    delete(tijolo);
return 0;  
}