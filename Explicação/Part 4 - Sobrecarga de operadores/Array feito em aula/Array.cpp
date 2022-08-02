// Arquivo de implementação da classe Array
#include "Array.hpp"

// Construtor padrão sem parâmetros da classe
// Cria objeto com vetor com número de elementos padrão
Array::Array()
{
    // alocação dinâmica de memória
    vetor = new int [N_ELEMENTOS_PADRAO];
    n_elementos = N_ELEMENTOS_PADRAO;
}

// Construtor da classe
// n_elem: número de elementos no vetor (atributo)
Array::Array(int n_elem)
{
    if (n_elem > 0)     // verifica se número de elementos é válido
    {
        // alocação dinâmica de memória
        vetor = new int [n_elem];
        n_elementos = n_elem;
    }
    else
    {
        // n_elem é inválido! cria vetor dinamicamente
        // com número de elementos padrão
        vetor = new int [N_ELEMENTOS_PADRAO];
        n_elementos = n_elem;

        // lança mensagem de erro
        cerr << "\n ERRO: numero de elementos invalido!";
    }

    preencheVetor();        // preenche vetor (método auxiliar privado)
}

// Preenche atributo vetor com elementos que vão
// de 0 a (n_elementos - 1)
void Array::preencheVetor()
{
    // laço de preenchimento do vetor
    for(int i = 0; i < getNElementos(); i++)
    {
        vetor[i] = i;
    }
}

// atribui valor a uma posição do vetor (atributo)
// i: índice (posição) do vetor
// valor: valor que se deseja atribuit
void Array::setPosicao(int i, int valor)
{
    // validação da posição (índice) do vetor
    if(i >= 0 && i < getNElementos())
    {
        // atribui valor (posição - índice válido)
        vetor[i] = valor;
    }
    else
    {
        // índice inválido: lança mensagem e sai do programa
        cerr << "\n ERRO: indice invalido!";
        exit(EXIT_FAILURE);
    }
}

// Retorna valor na posição de índice i
// i: índice do vetor (atributo)
int Array::getPosicao(int i) const
{
    // validação da posição (índice)
    if(i >= 0 && i < getNElementos())
    {
        // retorna valor da posição solicitada
        return vetor[i];
    }
    else
    {
        // índice inválido: lança mensagem e sai do programa        
        cerr << "\n ERRO: indice invalido!";
        exit(EXIT_FAILURE);
    }
}

// Efetua a adição entre dois objetos da classe Array
// segundo operando da soma entre objetos array
// Retorna um objeto Array, resultado da adição
Array * Array::operator+(const Array & array) const
{
    // para efetuar a adição, os vetores devem
    // possuir o mesmo tamanho
    if(getNElementos() == array.getNElementos())
    {
        // a adição é possível
        // instanciação de objeto resultado (ponteiro)
        Array * resultado = new Array(getNElementos());

        // adição entre os objetos ARray
        for(int i = 0; i < getNElementos(); i++)
        {
            resultado->vetor[i] = vetor[i] + array.vetor[i];
            // veja uso do operador seta (->), devido o ponteiro
            
            //retorno.vetor[i] = this->vetor[i] + array.vetor[i];
        }

        return resultado;  // retorna resultado da adição
    }

    // condição inválida para realização da adição
    // atributos vetor de diferentes tamanhos
    cerr << "\n ERRO: os vetores devem ter o mesmo tamanho!";
    exit(EXIT_FAILURE); 
}

// Retorna o número de elementos do objeto array
int Array::getNElementos() const
{
    return n_elementos;
}

// Exibe em tela os elementos do objeto Array
void Array::imprimir() const
{
    cout << "\n VETOR: ";

    // percorre elementos do objeto Array,
    // imprimindo-os em tela
    for(int i = 0; i < getNElementos(); i++)
    {
        cout << vetor[i] << " ";
    }
}

// Método destrutor da classe
Array::~Array()
{
    // desaloca a memória utilizada pelo
    // atributo vetor
    delete [] vetor;
}

// Retorna uma cópia do atributo vetor
int * Array::getVetor() const
{
    // alocação dinâmica de vetor vetorCopia
    int * vetorCopia = new int [getNElementos()];

    // efetua cópia do atributo vetor em vetorCopia
    for(int i = 0; i < getNElementos(); i++)
    {
        vetorCopia[i] = vetor[i];
    }

    // retorna a cópia (vetorCopia)
    return vetorCopia;
}

// Método de sobrecarga
// num: escalar a ser adicionado ao vetor
void Array::operator+(int num)
{
    // realização de operação de adição entre
    // vetor e um escalar (modifica o atributo do objeto)
    for(int i = 0; i < getNElementos(); i++)
    {
        vetor[i] = vetor[i] + num;
    }    
}