//O programa calcula o aumento de sal�rios
#include <stdio.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");
   while (opcao==1){
	float salario, percentual, reajuste, salarioNovo = 0;
	int repete = 0;
	int teste = 0;	
	printf("\n----- FMU - AUMENTO DE SAL�RIO -----\n\n");
    printf("Nesse programa voc� calcula o aumento do seu sal�rio\n");
	printf("Digite o seu sal�rio: ");
	scanf("%f",&salario);				//Entrada do sal�rio antigo

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
	salarioNovo = salario + reajuste;	//Calculo do novo sal�rio
	
	printf("\n Novo sal�rio: %.2f", salarioNovo);
	printf("\n Reajuste ganho: %.2f", reajuste);
	printf("\n Em percentual: %.0f %%", percentual*100);

    printf("\n\nDigite sua op��o:\n1-Mais um calculo \n2-Encerrar programa \n");
    printf("Op��o: ");
	scanf("%d",&opcao);
}}
