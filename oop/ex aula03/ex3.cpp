// Inicialize um vetor de inteiros e atribua os elementos como 5, 9, -1, 200 e 0. Imprima
// o vetor. Ordene o vetor e imprima novamente.

#include<iostream>
#include <vector>
#include </home/aluno/Documentos/oop/termcolor.hpp>

using namespace std;
int main()
{
    vector<int> vetor;
    int v2[5] = {5, 9, -1, 200 ,0};

    for (int i=0; i<5; i++){
            vetor.push_back(v2[i]);

        }
cout << vetor[2] <<"\n";
    return 0;
}