/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* VARI�VEIS GERAIS*/
char lc_all;
char menu1;
char volta;
/*SOMA*/
float num1;
float num2;
float soma;
/*MULTIPLICA��O*/
float num3;
float num4;
float multipli;
/*TRIANGULO A*/
char menu2;
float num5;
float num6;
float treco1;
float triang1;
/*TRIANGULO B*/
float num7;
float num8;
float treco2;
float triang2;

/* MENU GERAL */
int main()
{
	inicio:
	system ("cls");
	system ("color 0b");
	system ("mode 60,50");
	setlocale (lc_all, "");
	printf ("\n                      CALCULAR COISAS\n");
	printf ("\n O que vo�� quer fazer?");
	printf ("\n Soma de dois n�meros............[digite a]");
	printf ("\n Multiplica��o de dois n�meros...[digite b]");
	printf ("\n Lados de tri�ngulo..............[digite c]\n\n ");
	fflush (stdin);
	scanf ("%c", &menu1);
	
	/* PROGRAMA SOMA */
	
	if (menu1 == 'a')
		{
			printf ("\n Digite o primeiro valor: ");
			fflush (stdin);
			scanf ("%f", &num1);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num2);
		/*CONTA SOMA*/
			soma = num1 + num2;
			printf (" Resultado: %.2f", soma);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
		}
	
	/* PROGRAMA MULTIPLICA��O */
	
	if (menu1 == 'b')
		{
			printf("\n Digite o primeiro valor: ");
			fflush (stdin);
			scanf ("%f", &num3);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num4);
		/*CONTA MULTIPLI*/
			multipli = num3 * num4;
			printf (" Resultado: %.2f", multipli);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
		}
	
	/* MENU TRI�NGULO */
		 
	if (menu1 == 'c')
		{
			printf ( "\n O que vo�� tem?");
			printf ("\n Hipotenusa e cateto.........[digite a]");
			printf ("\n Cateto e cateto.............[digite b]");
			printf ("\n Nenhuma das alternativas....[digite c]\n\n ");
			fflush (stdin);
			scanf ("%c", &menu2);
		
	/* TRI�NGULOS */
	
		/*MENU TRIANG1*/ 
			if (menu2 == 'a')
			{
				printf ("\n Digite a hipotenusa: ");
				fflush (stdin);
				scanf ("%f", &num5);
				printf (" Digite o cateto: ");
				fflush (stdin);
				scanf ("%f", &num6);
		/*CONTA TRIANG1*/
				treco1 = (num5 * num5) - (num6 * num6);
				triang1 = sqrt (treco1);
				printf (" O outro cateto �: %.2f", triang1);
			/*volta*/
				printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 's')
				goto inicio;
				}
		/*MENU TRIANG2*/
				if (menu2 =='b')
				{
				printf ("\n Digite um cateto: ");
				fflush (stdin);
				scanf ("%f", &num7);
				printf (" Digite o outro cateto: ");
				fflush (stdin);
				scanf ("%f", &num8);
		/*CONTA TRIANG2*/
				treco2 = (num7*num7) + (num8*num8);
				triang2 = sqrt (treco2);
				printf (" A Hipotenusa �: %.2f", triang2);
			/*volta*/
				printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 's')
				goto inicio;
			}
		/*TERCEIRO CASO*/
			if (menu2 =='c')
			{
				printf ("\n N�o consigo te ajudar ent�o. tchau.");
			}
			
		}
	return 0;
}
