#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int minima, troca1 = 0, troca2 = 0, capacidade = 0;
	
	printf("Digite quantos valores voce quer verificar para o Selection Sort: ");
		scanf("%d", &capacidade);
	
	int vetor[capacidade];
	
	for(int i = 0; i < capacidade; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &vetor[i]);
	}

	for(int i = 0; i < capacidade - 1; i++)
	{
		minima = i;
		
		for(int j = i + 1; j < capacidade; j++)
		{
			if(vetor[j] < vetor[minima])
			{
				minima = j;
			}
		}
		if(i != minima)
		{
				troca1 = vetor[i];
				troca2 = vetor[minima];
				vetor[minima] = troca1;
				vetor[i] = troca2;
		}
	}
	for(int i = 0; i < capacidade; i++){
		printf("Vetor ordenado na posicao [%d]: %d \n", i, vetor[i]);
	}

}
