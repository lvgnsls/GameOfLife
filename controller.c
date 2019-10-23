#include "model.h"
#include "view.h"
#include <stdio.h>


int tamanhoMundo;
tipo_celula mundo[100][100];

void confMundo()
{
	tamanhoMundo = entradaValorInt("Insira o tamanho do mundo ");
 	while (tamanhoMundo < 50 || tamanhoMundo > 100)
 	{
 		mensagem("Tamanho invalido, insira novamente");
 		tamanhoMundo = entradaValorInt("Insira o tamanho do mundo ");
	}
}


void geracaoInicial(){
	mensagem("Defina como quer a primeira geracao: ");
	booleano novaPosicao = TRUE;
	while (novaPosicao == TRUE)
	{
		int posicaoX;
		int posicaoY;
		posicaoX = entradaValorInt("Insira a posicao do X");
		posicaoY = entradaValorInt("Insira a posicao do Y");
		if ((posicaoX <= 0 || posicaoX > tamanhoMundo) || (posicaoY <= 0 || posicaoY > tamanhoMundo))
		{
			mensagem("Dado invalido ");
			mensagem("Insira novamente ");
		}
		else 
		{
			mundo[posicaoY - 1][posicaoX - 1].status = TRUE;
			novaPosicao = entradaValorLogico("Quer continuar? ");
		}	
		
	}
	
}
