#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Cabeçalho de funções
void imprimir(int *vetor, int n);
void randomize(int *vetor, int n);

int main ()
{ 
  int a;
  int * vetor = NULL;

  do
  {

  cout << "Digite um tamanho para o vetor, 0 encerra o código: \n";
  cin >> a;
  
  vetor = new int [a]; //Alocação dinâmica

  randomize(vetor, a);
  imprimir(vetor, a);
  
  delete vetor; //Liberar o espaço na memória

  cout << endl;
  
  }while (a != 0);

  return 0;
}

//Escopo das funções

void randomize(int * vetor, int n)
{
  srand(time(NULL));
  
  for (int i = 0; i < n; i++)
    {
    vetor[i] = rand() % 50 + 1;
    }
}

void imprimir(int * vetor, int n)
{
  for (int i = 0; i < n; i++)
    cout << vetor[i] << " ";
}
