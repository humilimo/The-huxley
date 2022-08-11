#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
char nometime[20];
int dinheiro;
char preferencia;
int comprar;
}TIMES;

typedef struct{
char nomejogador[20];
char nacao[20];
int ataque;
int defesa;
int valor;
int foco;
}JOGADORES;
int main() {
    int n;
    int njogadores;
    int a, b, c, d, i ,j, k, dif, vasco = 0;
    scanf("%d", &n);
    TIMES times[n];
    for(i = 0; i < n; i++)
    times[i].comprar = 0;
    for(i = 0; i < n; i++){
scanf(" %s", times[i].nometime);
dif = strncmp(times[i].nometime, "Vasco", 5);
scanf("%d %c", &times[i].dinheiro, &times[i].preferencia);
if(dif == 0){
printf("Vasco nao tem salvacao, tomou 3 pro vitoria em casa\n");
vasco++;
}
    }
    scanf("%d", &njogadores);
    JOGADORES jogadores[njogadores];
     for(i = 0; i < njogadores; i++){
scanf(" %[^ ] %s", jogadores[i].nomejogador, jogadores[i].nacao);
scanf("%d %d", &jogadores[i].ataque, &jogadores[i].defesa);
scanf("%d", &jogadores[i].valor);
jogadores[i].foco = jogadores[i].ataque - jogadores[i].defesa;
    }
    for(i = 0; i < n; i++){
    for(j = 0; j < njogadores; j++){
    if(times[i].dinheiro >= jogadores[j].valor && jogadores[j].foco >= 0 && times[i].preferencia == 'A'){
    printf("%s eh do %s\n", jogadores[j].nomejogador, times[i].nometime);
    times[i].comprar++;
    }
    else if(times[i].dinheiro >= jogadores[j].valor && jogadores[j].foco < 0 && times[i].preferencia == 'D'){
    printf("%s eh do %s\n", jogadores[j].nomejogador, times[i].nometime);
    times[i].comprar++;
    }
    }
    }
for(i = 0; i < n; i++){
for(j = 0; j < n; j++){
    if(times[i].comprar > 0)
printf("Situacao %s\n", times[i].nometime);
printf("Dinheiro restante = %d\n", times[i].nometime);
printf("Num de jogadores = %s\n", times[i].nometime);
}
}
	return 0;
}