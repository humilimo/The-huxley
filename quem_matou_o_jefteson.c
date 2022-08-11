#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
    char palavra1[11];
    char palavra2[11];
    char palavra3[11];
    int i, x, m, t = 0, l;
    int maior = 0, teste = 0 ;
    scanf("%d",&m);
    scanf(" %s",palavra1);
    scanf(" %s",palavra2);
    scanf(" %s",palavra3);
    char nome[m][20];
    char frase[m][50];
    int cont[m];
    int tam[51];
for(x=0;x<m;x++){
    cont[x]=0;
    tam[x]=0;
    scanf(" %s - %s",nome[x],frase[x]);  
    char *tamanho1 = strstr(frase[x], palavra1);
    char *tamanho2 = strstr(frase[x], palavra2);
    char *tamanho3 = strstr(frase[x], palavra3);
    if (tamanho1 != NULL){
        tam[x]+=strlen(palavra1);          
            cont[x]++;
    }
    if (tamanho2 != NULL){
         tam[x]+=strlen(palavra2);       
            cont[x]++;
    }
    if (tamanho3 != NULL){
        tam[x]+=strlen(palavra3);
            cont[x]++;
    }
}
for (i=0;i<m;i++){
    if (i == 0)
        maior = cont[i];
    if (cont[i] > maior) {
        maior = cont[i];
        teste=i;
    }
}
for (i=0;i<m;i++){
if(cont[i] == maior){
        t++;
        l=i;
    }
}
    if(t!=1){
    if(tam[l]>tam[teste])
        printf( "X reponsavel por essa atrocidade foi %s!\n", nome[l]);
    else if(tam[l]<tam[teste])
        printf( "X reponsavel por essa atrocidade foi %s!\n", nome[teste]);
    else
    printf("Nao pegamos x pilantra desse vez...");
    }
    else
    printf( "X reponsavel por essa atrocidade foi %s!\n", nome[teste]);
    return 0;
}