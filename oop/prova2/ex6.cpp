#include <iostream>
using namespace std;
    
    
    
int main(){    

        try{
            try{
                throw "erro proposital";
            }catch(...){
                cout<< "A" <<endl;
            }
            try{
                throw "erro proposital 2";
            }catch(int x){
                cout<< "B" <<endl;
            }
            throw;
        }catch(...){
            cout<< "C" <<endl;
        }

return 0;  
}