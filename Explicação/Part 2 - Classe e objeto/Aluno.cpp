// Arquivo de implementação da classe
// Localizados as implementações dos métodos da classe
// que foram definidos no arquivo de cabeçalho da classe
#include "Aluno.hpp"

// Método get do atributo nota1
// Retorna o valor do atributo nota1
int Aluno::getNota1()
{
    return nota1;       // retorno valor do atributo do objeto
}

// Método get do atributo nota2
// Retorna o valor do atributo nota2
int Aluno::getNota2()
{
    return nota2;       // retorno valor do atributo do objeto
}

// Atribui valor ao atributo nota1
// nota: valor que se deseja atribuir ao atributo nota1
void Aluno::setNota1(int nota)
{
    // validacao de entrada de dados
    if(nota >= 0 && nota <= 100)
        nota1 = nota;              // atribuição de nota1
    else
    {
        // valor inválido de nota
        cerr << "\n ERRO: valor invalido de nota!";
        nota1 = 0;                 // atributo assume um valor válido padrão
    }
}

// Atribui valor ao atributo nota2
// nota: valor que se deseja atribuir ao atributo nota2
void Aluno::setNota2(int nota)
{
    // validacao de entrada de dados
    if(nota >= 0 && nota <= 100)
        nota2 = nota;              // atribuição de nota2
    else
    {
        // valor inválido de nota
        cerr << "\n ERRO: Valor invalido de nota!";
        nota2 = 0;                 // atributo assume um valor válido padrão
    }
}

// Retorna o valor do atributo nome (string)
string Aluno::getNome()
{
    return nome;        // retorna valor do atributo
}

// Atribui valor ao atributo nome do objeto
// n: valor que se deseja atribuir ao atributo
void Aluno::setNome(string n)
{
    nome = n;       // atribuição de valor ao atributo nome
}

// Retorna valor do atributo matricula
string Aluno::getMatricula()
{
    return matricula;       // retorna valor do atributo
}

// Atribui valor ao atributo matricula (string)
// m: valor que se deseja atribuir ao atributo
void Aluno::setMatricula(string m)
{
    matricula = m;          // atribuição de valor
}

// Imprime em tela o estado do objeto (valores de seus atributos)
// e exibe a média das notas
void Aluno::imprimir()
{
    cout << "\n Nome: " << nome << " Matricula: " << matricula
         << "\n Nota 1: " << nota1
         << "\n Nota 2: " << nota2
         << "\n fMedia: "  << media();      // chamada do método media da classe

    // Observação: todos os métodos e atributos da classe
    // são acessíveis no interior dos métodos da classe,
    // sejam eles públicos ou privados
 }

// Retorna a média das notas do objeto Aluno
// Consieramos que a nota é sempre inteira, como no IFPB
int Aluno::media()
{
    return (nota1 + nota2) / 2;     // calcula e retorna valor da média
}