#include<stdio.h>
#include<string.h>
int main() {
int quantidade1, quantidade2, sorteado1, sorteado2, menor1, menor2, dif;
scanf("%d", &quantidade1);
char nomes1[quantidade1][11], palavramenor1[11], palavramenor2[11];
for(int i = 0; i < quantidade1; i++){
scanf("%s", nomes1[i]);
// printf("%s", nomes1[i]);
}
for(int i = 0; i < quantidade1; i++){
menor1 = nomes1[i][0];
    for(int j = i+1; j < quantidade1; j++){
     if(nomes1[j][0] < menor1){
      menor1 = nomes1[j][0];
      strcpy(palavramenor1, nomes1[j]);
      strcpy(nomes1[j], nomes1[i]);
      strcpy(nomes1[i], palavramenor1);
     }  
    }
}
// printf("\n\n");
// for(int i = 0; i < quantidade1; i++){
// printf("%s", nomes1[i]);
// printf("\n");
// }

scanf("%d", &quantidade2);
char nomes2[quantidade2][11];
for(int j = 0; j < quantidade2; j++){
scanf("%s", nomes2[j]);
// printf("%s", nomes2[j]);
}
for(int i = 0; i < quantidade2; i++){
menor2 = nomes2[i][0];
    for(int j = i+1; j < quantidade2; j++){
     if(nomes2[j][0] < menor2){
      menor2 = nomes2[j][0];
      strcpy(palavramenor2, nomes2[j]);
      strcpy(nomes2[j], nomes2[i]);
      strcpy(nomes2[i], palavramenor2);
     }  
    }
}
// printf("\n\n");
// for(int i = 0; i < quantidade2; i++){
// printf("%s", nomes2[i]);
// printf("\n");
// }
scanf("%d %d", &sorteado1, &sorteado2);
dif = strncmp(nomes1[sorteado1 - 1], nomes2[sorteado2 - 1], 4);
if(dif == 0)
printf("Quem ganhou tudo hoje foi %s", nomes1[sorteado1 - 1]);
else{
printf("Quem ganhou o carro foi: %s\n", nomes1[sorteado1 - 1]);
printf("Quem ganhou a moto foi: %s", nomes2[sorteado2 - 1]);

}
    return 0;
}