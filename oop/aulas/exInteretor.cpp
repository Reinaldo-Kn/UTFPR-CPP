#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T> bool compare(T a, T b) {
    return a > b;
}

int main() {
    vector<int> dados;

    dados.push_back(7);
    dados.push_back(2);
    dados.push_back(5);
    dados.push_back(2);

    vector<int>::iterator it;

    //inserir na primeira posicao da lista
    it = dados.begin();
    dados.insert(it, 200);

    //inserir na quarta posicao da lista
    it = dados.begin() + 3;
    dados.insert(it, 88);

    cout << "Lista Original:" << endl;
    cout << "[";
    for (it=dados.begin(); it != dados.end(); it++)
        cout << " " << *it;
    cout << " ]" << endl;

    //--------------------------

    sort(dados.begin(), dados.end());

    cout << "\nLista Ordenada:" << endl;
    cout << "[";
    for (it=dados.begin(); it != dados.end(); it++)
        cout << " " << *it;
    cout << " ]" << endl;

    //--------------------------

    sort(dados.begin(), dados.end(), compare<int>);

    cout << "\nLista Ordenada Reversa:" << endl;
    cout << "[";
    for (it=dados.begin(); it != dados.end(); it++)
        cout << " " << *it;
    cout << " ]" << endl;

    system("pause");
    return 0;
}


