/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>

 /*VARIAVEIS*/
char lc_all, gostei;
int cor_letra;

/*COMEÇO*/
int main()
{
	inicio:
	system("cls");
	system("color 07");
	printf("Escolha a cor das letras:\n");
	printf(" 1 = Azul\n 2 = Verde\n 3 = Verde-agua\n 4 = Vermelho\n 5 = Roxo\n ");            /*TABELA DE CORES*/
	fflush(stdin);
	scanf("%d", &cor_letra);
	if(cor_letra < 6)
	{
		if (cor_letra == 1)
		{
			system("color 01");       /*LETRA AZUL*/
		}            
		if (cor_letra == 2)
		{
			system("color 02");       /*LETRA VERDE*/
		}
		if (cor_letra == 3)
		{
			system("color 03");       /*LETRA VERDE-ÀGUA*/
		}
		if (cor_letra == 4)
		{
			system("color 04");       /*LETRA VERMELHA*/
		}
		if (cor_letra == 5)
		{
			system("color 05");       /*LETRA ROXA*/
		}
	}
	else
	{
		printf("Cor inexistente");     /*COR INVÁLIDA*/
		fflush(stdin);
		getch();
		goto inicio;
	}
	
	/*MENU FINAL*/
	
	printf("\n Gostou?");
	printf("\n [n = nao]\n [s = sim]\n ");
	fflush(stdin);
	scanf("%c", &gostei);
	if (gostei == 'n')
	{
		goto inicio;
	}
	return 0;
}
