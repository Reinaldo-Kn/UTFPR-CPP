#include <iostream>
#include <set>

class Teste {
    int num;
    int criacao;
public:
    Teste(int n, int c) : num(n), criacao(c) {}
    int getCriacao() const {return criacao;}
    int getNum() const {return num;}
    bool operator< (Teste t) const { return num < t.num; }
};

using namespace std;

void imprimir(multiset<Teste> t) {
    set<Teste>::iterator it;
    for (it = t.begin(); it != t.end(); it++)
        cout << (*it).getNum() << " " << it->getCriacao() << endl;
    cout << endl;
}

int main()
{
    multiset<Teste> t;
    t.insert(Teste(10,0));
    t.insert(Teste(10,1));
    t.insert(Teste(10,2));
    t.insert(Teste(10,3));
    t.insert(Teste(10,4));
    t.insert(Teste(10,5));
    t.insert(Teste(10,6));
    t.insert(Teste(10,7));
    t.insert(Teste(10,8));
    t.insert(Teste(10,9));
    t.insert(Teste(10,10));

    imprimir(t);

    multiset<Teste>::iterator it = t.find(Teste(10,200));
    cout << it->getNum() << "  " << it->getCriacao() << endl << endl;

    it = t.lower_bound(Teste(10,200));
    cout << it->getNum() << "  " << it->getCriacao() << endl << endl;

    t.erase(it);

    imprimir(t);

    it = t.lower_bound(Teste(10,200));
    cout << it->getNum() << "  " << it->getCriacao() << endl << endl;

    it = t.upper_bound(Teste(10,200));
    it--;
    cout << it->getNum() << "  " << it->getCriacao() << endl << endl;

    system("pause");
    return 0;
}

