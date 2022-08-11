#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int tamanho, somapar = 0, somaimpar = 0, voltas = 0, voltas2 = 0, i = 0;
    scanf("%d", &tamanho);
    char matriz[tamanho][tamanho][31];
    // char termos[31][tamanho];
    for(int i = 0; i < tamanho;i++){
    for(int j = 0; j < tamanho;j++){
         scanf(" %s", matriz[i][j]);
        //  printf("  %s  ", matriz[i][j]);
    }
    }
    for(int i = 0; i < tamanho; i++){
    for(int j = 0; j < tamanho; j++){
    if((i + j) % 2 == 0){
      for(int k = 0; matriz[i][j][k] != '\0'; k++)
      if(k % 2 == 0)
      somapar += matriz[i][j][k];
    }
    else if((i + j) % 2 != 0){
         for(int k = 0; matriz[i][j][k] != '\0'; k++)
      if(k % 2 != 0)
      somaimpar += matriz[i][j][k];
    }
    }
   }
     if(somaimpar > somapar)
     printf("Os impares venceram com %d pontos!", somaimpar);
     else if(somapar > somaimpar)
     printf("Os pares venceram com %d pontos!", somapar);
     else if(somapar == somaimpar)
     printf("Tivemos um empate em %d pontos!", somaimpar);
// printf("  %d %d  ", somapar, somaimpar);
// printf("\n\n");
//      for(int i = 0; i < tamanho; i++){
//      for(int j = 0; j < tamanho; j++){
//      printf("%s ", matriz[i][j]);
//      }
//      printf("\n");
//      }
     
	return 0;
}