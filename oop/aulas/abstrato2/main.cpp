#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

class FormaGeometrica{
public:
    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;
};

class Retangulo : public FormaGeometrica {
    double base, altura;
public:
    Retangulo(double base, double altura) : base(base), altura(altura) {}
    double calcularArea() {
        return base*altura;
    }
    double calcularPerimetro() {
        return 2*(base+altura);
    }
};

class Quadrado : public FormaGeometrica {
    double lado;
public:
    Quadrado(double lado) : lado(lado) {}
    double calcularArea() {
        return lado*lado;
    }
    double calcularPerimetro() {
        return 4*lado;
    }
};

class Circulo : public FormaGeometrica {
    double raio;
public:
    Circulo(double raio) : raio(raio) {}
    double calcularArea() {
        return 3.14*raio*raio;
    }
    double calcularPerimetro() {
        return 2*3.14*raio;
    }
};

int main()
{
    vector<FormaGeometrica*> formas;
    Quadrado q(10);
    Retangulo r(10,20);
    Circulo c(5);

    formas.push_back(&q);
    formas.push_back(&r);
    formas.push_back(&c);

    for (int i=0; i<formas.size(); i++)
        cout << "Area da forma " << i << ": " << formas[i]->calcularArea() << endl;

    system("pause");
    return 0;
}
