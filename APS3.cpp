//O programa calcula o aumento de salários
#include <stdio.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){
	float salario, percentual, reajuste, salarioNovo = 0;
	int repete = 0;
	int teste = 0;	
	printf("\n----- FMU - AUMENTO DE SALÁRIO -----\n\n");
    printf("Nesse programa você calcula o aumento do seu salário\n");
	printf("Digite o seu salário: ");
	scanf("%f",&salario);				//Entrada do salário antigo

	if(salario < 400.01){
		percentual = 0.15;
	}else if(salario < 800.01){
		percentual = 0.12;
	}else if(salario < 1200.01){
		percentual = 0.10;
	}else if (salario <= 2000){
		percentual = 0.07;
	}else{
		percentual = 0.04;
	}
	
	reajuste = salario * percentual;	//Calculo do reajuste
	salarioNovo = salario + reajuste;	//Calculo do novo salário
	
	printf("\n Novo salário: %.2f", salarioNovo);
	printf("\n Reajuste ganho: %.2f", reajuste);
	printf("\n Em percentual: %.0f %%", percentual*100);

    printf("\n\nDigite sua opção:\n1-Mais um calculo \n2-Encerrar programa \n");
    printf("Opção: ");
	scanf("%d",&opcao);
}}
