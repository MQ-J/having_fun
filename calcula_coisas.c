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
/*SUBTRA��O*/
float num9;
float num10;
float subtra;
/*MULTIPLICA��O*/
float num3;
float num4;
float multipli;
/*POT�NCIA*/
float num11;
float num12;
float poten;
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
	printf ("\n Subtra��o de dois n�meros.......[digite b]");
	printf ("\n Multiplica��o de dois n�meros...[digite c]");
	printf ("\n Pot�ncia........................[digite d]");
	printf ("\n Lados de tri�ngulo..............[digite e]\n\n ");
	fflush (stdin);
	scanf ("%c", &menu1);
	switch (menu1)
	{
	
	/* PROGRAMA SOMA */
	
	case 'a':
		
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
			break;
		
	/* PROGRAMA SUBTRA��O */
	
	case 'b':
			printf ("\n Digite o primeiro valor: ");
			fflush (stdin);
			scanf ("%f", &num9);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num10);
		/*CONTA SUBTRA*/
			subtra = num9 - num10;
			printf (" Resultado: %.2f", subtra);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
	/* PROGRAMA MULTIPLICA��O */
	
	case 'c':
		
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
			break;
	
	/* MENU POT�NCIA */
	
	case 'd':
			printf("\n Digite a base: ");
			fflush (stdin);
			scanf ("%f", &num11);
			printf (" Digite o expoente: ");
			fflush (stdin);
			scanf ("%f", &num12);
		/*CONTA POTEN*/
			poten = pow (num11 , num12);
			printf (" Resultado: %.2f", poten);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
	/* MENU TRI�NGULO */
		 
	case 'e':
			menuTriang:
			system("cls");
			printf ( "\n O que vo�� tem?");
			printf ("\n Hipotenusa e cateto.........[digite a]");
			printf ("\n Cateto e cateto.............[digite b]\n\n ");
			fflush (stdin);
			scanf ("%c", &menu2);
			switch (menu2)
			{
	
		/*MENU TRIANG1*/ 
			case 'a':
				
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
				printf("\n\n Quer voltar? [m = menu principal] [t = menu de tri�ngulos]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 'm')
				goto inicio;
				if (volta == 't')
				{
				goto menuTriang;
				}
				exit (0);
				break;

		/*MENU TRIANG2*/
			case 'b':
	
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
				printf("\n\n Quer voltar? [m = menu principal] [t = menu de tri�ngulos]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 'm')
				goto inicio;
				if (volta == 't')
				{
				goto menuTriang;
				}
				exit (0);
				break;
				
		/*OP��O INV�LIDA TRI�NGULO*/
				default:
				
				printf("\n\n Op��o inv�lida! Quer voltar? \n[m = menu principal] [t = menu de tri�ngulos]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 'm')
				goto inicio;
				if (volta == 't')
				{
				goto menuTriang;
				}
				exit (0);
			}
	/*OP��O INV�LIDA PRINCIPAL*/
	
	default:
				printf("\n\n Op��o inv�lida! Quer voltar? [s=sim] [n=n�o]\n\n ");
				fflush (stdin);
				scanf ("%c", &volta);
				if (volta == 's')
				goto inicio;
		}
	return 0;
}