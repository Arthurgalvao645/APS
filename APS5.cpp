//O programa l� 6 valores e mostra quantos destes valores s�o positivos, e a m�dia de todos os valores positivos
#include<stdio.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){
	float numeros[6];
	int valoresPositivos = 0;
	float media = 0;
	printf("\n----- FMU - CALCULO -----\n\n");	
	for (int c = 0; c < 6;c++){
		printf("Digite um numero: ");
		scanf("%f", &numeros[c]);
		
		if (numeros[c] > 0){
			valoresPositivos++;
			media = media + numeros[c];
		}
	}
	media = media / valoresPositivos;
	printf("\n %d valor(es) positivo(s)",valoresPositivos);
	printf("\n M�dia dos valores: %.1f", media);
	
	printf("\n\nDigite sua op��o:\n1-Mais um projeto \n2-Encerrar programa \n");
    printf("Op��o: ");
	scanf("%d",&opcao);
}}
