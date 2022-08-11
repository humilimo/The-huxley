#include<stdio.h>
#include<stdbool.h>
int main() {
 char letra, A = 'A', letrametade;
 int a, b, c, d, e, numeroletrametade, numero, numerometade;
 scanf("%c", &letra);
 numero = letra - 64;
 for(a = 1; a <= numero; a++){
 int pontos = numero - a;
  for(b = 0;b < pontos; b++)
   printf(".");
  for(c = 0; c < a; c++){
  printf("%c", A + c);
  letrametade = A + c;
  numerometade = A + c;
  }
  for(d = 1; d < a; d++){
  letrametade--;
  printf("%c", letrametade);
  }
   for(e = 0;e < pontos ;e++)
   printf(".");
   printf("\n");
 }
return 0 ;
}