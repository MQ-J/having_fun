/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <time.h>

/* VARI�VEIS GERAIS*/
char lc_all;
char menu1;
char volta;
/*SOMA*/
float num1;
float num2;
float soma;
/*SUBTRA��O*/
float num3;
float num4;
float subtra;
/*MULTIPLICA��O*/
float num5;
float num6;
float multipli;
/*POT�NCIA*/
float num7;
float num8;
float poten;
/*TRIANGULO A*/
char menu2;
float num9;
float num10;
float treco1;
float triang1;
/*TRIANGULO B*/
float num11;
float num12;
float treco2;
float triang2;
/*NUMERO ALEAT�RIO*/
int num13;
int quant_aleatorio;  /*quantos numeros aleat�rios ser�o mostrados na tela*/
int limite_aleatorio; /*os numeros podem variar de 0 at� este valor*/
int variavel_for;            /*vari�vel para a fun��o for*/
/*DIVIS�O*/
float num14;
float num15;
float divis;
/*HACK*/
int hackeando;
int hackeando2;

/* MENU GERAL */
int main()
{	
	inicio:
		
	srand(time(NULL)); /*fun��o necessaria para o menu "numero aleat�rio"*/
		
	system ("cls");
	system ("color 0b");
	system ("mode 60,50");
	setlocale (lc_all, "");
	printf ("\n                      CALCULAR COISAS\n");
	printf ("\n O que vo�� quer fazer?");
	printf ("\n Soma.................[digite a]");
	printf ("\n Subtra��o............[digite b]");
	printf ("\n Multiplica��o........[digite c]");
	printf ("\n Divis�o..............[digite d]");
	printf ("\n Pot�ncia.............[digite e]");
	printf ("\n Lados de tri�ngulo...[digite f]");
	printf ("\n N�meros aleat�rios...[digite g]\n");
	printf ("\n Hackear a nasa.......[digite z]");
	printf ("\n {impossivel parar se come�ar}\n\n");
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
			scanf ("%f", &num3);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num4);
		/*CONTA SUBTRA*/
			subtra = num3 - num4;
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
			scanf ("%f", &num5);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num6);
		/*CONTA MULTIPLI*/
			multipli = num5 * num6;
			printf (" Resultado: %.2f", multipli);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
			
	/* MENU DIVIS�O */
	case 'd':
			printf("\n Digite o primeiro valor: ");
			fflush (stdin);
			scanf ("%f", &num14);
			printf (" Digite o segundo valor: ");
			fflush (stdin);
			scanf ("%f", &num15);
		/*CONTA DIVIS�O*/
			divis = num14 / num15;
			printf (" Resultado: %.2f", divis);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
	
	/* MENU POT�NCIA */
	
	case 'e':
			printf("\n Digite a base: ");
			fflush (stdin);
			scanf ("%f", &num7);
			printf (" Digite o expoente: ");
			fflush (stdin);
			scanf ("%f", &num8);
		/*CONTA POTEN*/
			poten = pow (num7 , num8);
			printf (" Resultado: %.2f", poten);
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
	/* MENU TRI�NGULO */
		 
	case 'f':
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
				scanf ("%f", &num9);
				printf (" Digite o cateto: ");
				fflush (stdin);
				scanf ("%f", &num10);
			/*avisa de erro*/
				if (num9 < num10)
				{
					printf("\n N�o d�, sua hipotenusa � menor que o cateto");
					printf("\n Quer voltar? [m = menu principal] [t = menu de tri�ngulos]\n\n ");
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
		/*CONTA TRIANG1*/
				treco1 = (num9 * num9) - (num10 * num10);
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
				scanf ("%f", &num11);
				printf (" Digite o outro cateto: ");
				fflush (stdin);
				scanf ("%f", &num12);
		/*CONTA TRIANG2*/
				treco2 = (num11*num11) + (num12*num12);
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
			
	/* N�MEROS ALEAT�RIOS */
	
	case 'g':
			printf("\n Digite Quantos n�meros aleat�rios vo�� quer: ");
			fflush (stdin);
			scanf ("%i", &quant_aleatorio);
			printf (" Digite at� que n�mero eles podem chegar: ");
			fflush (stdin);
			scanf ("%i", &limite_aleatorio);
			/*CONTA ALEAT�RIO*/
			quant_aleatorio = quant_aleatorio - 1;
			limite_aleatorio = limite_aleatorio + 1;
			for (variavel_for = 0; variavel_for <= quant_aleatorio; variavel_for++)
			{
				num13 = (rand() % limite_aleatorio);
				Sleep (500);
				printf("| %i |", num13);
			}
			/*volta*/
			printf("\n\n Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
			break;
			
	/* MENU HACK */
	case 'z':
			for (hackeando = 0; hackeando <= 100; hackeando++)
			{
				system("cls");
				printf(" Carregando: ");
				printf("%i", hackeando);
				Sleep (100);
			}
			system("cls");
			system("color 02");
			do
				printf("010011001010101100011100101010101111110001001101001010101001010101010000110000110110100111000011010101010");
			while (hackeando = 100);
			break;
	/* OP��O INV�LIDA PRINCIPAL */
	
	default:
			printf("\n\n Op��o inv�lida! Quer voltar? [s=sim] [n=n�o]\n\n ");
			fflush (stdin);
			scanf ("%c", &volta);
			if (volta == 's')
			goto inicio;
		}
	return 0;
}
