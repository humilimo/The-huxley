#include<stdio.h>
#include<string.h>
typedef struct{
int numeropassagem;
int dia;
int mes;
int ano;
char saiu[50];
char chegou[50];
int horas;
int minutos;
int poltrona;
int idade;
char nome[50];
}pass;
int main (){
int i;
float media, soma = 0;
pass passageiro[44];
for(i = 0; i < 44; i++){
scanf("%d", & passageiro[i].numeropassagem);
if(passageiro[i].numeropassagem == -1)
break;
scanf("%d/%d/%d", &passageiro[i].dia, &passageiro[i].mes, &passageiro[i].ano);
scanf(" %[^\n]", passageiro[i].saiu);
scanf(" %[^\n]", passageiro[i].chegou);
scanf("%d:%d", &passageiro[i].horas, &passageiro[i].minutos);
scanf("%d", &passageiro[i].poltrona);
scanf("%d", &passageiro[i].idade);
scanf(" %[^\n]", passageiro[i].nome);
soma += passageiro[i].idade;
// printf("  %d  ", passageiro[i].idade);
}
media = soma / i;
// printf(" %d ", soma);
// printf(" %d ", i);
// printf(" %.2f ", media);
for(int j = 0; passageiro[j].numeropassagem != -1; j++){
if(passageiro[j].idade > media && passageiro[j].poltrona % 2 == 0)
printf("%s\n", passageiro[j].nome);
}
// printf("  %d  ", passageiro[1].idade);
// printf("  %s  ", passageiro[1].nome);
    return 0;
}