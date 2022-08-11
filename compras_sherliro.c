#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
int distancia, nprodutos;
char nomeprodutos[13][20];
float valor[13];
}MERCADO;

typedef struct{
char nome[20];
}list;

int main() {
int n;
int a, b, c, d, i, j, k, dif, letras1, letras2;
scanf("%d", &n);
int contador[n], contador2 = 0, menorposicao;
float total[n];
for(i = 0; i < n; i++){
contador[i] = 0;
total[i] = 0;
}
MERCADO mercado[n];
for(i = 0; i < n;i++){
scanf("%d %d", &mercado[i].distancia, &mercado[i].nprodutos);
// prod produtosmercado[n];
for(j = 0; j < mercado[i].nprodutos; j++){
scanf(" %[^ ] - %f", mercado[i].nomeprodutos[j], &mercado[i].valor[j]);
// printf("Nome: %s[%d][%d]\n", mercado[i].nomeprodutos[j], i, j);
// printf("Valor: %.2f\n", produtosmercado[i].valor[j]);
}
// printf("%s\n", mercado[1].nomeprodutos[6]);
}
int nlista;
scanf("%d", &nlista);
list lista[nlista];
for(a = 0; a < nlista; a++){
scanf(" %s", lista[a].nome);
}
for(b = 0; b < n; b++){
// printf("%s\n", produtosmercado[i].nomeprodutos[j]);
for(c = 0; c < nlista; c++){
letras1 = strlen(lista[c].nome);
// printf("NUMERO DE LETRAS----> %d\n", letras1);
for(d = 0; d < mercado[b].nprodutos; d++){
// letras2 = strlen(mercado[b].nomeprodutos[d]);
// printf("NUMERO DE LETRAS----> %d\n", letras2);
dif = strncmp(lista[c].nome, mercado[b].nomeprodutos[d], letras1);
// printf("DIFERENCA DE LETRAS -------> %d\n", dif);
if(dif == 0){
contador[b]++;
total[b] += mercado[b].valor[d];
}
}
}
// printf("**Numero de produtos------> %d**\n", contador[b]);
}
int maior = 0;
int menor;
for(i = 0; i < n; i++){
menor = contador[i];
for(j = 0; j < n; j++)
if(menor < contador[j]){
maior = j;
menor = contador[j];
}
}
for(i = 0; i < n; i++)
for(j = 0; j < n; j++)
if(contador[i] == contador[j])
contador2++;
if(contador2 == n){
printf("Mercado: %d\n", maior + 1);
for(c = 0; c < nlista; c++){
letras1 = strlen(lista[c].nome);
for(d = 0; d < mercado[maior].nprodutos; d++){
dif = strncmp(lista[c].nome, mercado[maior].nomeprodutos[d], letras1);
if(dif == 0){
printf("%s %.2f\n", mercado[maior].nomeprodutos[d], mercado[maior].valor[d]);
}
}
}
printf("%.2f\n", total[maior]);
}
else{
for(i = 0; i < n; i++){
menor = mercado[i].distancia;
for(j = 0; j < n; j++)
if(menor > mercado[j].distancia){
	menor = mercado[j].distancia;
	menorposicao = j;
}
}
// printf("%d\n", menorposicao);
printf("Mercado: %d\n", menorposicao + 1);
for(c = 0; c < nlista; c++){
letras1 = strlen(lista[c].nome);
for(d = 0; d < mercado[menorposicao].nprodutos; d++){
dif = strncmp(lista[c].nome, mercado[menorposicao].nomeprodutos[d], letras1);
if(dif == 0){
printf("%s %.2f\n", mercado[menorposicao].nomeprodutos[d], mercado[menorposicao].valor[d]);
}
}
}
printf("%.2f\n", total[menorposicao]);
}
// printf("%d\n", contador2);
// printf("%d\n", menorposicao);
	return 0;
}