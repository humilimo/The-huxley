#include<stdio.h>
#include<string.h>
typedef struct{
char nome[21];
char tipo[4];
int ataque;
int defesa;
}POKEMON;

int main(){
int quantidade, contador = 0;
int dif1, dif2;
int dif3,dif4;
char comando[9], batalha[45];
char vs[3];
char pokemon1[21];
char pokemon2[21];
char comando2[4];
int i, j, zero = 0;
int a, b;
scanf("%d", &quantidade);
POKEMON pokemon[quantidade];
for(i = 0; i < quantidade; i++){
scanf(" %s", pokemon[i].nome);
scanf(" %s", pokemon[i].tipo);
scanf("%d", &pokemon[i].ataque);
scanf("%d", &pokemon[i].defesa);
}
while(scanf(" %4[^\n]", comando) && comando[0] != 48){
contador = 0;
dif1 = strncmp(comando, "luta", 4);
dif2 = strncmp(comando, "list", 4);
// printf("  %s  \n", comando);
for(int i = 5; i < 9; i++){
comando2[zero] = comando[i];
zero++;
}
// printf("   %s   ", comando[5]);
if(dif1 == 0){
scanf(" %[^ ]", pokemon1);
scanf(" %[^ ]", vs);
scanf(" %[^\n]", pokemon2);
for(i = 0; i < quantidade; i++){
dif3 = strcmp(pokemon1, pokemon[i].nome);
dif4 = strcmp(pokemon2, pokemon[i].nome);
if(dif3 == 0)
a = i;
if(dif4 == 0)
b = i;
// printf("  %d  ", dif3);
// printf("  %d  ", dif4);
}
if(pokemon[a].ataque - pokemon[b].defesa == pokemon[b].ataque - pokemon[a].defesa)
printf("parece que temos um empate\n");
else if(pokemon[a].ataque - pokemon[b].defesa > pokemon[b].ataque - pokemon[a].defesa)
printf("%s deitou %s na porrada\n", pokemon1, pokemon2);
else if(pokemon[a].ataque - pokemon[b].defesa < pokemon[b].ataque - pokemon[a].defesa)
printf("%s deitou %s na porrada\n", pokemon2, pokemon1);
// printf("  %s  ", pokemon1);
// printf("  %s  ", vs);
// printf("  %s  ", pokemon2);
}
else if(dif2 == 0){
scanf(" %s", comando2);
for(i = 0; i < quantidade; i++){
dif3 = strncmp(comando2, pokemon[i].tipo, 3);
if(dif3 == 0){
// a = i;
contador++;
printf("Pokemon %d: %s\n Ataque: %d\n Defesa: %d\n", contador, pokemon[i].nome, pokemon[i].ataque, pokemon[i].defesa);
}
}
// for(int i = 0; i < quantidade; i++)
// if
// scanf(" %s", comando2);
}
}
    return 0;
}
