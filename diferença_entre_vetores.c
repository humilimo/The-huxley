#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
for(;;){
int n, x, resultado, contador;
contador = 0;
resultado = 0;
scanf("%d", &n);
if(n == -1)
return 0;
scanf("%d", &x);
int vetor[n], novovetor[n];
for(int i = 0; i < n;i++)
scanf("%d", &vetor[i]);
for(int i = 0; i < n; i++)
novovetor[i] = vetor[i];
int menor = novovetor[0];
for(int i = 0;i < n;i++){
menor = novovetor[i];
  for(int j = i + 1; j < n; j++){
   if(novovetor[j] < menor){
    menor = novovetor[j];
    novovetor[j] = novovetor[i];
    novovetor[i] = menor;
   } 
  }
}
for(int i = 0; i < n; i++){
resultado = novovetor[i] - vetor[i];
if(resultado < 0)
resultado *= -1;
if(resultado == x){
contador++;
}
}

printf("%d\n", contador);
if(contador !=0){
for(int i = 0; i < n; i++){
resultado = novovetor[i] - vetor[i];
if(resultado < 0)
resultado *= -1;
if(resultado == x){
printf("%d %d %d\n", vetor[i], novovetor[i], i + 1);
}
}

// for(int i = 0; i < n; i++){
// resultado = novovetor[i] - vetor[i];
// if(resultado < 0)
// resultado *= -1;
// if(resultado == x){
// printf("%d", i + 1);
// }
// }
}
}
// printf("%d %d %d", vetor[0], vetor[1], vetor[2]);
	return 0;
}