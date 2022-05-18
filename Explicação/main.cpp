#include <iostream>    // uso de cout, cin, cerr
#include <string>      // uso da classe string
#include "Aluno.hpp"   // include do cabeçalho da classe 

using namespace std;

int main(void)
{
    Aluno aluno1;    // instanciação de objeto
    Aluno aluno2;    // instanciação de objeto

    string nomeAluno;   // variável para receber nome informado
                        // pelo usuário

    cout << " Digite seu nome: ";
    getline(cin, nomeAluno);                // entrada de dados para string com espaço
    
    // definição de valores para o atributo
    // nome dos abjetos aluno1 e aluno2
    // faz-se uso de método acessor set (atributo nome é privado) 
    aluno1.setNome(nomeAluno);
    aluno2.setNome("Epitacio Ferreira");     // aluno2.nome = "Joao de Sousa";

    // definição de valores para o atributo
    // matricular dos abjetos aluno1 e aluno2
    // faz-se uso de método acessor set (atributo matricula é privado) 
    aluno1.setMatricula("101010101-0");      // aluno1.matricula = "abcdef";
    aluno2.setMatricula("654321-8");         // aluno2.matricula = ;

    // exibe em tela os valores dos atributos nome e matricula
    // dos objetos aluno1 e aluno2. o acesso aos valores desses 
    // atributos é feito por meio de método acessor get. (nome e matricula são privados)
    cout << " Nome aluno1: "        <<  aluno1.getNome();
    cout << "\n Nome aluno2: "      <<  aluno2.getNome();
    cout << "\n Matricula aluno1: " <<  aluno1.getMatricula();
    cout << "\n Matricula aluno2: " << aluno2.getMatricula();

    // atribundo valores aos atributos de nota dos objetos aluno1
    // e aluno2. Atributos privados que tiveram seus valores modificados
    // por meio de método acessor set.
    cout << "\n -> Atribuindo notas para o aluno 1 ....";
    aluno1.setNota1(-100);  // aluno1.nota1 = 100; Método não permite valor inválido
    aluno1.setNota2(-90);   // aluno1.nota2 = 90;  Método não permite valor inválido

    aluno2.setNota1(70);   // aluno2.nota1 = 70;
    aluno2.setNota2(80);   // aluno2.nota2 = 80;

    // Exibe notas dos objetos e suas médias
    cout << "\n\n Notas Aluno 1: ";
    cout << aluno1.getNota1() << " " << aluno1.getNota2();   // método acessor get
    cout << "\n Media: " << aluno1.media();                  

    cout << "\n Notas Aluno 2: ";
    cout << aluno2.getNota1() << " " << aluno2.getNota2();   // método acessor get
    cout << "\n Media: " << aluno2.media();

    // imprime estados dos objetos aluno1 e aluno2
    cout << "\n\n ##### ALUNO 1 #####";
    aluno1.imprimir();

    cout << "\n\n ##### ALUNO 2 #####";
    aluno2.imprimir();

    return 0;
}