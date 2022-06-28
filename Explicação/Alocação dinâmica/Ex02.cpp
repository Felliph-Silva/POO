#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Cabeçalho de funções.
void imprimir(int **matriz, int n);
void randomize(int **matriz, int n);
void soma(int **matriz1, int **matriz2, int **matriz3, int n);

int main()
{
  srand(time(NULL));
    int n, **matriz1 = NULL, **matriz2 = NULL, **matriz3 = NULL;

    cout << "Determine a dimensão para as matrizes quadradas: \n";
    cin >> n;

    matriz1 = new int *[n];//Alocando a quantidade de linhas para as matrizes.
    matriz2 = new int *[n];
    matriz3 = new int *[n];
  
    for (int i = 0; i < n; i++)//Alocando a quantidade de colunas para as matrizes.
    {
        matriz1[i] = new int [n];
        matriz2[i] = new int [n];
        matriz3[i] = new int [n];
    }
    
    randomize(matriz1, n);
    randomize(matriz2, n);

    cout << "Matriz 1: \n";
    imprimir(matriz1, n);
    
    cout << "Matriz 2: \n";
    imprimir(matriz2, n);
    
    
    soma(matriz1, matriz2, matriz3, n);

    cout << "Matriz soma: \n";
    imprimir(matriz3, n);
    return 0;
}

//Escopo das funções.

 void randomize(int **matriz, int n)
{

    for (int i = 0; i < n; i++)//Preencher a matriz com valores aleatórios.
    for (int j = 0; j < n; j++)
    {
        matriz [i][j]= rand() % 10 + 1;
    }
}

void imprimir(int **matriz, int n)
{
    for (int i = 0; i < n; i++)//Imprimir os valores da matriz.
    {
    for (int j = 0; j < n; j++)
    {
        cout << matriz [i][j] << " ";
    }
    cout << endl;
    }
}

void soma (int **matriz1, int **matriz2, int **matriz3, int n)
{
  for (int i = 0; i < n; i++)//Somar a primeira matriz com a segunda.
  for (int j = 0; j < n; j++)
    {
     matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
    }
}
