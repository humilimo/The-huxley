#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int distancia, tamanho, xp = 0, divisores = 0, a, b, voltas = 0;
int valemoedas = 0, moedas = 0;
scanf("%d %d", &distancia, &tamanho);
for(a = 0; a < distancia; a++){
    b = a;
    if(b % tamanho == 0 && b != 0){
    voltas++;
    }
    if(b >= tamanho)
    b = a - ((tamanho) * voltas);
     divisores = 0;
    if(b == 7)
    valemoedas++;
     for(int c = 1; c <= b; c++){
     if(b % c == 0)
     divisores++;
     }
     if(divisores == 2){
     printf("%d ", b);
     xp += b;
     }
 }
 if(valemoedas != 0){
moedas = 1;
 for(valemoedas; valemoedas >=1; valemoedas--)
moedas *= valemoedas;
}
 printf("\nExperiencia = %d Moedas = %d\n", xp, moedas);
if(moedas == 0){
printf("Ja que nao achei moedas, vou na Torre\n");
for(int d = 1; d <= xp; d++){
 if(d % 7 == 0){
    printf("%d ", d);
 moedas += 30;
 }
}
if(moedas > 0)
printf("\nConsegui %d moedas na Torre\n", moedas);
else
printf("Desisto.\n");

}
	return 0;
}