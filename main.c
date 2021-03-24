//Guilherme Almeida Mascarenhas
//Lucas Oliveira de Souza
//2ºADS-Manhã

#include "frequencia.h"

int main()
{
	int n = 0, i = 0, j=0, maior_letra = 0;
	int frase_int[LETRAS_ALFABETO];
	
	for(i = 0; i < LETRAS_ALFABETO; i++)//zera o vetor frase_int  
	{	
		frase_int[i] = 0;
	}
	
	char frase[COMPRIMENTO_MAXIMO];
	scanf("%d", &n);
	limpa_buffer();
	
	for (i = 0; i < n; i++)
	{
		scanf("%199[^\n]", frase);
		strlwr(frase); 
		
		limpa_buffer();
		
		for(j = 0; j < LETRAS_ALFABETO; j++)
		{
			frase_int[j] = frequencia(frase, 97 + j); // a = 97 na tabela ASCII em decimal
		}

		maior_letra = maior_frequecia(frase_int, LETRAS_ALFABETO);
		imprime_mais_frequente(frase_int, LETRAS_ALFABETO, maior_letra);
	}	
	
	return 0;
}