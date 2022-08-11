#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char letra;
long long int soma = 0;
int flag = 0, primos = 0, somachutes = 0, chute, zero = 0;
while((zero < 100) && (letra != '\n' && letra != ' ')){
zero++;
scanf("%c", &letra);
if(letra != '\n' && letra != ' ')
soma += letra;
}
if(letra == '\n'){
if(soma % 17 != 0){
for(int a = 1; a < soma; a++){
flag = 0;
 for(int b = 1; b <= a; b++){
  if(a % b == 0)
   flag ++;
 }
 if(flag == 2){
  if(soma % a == 0)
  primos++;
 }
 }
 if(primos >= 3)
 soma *= 3;

 for(int tentativas = 1; tentativas <= 6;tentativas++){
 scanf("%d", &chute);
 somachutes += chute;
 if(tentativas == 6 && somachutes != soma){
 printf("Bonxai foi de base.\n");
 break;
 }
 else if(somachutes > soma){
 printf("Agora voce passou dos limites!\n");
 break;
 }
 else if(somachutes == soma){
 printf("Parabueins! Voce ajudou Bonxai a escapar.\n");
 break;
 }
}
}
else
printf("Agora estou Putin, Bonxai!\n");
}
else
printf("Agora estou Putin, Bonxai!\n");
	return 0;
}