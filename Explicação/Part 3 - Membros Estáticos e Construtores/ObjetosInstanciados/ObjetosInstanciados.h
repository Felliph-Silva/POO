// Definição da classe ObjetosInstanciados.h

#ifndef _OBJETOS_INSTANCIADOS_H_
#define _OBJETOS_INSTANCIADOS_H_

class ObjetosInstanciados
{
	public:
		ObjetosInstanciados();		// construtor da classe
		
		int getNObjetos() const;    // retorna o numero de objetos instanciados
		
		~ObjetosInstanciados();     // destrutor da classe
		
	private:
		static int nObjetos;		// atributo estatico: numero de objetos instanciados
};

#endif
