// Arquivo principal de teste da classe ObjetosInstanciados

#include <iostream>

using std::cout;
#include <iostream>
using std::cout;
using std::endl;

#include "ObjetosInstanciados.h"		// include da definição da classe

// função principal do programa
int main(void) 
{
	ObjetosInstanciados objeto1;	// instanciação de objeto

	// instanciação de objeto: declaração de ponteiro para objeto
	ObjetosInstanciados * objeto2 = new ObjetosInstanciados();
	
	
	cout << "\n CRIACAO DOS DOIS PRIMEIROS OBJETOS " << endl
		 << " Numero de objetos: " << objeto1.getNObjetos() << endl
		 << " Numero de objetos: " << objeto2->getNObjetos() << endl;
	
	{
		cout << "\n ENTRADA DE BLOCO DE COMANDOS  " << endl;
		
		ObjetosInstanciados objeto3;    // instanciação de objeto local ao bloco de comandos
		
		cout << " Numero de objetos: " << objeto2->getNObjetos() << endl;
		cout << " Numero de objetos: " << objeto3.getNObjetos() << endl;
	}
	
	cout << "\n SAIDA DE BLOCO DE COMANDOS  " << endl;
	cout << " Numero de objetos: " << objeto1.getNObjetos() << endl;
	
	delete objeto2;		// removendo alocaco de ponteiro (destruicao de objeto)
	
	cout << "\n DELETE OBJETO 2  " << endl;
	cout << " Numero de objetos: " << objeto1.getNObjetos() << endl;
	
	return 0;
}
