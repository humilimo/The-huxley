#include <stdio.h>
#include <string.h>
int main()
{
    char palavra1[11], palavra2[11], palavra3[11];
    int a, x, b, c=0, d, maior=0,z=0;
    scanf("%d", &b);
    scanf(" %s", palavra1);
    scanf(" %s", palavra2);
    scanf(" %s", palavra3);
    char nome[b][20], frase[b][50];
    int cont[b], tamanho[51];
for(x=0;x<b;x++){
    cont[x]=0;
    tamanho[x]=0;
    scanf(" %s - %s",nome[x],frase[x]);
    char *contador1 = strstr(frase[x], palavra1);
    char *contador2 = strstr(frase[x], palavra2);
    char *contador3 = strstr(frase[x], palavra3);
    if (contador1 != NULL){
        tamanho[x]+=strlen(palavra1);
            cont[x]++;
    }
    if (contador2 != NULL){
         tamanho[x]+=strlen(palavra2);
            cont[x]++;
    }
    if (contador3 != NULL){
        tamanho[x]+=strlen(palavra3);
            cont[x]++;
    }
}
for (a=0;a<b;a++) {
    if (a == 0)
        maior = cont[a];
    if (cont[a] > maior){
        maior = cont[a];
        z=a;
    }
}
for (a=0;a<b;a++){
if(cont[a] == maior){
        c++;
        d=a;
    }
}
    if(c!=1){
    if(tamanho[d]>tamanho[z])
        printf( "X reponsavel por essa atrocidade foi %s!\n", nome[d]);
    else if(tamanho[d]<tamanho[z])
        printf( "X reponsavel por essa atrocidade foi %s!\n", nome[z]);
    else
    printf("Nao pegamos x pilantra desse vez...");
    }
    else
    printf( "X reponsavel por essa atrocidade foi %s!\n", nome[z]);
    return 0;
}