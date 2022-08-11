#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int dia, mes, ano, bissexto;
int sucesso1 = 0;//, sucesso2 = 0, sucesso3 = 0, sucesso4 = 0;
scanf("%d %d %d", &dia, &mes, &ano);
if (mes > 0 && mes <= 12 && dia > 0 && dia <= 31 
&& ano > 1900 && ano < 2100){
if (mes == 2 && dia <= 29 && ano % 4 == 0)
sucesso1++;
else if (mes == 2 && dia <= 28)
sucesso1++;
if((mes == 4 || mes == 6 || mes == 9 || mes == 11) 
&& (dia <= 30))
sucesso1++;
if((mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) 
&& (dia <= 31))
sucesso1++;
if (sucesso1 == 1)
printf("valida");
else 
printf("invalida");
}
else
printf("invalida");

/*
janeiro = 31
fevereiro = 28/29
marco = 31
abril = 30
maio = 31
junho = 30
julho = 31
agosto = 31
setembro = 30
outubro = 31
novembro = 30
dezembro 31
*/

	return 0;
}