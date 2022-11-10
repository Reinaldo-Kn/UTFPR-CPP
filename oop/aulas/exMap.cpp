#include <iostream>
#include <map>

using namespace std;

template<typename T, typename U>
void imprimir(map<T,U> c) {
    map<string,int>::iterator it;
    for (it = c.begin(); it != c.end(); it++)
        cout << it->first << " "
             << it->second << endl;
    cout << endl;
}

int main()
{
    map<string,int> mapa;

    mapa["POO"] = 95;
    mapa["PESQ"] = 75;
    mapa["EDO"] = 100;

    pair<string,int> par;
    par.first = "CALCIV";
    par.second = 60;
    mapa.insert(par);

    map<string,int>::iterator it;
    it = mapa.find("POO");
    if (it != mapa.end())
        cout << it->second;
    else
        cout << "Nao fez ainda" << endl;

    imprimir(mapa);

    system("pause");
    return 0;
}
