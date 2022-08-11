#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int numero, quadrado1, quadrado2, i = 0, j = 0;
do{
scanf("%d", &numero);
if(numero==0)
  break;
i = (numero / 2) + 1;
quadrado1 = pow(i,2);
j = numero - i;
quadrado2 = pow(j,2);
printf("%d - %d = %d\n", quadrado1, quadrado2, numero);
}while(numero !=0);


  return 0;
}