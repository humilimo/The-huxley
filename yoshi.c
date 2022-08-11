#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
unsigned int moedas, verde, vermelho, roxo, amarelo;
int a, b, c, d, e, f;
int velocidadeverde = 80, velocidadevermelho = 100, velocidaderoxo = 120,
velocidadeamarelo = 80;
scanf("%d", &moedas);
scanf("%d %d %d %d", &verde, &vermelho, &roxo, &amarelo);
int custo1 = velocidadeverde / verde, custo2 = velocidadevermelho / vermelho
, custo3 = velocidaderoxo / roxo, custo4 = velocidadeamarelo / amarelo;
int sucesso = custo4;
if(moedas < verde && moedas < vermelho && moedas < roxo && moedas < amarelo)
printf("Acho que vou a pe :(");
else{
if(custo1 > custo2){
a = custo2; // a = 800
custo2 = custo1; // custo2 = 900
custo1 = a; // custo1 = 800
}
if(custo1 > custo3){
b = custo3; // b = 700
custo3 = custo1; // 
custo1 = b; // 
}
if(custo1 > custo4){
c = custo4;
custo4 = custo1;
custo1 = c;
}
if(custo2 > custo3){
d = custo3;
custo3 = custo2;
custo2 = d;
}
if(custo2 > custo4){
e = custo4;
custo4 = custo2;
custo2 = e;
}
if(custo3 > custo4){
f = custo4;
custo4 = custo3;
custo3 = f;
}
if (custo4 == velocidadeverde / verde)
printf("Verde");
else if (custo4 == velocidadevermelho / vermelho)
printf("Vermelho");
else if (custo4 == velocidaderoxo / roxo)
printf("Roxo");
else if (custo4 == velocidadeamarelo / amarelo)
printf("Amarelo");}
//printf("\n%d %d %d %d", custo1, custo2, custo3, custo4);
/*
Verde - 80 K/h
Vermelho - 100 K/h
Roxo - 120 K/h
Amarelo - 80 K/h
*/

	return 0;
}