//O programa gera uma tabuada do número escolhido
#include<stdio.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){	
	int valor, nTabuada, c = 1;
	printf("\n----- FMU - TABUADA -----\n\n");
	printf("Digite um número: ");	
	scanf("%d",&valor);				//Entrada do número
	printf("\n-----------------------");

	while(c  <= 10){
		nTabuada = c * valor;		//Calculo da mutiplicação
		printf("\n %d x %d  = %d", c, valor, nTabuada);
		c++;		
	}

    printf("\n\nDigite sua opção:\n1-Outra tabuada \n2-Encerrar programa \n");
    printf("Opção: ");
	scanf("%d",&opcao);
}}
