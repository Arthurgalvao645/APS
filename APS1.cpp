//O programa l� um valor inteiro correspondente � idade de uma pessoa em dias e o informa em anos, meses e dias
#include<stdio.h>
#include <locale.h>

int opcao = 1;
int main() {
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){
    int valor, ano = 0, meses = 0, dias = 0; 
	printf("\n----- FMU - CONVERS�O DE IDADE -----\n\n");
	printf("Digite quantos dias de idade voc� tem: ");		
    scanf("%d", &valor);	//Recebe o total de dias
    
	while (valor >= 365){	//Calculo do(s) ano(s) de idade
		valor = valor - 365;
		ano++;
	}
	while (valor >= 30){	//Calculo do(s) mes(es) de idade
		valor = valor - 30;
		meses++;
	}
	dias = valor;			//Calculo do(s) dia(s) de idade
	
	printf("\n%Voc� tem: \t%d ano(s)\n", ano);
	printf("\t\t%d m�s(es)\n", meses);
	printf("\t\t%d dia(s)", dias);
	
    printf("\n\nDigite sua op��o:\n1-Mais uma convers�o \n2-Encerrar programa \n");
    printf("Op��o: ");
	scanf("%d",&opcao);
}}
