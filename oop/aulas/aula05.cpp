#include <iostream>
#include <string>


// curso ibm https://www.edx.org/course/object-oriented-implementation-using-c

using namespace std;

class Pessoa
{ 
private:
	string nome;
public:
	Pessoa(string n = ""): nome(n){ cout << "Fui criado" <<endl;}
	~Pessoa (){cout << "Fui removido..." <<endl;}

	void setNome(string n){
		nome = n;
	}
	string getNome(){
		return nome;
	}
	
};

class Carro
{
	Pessoa* dono;    // alteração para ponteiro e mudança no getter/setter
public:
	 void setDono(Pessoa* pi){
	 	dono =pi;
	 }
	 Pessoa* getDono(){
	 	return dono;
	 }
	
};

int main(int argc, char const *argv[])
{
	Pessoa* p = new Pessoa();   // new é o malloc 
								// delete é o free
	p->setNome("Alice");

	Carro parati;
	parati.setDono(p);   //passando um endereço

	cout << parati.getDono()->getNome() <<endl;  // acesso por -> e nao mais por .

	p->setNome("Samantha");

	cout << parati.getDono()->getNome() << endl;

	delete (p);   // free do new(malloc)

	return 0;
}