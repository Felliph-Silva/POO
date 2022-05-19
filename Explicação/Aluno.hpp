// Arquivo de cabeçalho da classe
// Este arquivo contém somente a definição da classe
// Seus métodos e atributos
#ifndef CLASSE_ALUNO
#define CLASSE_ALUNO

#include <iostream>  // cin, cout, cerr
#include <string>    // classe string

using namespace std;

class Aluno
{
    // métodos: açoes que os objetos podem realizar
    public:  
        int getNota1();                 // método get de atributo nota1
        int getNota2();                 // método get de atributo nota2

        void setNota1(int nota);        // método set de atributo nota1
        void setNota2(int nota);        // método set de atributo nota2

        string getNome();               // método get de atributo nome
        void setNome(string n);         // método set de atributo nome

        string getMatricula();          // método get de atributo matricula
        void setMatricula(string m);    // método set de atributo matricula

        void imprimir();                // imprime em tela estado do objeto Aluno

        int media();                    // calcula a media das notas do Aluno
    
    private:
        int nota1, nota2;               // atributos de notas
        string nome, matricula;         // atributos nome e matricula do Aluno
};

#endif
