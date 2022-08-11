#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct{
int id;
float temperatura;
char fumaca;
}incendio;
int main() {
int ntestes, nsprinklers;
int i,j, contador = 0;
int a, b;
float soma = 0;
float media;
scanf("%d", &ntestes);
for(i = 0; i < ntestes; i++){
scanf("%d", &nsprinklers);
incendio sprinklers[ntestes][nsprinklers];
for(j = 0; j < nsprinklers; j++){
scanf("%d %f %c", &sprinklers[i][j].id, &sprinklers[i][j].temperatura, &sprinklers[i][j].fumaca);
soma += sprinklers[i][j].temperatura;
}
media = soma / nsprinklers;
contador++;
// printf("  %d %d  ", i, j);
printf("TESTE %d\n", contador);
// for(a = 0; a <= i; a++)
for(b = 0; b < nsprinklers; b++)
if(sprinklers[i][b].fumaca == 'S' || sprinklers[i][b].temperatura > media*1.15 || sprinklers[i][b].temperatura > 40)
printf("%d\n", sprinklers[i][b].id);
// printf("%.2f", media);
}
	return 0;
}