// Crie uma função com um template que recebe um vetor (por exemplo, int vet[50] e não da
// classe vector) de tipo genérico e o ordena

#include <iostream>
#include <algorithm>    
#include <vector> 
using namespace std;
        
template <class T>
void ordenaVetor(T vet[], int tam){
    T aux;
    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(vet[i] < vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int main(){    
    double teste[10] = {99,2,8,9,12,1,76,23,45,0};
    cout << "Vetor desordenado: " << endl;
    for(int i=0; i<10; i++){
        cout << teste[i] << " ";
    }
    cout << endl;
    ordenaVetor(teste, 10);
    cout << "Vetor ordenado: " << endl;
    for(int i=0; i<10; i++){
        cout << teste[i] << " ";
    }
    cout << endl;
return 0;  
}