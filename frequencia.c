#include "frequencia.h"

int frequencia(char frase[], char caractere){
	
	int i = 0, quantidade = 0;
	
	for (i = 0; i < strlen(frase); i++)
	{
		if(frase[i] == caractere)
		{
			quantidade++;
		}	
	}
	
	return quantidade;
	
}

int maior_frequecia(int frase_int[], int tamanho){
	
	int maior = 0, i = 0;
	
	for (i = 0; i < tamanho; i++)
	{
		if (frase_int[i] > maior)
		{
			maior = frase_int[i];
		}	
	}	
	
	return maior;
}

void imprime_mais_frequente(int vetor_int[], int tamanho, int frequencia){
	
	int i = 0;
	
	for(i = 0; i < tamanho; i++)
	{
		if (vetor_int[i] == frequencia)
		{
			printf("%c", i + 97); // a = 97 na tabela ASCII em decimal
		}
	
	}
	printf("\n");
}

void limpa_buffer(void)
{
	char c;
	while((c = getchar()) != '\n');	
}