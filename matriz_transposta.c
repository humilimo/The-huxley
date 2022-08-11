#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int linhas, colunas;
scanf("%d %d", &linhas, &colunas);
int matriz[linhas][colunas];
for(int i = 0; i < linhas; i++)
 for(int j = 0; j < colunas; j++)
   scanf("%d", &matriz[i][j]);

for(int i = 0; i < colunas; i++){
 for(int j = 0; j < linhas; j++)
   printf("%d ", matriz[j][i]);
   printf("\n");
}
	return 0;
}