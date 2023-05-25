//O programa calcula as raízes de uma equação do segundo grau
#include <stdio.h>
#include <math.h>
#include <locale.h>

int opcao = 1;
int main(){
   setlocale(LC_ALL,"Portuguese");  
   while (opcao==1){
    float a, b, c,    //coeficientes
          delta,      //delta
          sqrtdelta,  //raiz quadrada de delta
        raiz1,raiz2;  //raízes

        //Passo 1: Recebendo os coeficientes
        printf("\n----- FMU - CALCULO DE RAÍZES -----\n\n");
        printf("Equação do 2o grau: ax² + bx + cx = 0\n");

        printf("Entre com o valor de a: ");
        scanf("%f", &a);

        printf("Entre com o valor de b: ");
        scanf("%f", &b);

        printf("Entre com o valor de c: ");
        scanf("%f", &c);


        //Passo 2: Checando se a equação é válida
        if(a != 0)
        {

        //Passo 3: recebendo o valor de delta e calculando sua raiz quadrada
            delta = (b*b) - (4*a*c);
            sqrtdelta = sqrt(delta);

        //Passo 4: se a raiz de delta for maior que 0, as raízes são reais
            if(delta >= 0)
            {
                raiz1 = (-b + sqrtdelta)/(2*a);
                raiz2 = (-b - sqrtdelta)/(2*a);
                printf("Raízes: %.2f e %.2f", raiz1, raiz2);
            }
        //Passo 5: se delta for menor que 0, as raízes serão complexas
            else
            {
                delta = -delta;
                sqrtdelta = sqrt(delta);
                printf("Raíz 1: %.2f + i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));
                printf("Raíz 2: %.2f - i.%.2f\n", (-b)/(2*a), (sqrtdelta)/(2*a));

            }

        }
        else
            printf("Coeficiente 'a' inválido. Não é uma equação do 2o grau");
            
    printf("\n\nDigite sua opção:\n1-Mais uma equação \n2-Encerrar programa \n");
    printf("Opção: ");
	scanf("%d",&opcao);
}}
