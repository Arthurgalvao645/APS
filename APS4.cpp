//O programa gera uma tabuada do n�mero escolhido
#include<stdio.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){	
	int valor, nTabuada, c = 1;
	printf("\n----- FMU - TABUADA -----\n\n");
	printf("Digite um n�mero: ");	
	scanf("%d",&valor);				//Entrada do n�mero
	printf("\n-----------------------");

	while(c  <= 10){
		nTabuada = c * valor;		//Calculo da mutiplica��o
		printf("\n %d x %d  = %d", c, valor, nTabuada);
		c++;		
	}

    printf("\n\nDigite sua op��o:\n1-Outra tabuada \n2-Encerrar programa \n");
    printf("Op��o: ");
	scanf("%d",&opcao);
}}
