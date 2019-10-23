#include "stdio.h"
#include "model.h"



int entradaValorInt(char texto[]){
	printf(texto);
	int entrada;
	scanf("%d", &entrada);
	return entrada;	
}

void mensagem(char texto[])
{
	printf("%s\n", texto);
}

booleano entradaValorLogico(char texto[])
{
	printf("%s (Digite 1 para sim e 0 para nao)", texto);
	booleano entrada;
	scanf("%d", &entrada);
	return entrada;	
}
