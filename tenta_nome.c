#include <stdio.h>
#include <time.h>

//troque as letras deste vetor pelas letras do seu nome (aceita espaço):
char vet[] = {'a', 'q', 'u', 'i', ' ', 'o', 'l', 'h', 'a'};

int main()
{
  int i, a;
  srand(time(NULL));
  /*mude o número "8" abaixo pelo número de caracteres que você colocou no vetor, menos um*/
  for (i=0; i <= 8; i++)
  {
    /*mude o número "9" abaixo pelo número de caracteres que você colocou no vetor*/
    a = (rand() % 9);
    printf("%c", vet[a]);
  }
  return (0);
}
