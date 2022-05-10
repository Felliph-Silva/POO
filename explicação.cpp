#include <iostream>
#include <string>

using namespace std;

class aluno
{
//métodos e atributos.

public:
string nome, matricula;

//Definição dos métodos.
int getnota1();
int getnota2();

void setnota1(int n1);
void setnota2(int n2);
private:
  int nota1, nota2;
};

int main() 
{
  int nome_variavel;

  aluno aluno1;
  aluno aluno2;

  aluno1.nome = "José";
  
  cout << aluno1.nome;
}

int aluno::getnota1()
{
  return nota1;
}
