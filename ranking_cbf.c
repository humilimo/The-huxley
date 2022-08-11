#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
char nome[16];
float valor;
int jogadores;
int titulos;
char neymar[4];
char flamengo[4];
float pontuacao;
}futebol;
int main() {
int i, j;
int quantidade;
int dif1, dif2;
float menor;
char menorpalavra[16];
scanf("%d", &quantidade);
futebol times[quantidade];
for(i = 0; i < quantidade; i++){
scanf(" %[^\n]", times[i].nome);
scanf("%f %d %d", &times[i].valor, &times[i].jogadores ,&times[i].titulos);
scanf(" %s", times[i].neymar);
scanf(" %s", times[i].flamengo);
// printf("  %s  %s  ", times[i].neymar, times[i].flamengo);
times[i].pontuacao = (times[i].valor) + (100*times[i].jogadores) + (2000*times[i].titulos);
dif1 = strncmp(times[i].neymar, "sim", 3);
dif2 = strncmp(times[i].flamengo, "sim", 3);
// printf(" %d %d ", dif1, dif2);
if(dif1 == 0)
times[i].pontuacao += 10000;
if(dif2 == 0)
times[i].pontuacao += 20000;
// printf("%s %.2f\n", times[i].nome, times[i].pontuacao);
}
for(i = 0; i < quantidade; i++){
menor = times[i].pontuacao;
 for(j = i + 1; j < quantidade; j++)
  if(menor < times[j].pontuacao){
  menor = times[j].pontuacao;
  strcpy(menorpalavra, times[j].nome);
  times[j].pontuacao = times[i].pontuacao;
  times[i].pontuacao = menor;
  strcpy(times[j].nome, times[i].nome);
  strcpy(times[i].nome, menorpalavra);
  }
}
for(i = 0; i < quantidade; i++){
printf("%s %.2f\n", times[i].nome, times[i].pontuacao);
}
	return 0;
}