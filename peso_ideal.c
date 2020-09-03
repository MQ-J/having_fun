/*BIBLIOTECAS*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*VARIÁVEIS*/
char sexo;
float altura, peso;

/*COMEÇO*/
int main()
{
inicio:
system("cls");
printf("Calcule seu peso ideal");
printf("\n\nDigite o seu sexo [m = masculino]  [f = feminino]\n");
scanf("%c", &sexo);

/*calcula peso ideal masculino*/

switch (sexo)
{
case 'm': printf("\nQual a sua altura? [Use ponto no lugar da virgula]\n");
scanf("%f", &altura);
peso = (72.7 * altura) - 58;
printf("\nSeu peso ideal: %.2f\n", peso);
break;

/*calcula peso ideal feminino*/

case 'f': printf("\nQual a sua altura? [Use ponto no lugar da virgula]\n");
scanf("%f", &altura);
peso = (62.1 * altura) - 44.7;
printf("\nSeu peso ideal: %.2f\n", peso);
break;

/*caso o usuário digite outra coisa*/

default : printf("\nDado inválido\n");
getch();
goto inicio;
}

/*FIM*/

system("pause");
return 0;
}

