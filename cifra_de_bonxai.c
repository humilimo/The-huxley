#include<stdio.h>
int main(){
int numerodeletras, voltas = 0;
int novaletra;
scanf("%d", &numerodeletras);
char palavra[numerodeletras];
for(int i = 0; i < numerodeletras; i++)
scanf(" %c", &palavra[i]);
int deslocamento;
scanf("%d", &deslocamento);
for(int i = 1; i <= deslocamento; i++){
if(i % 26 == 0)
voltas++;
}
if(deslocamento > 26){
deslocamento = deslocamento - (26 * voltas);
}
for(int i = 0; i < numerodeletras; i++){
novaletra = palavra[i] + deslocamento;
if(novaletra > 122)
novaletra -= 26;
printf("%c", novaletra);
}
    return 0;
}