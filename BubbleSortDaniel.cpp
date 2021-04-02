#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int capacidade = 0;
	
	printf("Digite quantos valores voce quer verificar para o Bobble Sort: ");
		scanf("%d", &capacidade);
	
	int vetor[capacidade], troca1 = 0, troca2 = 0;
	
	for(int i = 0; i < capacidade; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &vetor[i]);
	}

	for(int j = 1; j < capacidade; j++){
		for(int i = 0; i < capacidade - 1; i++){
			
			if(vetor[i] > vetor[i + 1]){
				troca1 = vetor[i];
				troca2 = vetor[i + 1];
				vetor[i] = troca2;
				vetor[i + 1] = troca1;
			}
		}
	}
	for(int i = 0; i < capacidade; i++){
		printf("Vetor ordenado na posicao [%d]: %d \n", i, vetor[i]);
	}

}
