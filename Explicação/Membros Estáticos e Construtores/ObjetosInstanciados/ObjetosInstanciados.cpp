// Arquivo de implementacao da classe ObjetosInstanciados

#include "ObjetosInstanciados.h"

/* static */ int ObjetosInstanciados::nObjetos;			// associacao do atributo estatico à classe

// construtor da classe
ObjetosInstanciados::ObjetosInstanciados()
{
	nObjetos++;		// incrementa o atributo de número de objetos instanciados
}

// Metodo get que retorna o número de objetos instanciados
int ObjetosInstanciados::getNObjetos() const
{
	return nObjetos;
}

// Destrutor da classe
ObjetosInstanciados::~ObjetosInstanciados()
{
	nObjetos--;		// decrementa o atributo de número de objetos instanciados
}
