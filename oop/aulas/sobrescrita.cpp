#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 60

using namespace std;

class Lista {
protected:
    int dados[MAX];
    int n;
public:
    Lista() {
        n=0;
    }
    void inserir (int elemento) {
        dados[n] = elemento;
        n++;
    }
    bool buscar (int elemento) {
        for(int i =0; i<n; i++)
            if(dados[i]==elemento)
                return true;
        return false;
    }
    bool remover (int elemento) {
        int pos;
        for (pos=0; pos<n; pos++) {
            if (dados[pos] == elemento)
                break;
        }
        // percorreu todo o vetor e n�o encontrou
        // retorna false, indicando que n�o apagou
        if (pos == n) {
            return false;
        }
        else {
            for(; pos < n-1; pos++) {
                dados[pos] = dados[pos+1];
            }
            // "apaga" o �ltimo elemento, que
            // estaria duplicado, e decrementa n
            dados[n-1] = 0;
            n--;
            return true;
        }
    }
    void imprimir() {
        for(int i =0; i<n; i++)
            cout << dados[i] << " ";
        cout << endl;
    }
};

class Pilha: public Lista{
public:
    vector<int> pilha;    
};

class Fila: public Lista{
public:
    vector<int> fila;
        void inserir(int elemento){
             Lista::inserir(elemento); 
             for(int i=n-1; i>0; i--){
                fila.push_back(elemento);
             }
        }    
        void imprimir(){
            Lista::imprimir();
            for(int j = 0; j < fila.size(); j++){
                cout<< fila[j] << endl;
            }
        }
          
};

class ListaOrdenada : public Lista {
public:
    void inserir(int elemento) {
        Lista::inserir(elemento);
        for (int i=n-1; i>0;i--) {
            if(dados[i] < dados[i-1])
                swap(dados[i], dados[i-1]);
            else
                return;
        }
    }
};

int main()
{
    ListaOrdenada l;
    Fila fila;
    // l.inserir(21);
    // l.inserir(27);
    // l.inserir(24);
    // l.inserir(03);

    // l.imprimir();

    // if (l.buscar(27))
    //     cout << "27 foi encontrado" << endl;
    // else
    //     cout << "27 n�o foi encontrado" << endl;
    fila.inserir(21);
    fila.inserir(27);
    fila.inserir(24);
    fila.inserir(3);
    fila.inserir(2);

    fila.imprimir();
 
    return 0;
}
