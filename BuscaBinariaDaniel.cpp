#include<stdio.h>
#include<conio.h>

int buscaBinaria(int *vetor, int item){
	int fim = 9;
	int interacoes = 0;
	
	 
	for(int inicio = 0; inicio <= fim;){
		
		int i = (inicio + fim) / 2;
	
		if(vetor[i] == item){
			interacoes++;
			return i;
		}
		if(vetor[i] < item){
			interacoes++;
			inicio = i + 1;
		}
		else{
			interacoes++;
			fim = i;
		}
		
	}
	
	return -1;
}

int main (void){
	
	int capacidade = 0, item = 0;
	
	printf("Digite a capacidade do vetor: ");
	scanf("%d", &capacidade);
	
	printf("Digite o valor que voce quer buscar: ");
	scanf("%d", &item);
		
	int vetor[capacidade];
	
	for(int i = 0; i < capacidade; i++){
		printf("Digite o numero na posicao %d: ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("Busca binaria do numero %d: \nEle esta na posicao: %d", item, buscaBinaria(vetor, item));

}
