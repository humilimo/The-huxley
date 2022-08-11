#include<stdio.h>
#include<string.h>
int main(){
int j = 0, zero;
int quantidade, contador = 0, flag1 = 0, flag2 = 0, tamanhofrase, tamanhopalavra, verificar = 0;
char frase[50], barrazero = '\0';
scanf("%[^\n]", frase);
tamanhofrase = strlen(frase);
// printf("%d", tamanhofrase);
// for(int i = 0;frase[i] != '\0' ;i++){
// j++;
// }
scanf("%d", &quantidade);
char palavras[quantidade][50];
for(int i = 0; i < quantidade; i++){
    flag1 = 0;
    verificar = 0;
scanf(" %s", palavras[i]);
tamanhopalavra = strlen(palavras[i]);
// printf("%d", tamanhopalavra);
    for(int j = 0;j < tamanhopalavra ; j++){
     for(int k = 0; k < tamanhofrase; k++){
     if(frase[k] == palavras[i][j]){
        verificar++;
        // printf(" %d ", verificar);
        break;
    }
    }
    }
    if(verificar == tamanhopalavra){
    contador++;
     for(int b = 0;b < tamanhopalavra ; b++){
    for(int a = 0; a < tamanhofrase; a++){
     if(frase[a] == palavras[i][b]){
     frase[a] = '!';
     break;
     }
    }
    }
    }
    // for(int x = 0; novapalavra[x] != '\0'; x++)
    // printf(" %s ", novapalavra[i]);
}
// printf(" %s ", frase);
printf("E possivel formar %d palavras com esse conjunto\n", contador);
    return 0;
}