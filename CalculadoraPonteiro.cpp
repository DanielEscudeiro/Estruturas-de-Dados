#include <stdlib.h>
#include <stdio.h>

int *Pn1; 
int *Pn2;

int soma(){

	return *Pn1 + *Pn2;
}

int subtracao(){

	return *Pn1 - *Pn2;	
}

int multiplicacao(){
	
	return *Pn1 * *Pn2;
}

int divisao(){
	
	return *Pn1 / *Pn2;
}

int main (void){
	
	int n1, n2, operacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	
	printf("Escolha a operacao [1-soma, 2- subtracao, 3- multiplicacao, 4- divisao]: ");
	scanf("%d", &operacao);
	
	Pn1 = &n1;
	Pn2 = &n2;
	
	if(operacao == 1){
		printf("A soma e igual a: %d", soma());
	}
	else if(operacao == 2){
		printf("A subtracao e igual a: %d", subtracao());
	}
	else if(operacao == 3){
		printf("A multiplicacao e igual a: %d", multiplicacao());
	}
	else{
		printf("A divisao e igual a: %d", divisao());
	}
	
}

