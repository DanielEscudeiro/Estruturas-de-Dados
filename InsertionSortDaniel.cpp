#include <stdlib.h>
#include <stdio.h>

int main (void){
	
	int capacidade = 0, posicaoAtual, j = 0;
	
	printf("Digite quantos valores voce quer verificar para o Insertion Sort: ");
		scanf("%d", &capacidade);
	
	int vetor[capacidade], troca1 = 0, troca2 = 0;
	
	for(int i = 0; i < capacidade; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &vetor[i]);
	}

	for(int i = 1; i < capacidade; i++){
		
		posicaoAtual = vetor[i];
		
		j = i - 1;
		
		while((j >= 0) && (posicaoAtual < vetor[j])){
			
			vetor[j + 1] = vetor[j];
			
			j--;
		}
		vetor[j + 1] = posicaoAtual;
	}

	for(int i = 0; i < capacidade; i++){
		printf("Vetor ordenado na posicao [%d]: %d \n", i, vetor[i]);
	}

}
