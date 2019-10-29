#include <stdio.h>
#include <stdlib.h>
#include "controller.h"

void main() {
	confMundo();
	geracaoInicial();
	mostrarMundo();	
	printf("\n\n");
	limparMundo();
	mostrarMundo();
}

