#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using std::string;
using std::cout;
using std::endl;
using std::vector;    
    
class Funcionario{
    protected:
        string Nome;
        string Matricula;
        double SalarioBase;
    public:
        virtual double calcularSalario() = 0;
        Funcionario(string nome , string matricula, double salarioBase): Nome(nome), Matricula(matricula), SalarioBase(salarioBase){}
        Funcionario(){}
        void setNome(string nome){
            Nome = nome;
        }
        string getNome(){
            return Nome;
        }
        void setMatricula(string matricula){
            Matricula = matricula;
        }
        string getMatricula(){
            return Matricula;
        }
        void setSalarioBase(double salarioBase){
            SalarioBase = salarioBase;
        }
        double getSalarioBase(){
            return SalarioBase;
        }    
};
class Gerente : public Funcionario{
    private:
        
    public:
        Gerente(string nome, string matricula, double salarioBase) : Funcionario (nome,matricula,salarioBase){}
        Gerente(){}
        double calcularSalario(){
            return 2*(SalarioBase);
        }
};

class Assistente: public Funcionario{
    private:
    public:
        Assistente(string nome, string matricula, double salarioBase): Funcionario(nome,matricula,salarioBase){}
        Assistente(){}
        double calcularSalario(){
            return SalarioBase;
        }
};

class Vendedor: public Funcionario{
    private:
        double Comissao;
    public:
        Vendedor(string nome, string matricula, double salarioBase): Funcionario(nome,matricula,salarioBase){}
        Vendedor(){}
        void setComissao(double comissao){
            Comissao = comissao;
        }
        double getComissao(){
            return Comissao;
        }
        double calcularSalario(){
            return SalarioBase + (SalarioBase*Comissao);
        }   
};


int main(){    

    vector<Funcionario*> lista;
    Gerente g;
    g.setNome("patrick");
    g.setMatricula("a-1111");
    g.setSalarioBase(2000);
    lista.push_back(&g);
    Assistente a;
    a.setNome("alex");
    a.setMatricula("a-2222");
    a.setSalarioBase(1000);
    lista.push_back(&a);

    Vendedor v;
    v.setNome("Rodnei");
    v.setMatricula("a-3333");
    v.setComissao(0.2);
    v.setSalarioBase(1000);
    lista.push_back(&v);
    
    
    for(int i=0; i<lista.size();i++){
        cout<< "Funcionario: "<<lista[i]->getNome()<< " da matricula "<< lista[i]->getMatricula()<<" ganha: " <<lista[i]->calcularSalario() <<endl;
    }
    
return 0;  
}

