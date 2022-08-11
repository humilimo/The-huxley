#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<ctype.h>
int main() {
// int p1[1001], p2[1001];
int n, m, grau, eof2;
char eof;
int voltas = 0;
// int p1[1000], p2[1000], resultado[10000];
while(eof != EOF){
// for(indice1 = 0; scanf("%d", &vetor[indice1]) != EOF 
// && scanf("%c", &enter1);indice1++)
// for(i = 0 ; i <= 1001 ; i++){
scanf("%d %d", &n, &m);
// getchar();
int p1[n+1], p2[m+1], resultado[m+n+1];
// printf("%d %d", n, m);
grau = n + m;
voltas++;
for(int j = 0 ; j < n + 1; j++){
  p1[j] = 0;
}
for(int k = 0 ; k < m + 1 ; k++){
  p2[k] = 0;
}
for(int j = 0 ; j < n + 1; j++){
scanf("%d", &p1[j]);
}
for(int k = 0 ; k < m + 1 ; k++){
scanf("%d", &p2[k]);
}
eof = getchar();
for(int i = 0;i < grau + 1; i++)
resultado[i] = 0;
for(int i = 0;i < n + 1; i++){
  for(int j = 0; j < m + 1;j++){
resultado[i + j] = resultado[i+j] + p1[i] * p2[j];
  }
}
printf("Caso #%d:", voltas);
for(int i =0;i < grau + 1; i++){
   printf(" %d", resultado[i]);
}
    printf("\n");
// }while(eof != EOF);
// }while(getchar() != EOF);
}
	return 0;
}
