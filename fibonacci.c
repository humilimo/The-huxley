#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int tamanho, flag = 0;
char enter;
scanf("%d", &tamanho);
int sequencia[tamanho], i = 0;
while(scanf("%d", &sequencia[i]) != EOF && scanf("%c", &enter)){
i++;
if(enter == '\n')
break;
}
// printf("  %d  ", sequencia[2]);
for(int k = 0; k < tamanho && flag == 0; k++){
if(sequencia[k] != 1 && k == 0){
printf("Sherliro achou o termo 1 que deveria estar na posicao 1");
flag++;
}
else if(sequencia[k] != 1 && k == 1){
printf("Sherliro achou o termo 1 que deveria estar na posicao 2");
flag++;
}
else if(k>= 2 && sequencia[k] != sequencia[k-1] + sequencia[k-2]){
// printf("   %d  ", k);
printf("Sherliro achou o termo %d que deveria estar na posicao %d", sequencia[k-1] + sequencia[k-2], k+1);
flag++;
}
}
// for(int j = 0; j < i; j++)
// printf(" %d ", sequencia[j]);
	return 0;
}