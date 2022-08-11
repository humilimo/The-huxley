#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int vitores[8], lk[6], lances[3];
int pecasvitores[4], pecaslk[3];
for(int i = 0; i< 8;i++)
scanf("%d", &vitores[i]);

for(int i = 0; i < 6;i++)
scanf("%d", &lk[i]);

for(int i = 0; i < 3;i++)
scanf("%d", &lances[i]);
// for(int i = 0; i < 3; i++){
// lances[i];
// if(lances[i] == 1)
// else if(lances[i] == 2)
// else if(lances[i] == 3)
// else if(lances[i] == 4)
// }

for(int i = 0; i < 3;i++){
int a = (lances[i] * 2) - 2;
int b = (lances[i] * 2) - 1;
// for(int j = (lances[i] * 2) - 2; j <= (lances[i] * 2) - 1 ;j++){
 for(int k = 0; k < 6; k++){
 if((lk[k] == vitores[a] || lk[k] == vitores[b]) && k % 2 == 0 && lk[k] < 1000 && lk[k+1] < 1000){
 printf("%d-%d %d\n", lk[k],lk[k+1], (k+2) / 2);
 lk[k] = 1000;
 break;
 }
 else if((lk[k] == vitores[a] || lk[k] == vitores[b]) && k % 2 != 0 && lk[k] < 1000 && lk[k-1] < 1000){
 printf("%d-%d %d\n", lk[k-1], lk[k], (k+1)/2);
 lk[k] = 1000;
 break;
 }
//  else{
//  if(k % 2 == 0){
//  }
 }
 }
// }
	return 0;
}
