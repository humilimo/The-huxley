#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int quantidade, numero, dif1, dif2, dif3, dif4;
char mov[4] = "mov", sub[4] = "sub", add[4] = "add", and[4] = "and";
scanf("%d", &quantidade);
// getchar();
char comando[quantidade][9], operacao[quantidade][4],
letra[5], valor[5];
for(int i = 0; i < quantidade; i++){
    scanf(" %[^\n]", comando[i]);
    for(int j = 0; j < 3; j++)
    operacao[i][j] = comando[i][j];
    for(int j = 4; j < 5; j++)
    letra[i] = comando[i][j];
    for(int j = 7; j < 8; j++)
    valor[i] = comando[i][j];
    dif1 = strncmp(operacao[i], mov, 3);
    dif2 = strncmp(operacao[i], add, 3);
    dif3 = strncmp(operacao[i], sub, 3);
    dif4 = strncmp(operacao[i], and, 3);
    if(dif1 == 0)
    printf("%c = %c\n", letra[i], valor[i]);
    else if(dif2 == 0)
    printf("%c += %c\n", letra[i], valor[i]);
    else if(dif3 == 0)
    printf("%c -= %c\n", letra[i], valor[i]);
    else if(dif4 == 0)
    printf("%c = %c & %c\n", letra[i], letra[i], valor[i]);
    // else if(operacao[i] == "add")
    // else if(operacao[i] == "sub")
    // else if(operacao[i] == "and")
    // printf("  %s  ", operacao[i]);
    // printf("  %c  ", letra[i]);
    // printf("  %c  ", valor[i]);

    // printf(" %s ", comando[i]);
    // scanf(" %[^ ]", letra[i]);
    // scanf("%d", &numero);
    // printf("%s", letra[i], numero);
    // dif1 = strncmp(comando[i], mov, 3);
    // dif2 = strncmp(comando[i], add, 3);
    // dif3 = strncmp(comando[i], sub, 3);
    // dif4 = strncmp(comando[i], and, 3);
    // if(dif1 == 0)
    // printf("%c = %d\n", letra[i][0], numero);
    // else if(dif2 == 0)
    // printf("%c += %c", letra[i][0], numero);
    // else if(dif3 == 0)
    // printf("%c -= %c", letra[i][0], numero);
    // else if(dif4 == 0)
    // printf("%c = %c & %c", letra[i][0], letra[i][0], numero);
}
	return 0;
}