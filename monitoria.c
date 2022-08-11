#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
    char nomealuno[51];
    int idmonitor;
    int dados;
    int pontuacao;
}ALUNO;
typedef struct{
int q[9];
// int q1;
// int q2;
// int q3;
}LISTAS;
typedef struct{
int id;
char nomemonitor[51];
}MONITORES;
int main() {
int nmonitores, nalunos, nlista;
int a, b, c, i, j, contador = 0;
float soma = 0, media;
scanf("%d", &nmonitores);
MONITORES monitor[nmonitores];
for(i = 0; i < nmonitores; i++){
scanf(" %[^\n]", monitor[i].nomemonitor);
scanf("%d", &monitor[i].id);
// printf("Nome monitor ---> %s\n", monitor[i].nomemonitor);
// printf("ID ----> %d\n", monitor[i].id);
}
scanf("%d", &nalunos);
// printf("numero de alunos----> %d\n", nalunos);
ALUNO alunos[nalunos];
LISTAS listas[nalunos];
for(j = 0; j < nalunos; j++){
scanf(" %[^\n]", alunos[j].nomealuno);
scanf("%d", &alunos[j].idmonitor);
}
for(a = 0; a < nalunos; a++){
alunos[a].pontuacao = 0;
for(b = 0; b < 9; b++){
scanf("%d", &listas[a].q[b]);
if(listas[a].q[b] == 1)
alunos[a].pontuacao++;
}
}
scanf("%d", &nlista);
for(a = 0; a < nalunos; a++){
for(b = 0; b < 9; b++)
if(listas[a].q[b] == 1 && b == (3 * nlista) - 1)
alunos[a].pontuacao++;
}
for(b = 0; b < nalunos; b++){
printf("%s\n", alunos[b].nomealuno);
// for(i = 0; i < nalunos; i++){
for(j = 0; j < nmonitores; j++){
if(alunos[b].idmonitor == monitor[j].id)
printf("%s\n", monitor[j].nomemonitor);
}
// }
printf("%d\n", alunos[b].pontuacao);
}
	return 0;
}