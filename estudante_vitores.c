#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int i1, i2, resultado;
char x[100];
scanf("%d %d %d", &i1, &i2, &resultado);
int x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0;
if(resultado == i1 * i1){
printf("Quadrado Vitoris\n");
x1 = 1;
}
else if(resultado == i1 % i2){
printf("Resto Vitoris\n");
x2 = 1;
}
else if(resultado == i1 * i2){
printf("Multi Vitoris\n");
x3 = 1;
}
else if(resultado == i1 / i2){
printf("Div Vitoris\n");
x4 = 1;
}
else if(resultado == i1 + i2){
printf("Soma Vitoris\n");
x5 = 1;
}
else if(resultado == i1 - i2){
printf("Sub Vitoris\n");
x6 = 1;
}
else
printf("Impossivel vitores");

if(resultado == i1 * i1 && x1 == 0)
printf("tambem Quadrado\n");
if(resultado == i1 % i2 && x2 == 0)
printf("tambem Resto\n");
if(resultado == i1 * i2 && x3 == 0)
printf("tambem Multi\n");
if(resultado == i1 / i2 && x4 == 0)
printf("tambem Div\n");
if(resultado == i1 + i2 && x5 == 0)
printf("tambem Soma\n");
if(resultado == i1 - i2 && x6 == 0)
printf("tambem Sub\n");
	return 0;
}