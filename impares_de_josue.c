#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<ctype.h>
int main() {
int vetor[100000], numero, i = 0, contador = 0, k, impar = 0, soma = 0;
char enter;
int bingo = 0;
while(scanf("%d", &numero) != EOF && scanf("%c", &enter)){
vetor[i] = numero;
i++;
if(enter == '\n')
break;
}
int menor;
for(int j = 0; j < i; j++){
menor = vetor[j];
 for(int k = j + 1; k < i; k++){
  if(vetor[k] < menor){
  menor = vetor[k];
  vetor[k] = vetor[j];
  vetor[j] = menor;
  }
  }
}
for(int j = 0; j < i; j++)
 printf("%d ", vetor[j]);
 printf("\n");

for(int j = 0; j < i; j++){
menor = vetor[j];
contador = 0;
if(vetor[j] != vetor[j - 1] || j == 0){
 for(k = j + 1; k < i; k++){
  if(vetor[k] == menor)
  contador++;
  }
}
else
continue;
   if(contador == 0 || contador % 2 == 0){
   printf("%d", menor);
//    soma+=menor;
   impar++;
   break;
   }
}
if(impar == 0)
printf("0");
    return 0;
}