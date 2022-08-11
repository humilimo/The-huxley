#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int linhas, colunas;
scanf("%d %d", &linhas, &colunas);
char matriz[linhas][colunas];
for(int i = 0; i < linhas; i++){
 for(int j = 0; j < colunas;j++){
  scanf(" %c", &matriz[i][j]);
 }
}
for(int i = 0; i<linhas;i++){
 for(int j = 0; j < colunas;j++){
 if(matriz[i][j] == 'o' && matriz[i+1][j] != '#' && i != linhas-1){
 matriz[i+1][j] = 'o';
 }
 if(matriz[i][j] == 'o' && matriz[i+1][j] == '#' && j != colunas -1){
 matriz[i][j+1] = 'o';
 }
 if(matriz[i][j] == 'o' && matriz[i+2][j] == '#' && i < linhas - 2 && j != 0){
 matriz[i+1][j-1] = 'o';
 }
 }
 for(int j = colunas - 1; j >= 0;j--){
 if(matriz[i][j] == 'o' && matriz[i+1][j] != '#' && i != linhas - 1){
 matriz[i+1][j] = 'o';
 }
 if(matriz[i][j] == 'o' && matriz[i+1][j] == '#' && j != 0){
 matriz[i][j-1] = 'o';
 }
 if(matriz[i][j] == 'o' && matriz[i+2][j] == '#' && i < linhas - 2 && j != colunas - 1){
 matriz[i+1][j+1] = 'o';
 }
 }
 }
// for(int i = 0; i<linhas;i++){
//  for(int j = colunas - 1; j >= 0;j--){
//  if(matriz[i][j] == 'o' && matriz[i+1][j] != '#'){
//  matriz[i+1][j] = 'o';
//  }
//  if(matriz[i][j] == 'o' && matriz[i+1][j] == '#'){
//  matriz[i][j-1] = 'o';
//  }
//  if(matriz[i][j] == 'o' && matriz[i+2][j] == '#'){
//  matriz[i+1][j-1] = 'o';
//  }
//  }
//  }
for(int i = 0; i < linhas; i++){
 for(int j = 0; j < colunas;j++){
  printf("%c", matriz[i][j]);
 }
 printf("\n");
}
// for(int i = 0; i < linhas ;i++){
//  for(int j = colunas - 1; j >= 0;j--){
//  if(matriz[i][j] == 'o' && matriz[i+1][j] != '#')
//  matriz[i+1][j] = 'o';
//  if(matriz[i][j] == 'o' && matriz[i+1][j] == '#'){
//  matriz[i][j-1] = 'o';
//  }
//  }
//  }
// printf("\n\n\n");

	return 0;
}