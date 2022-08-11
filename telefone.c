#include<stdio.h>
int main(){
int numero1, numero4, resto, flag = 0;
scanf("%d__%d-%d", &numero1, &numero4, &resto);
for(int a = 0; a < 100;a++){
    flag = 0;
 if((a / numero1 == 2  || a / numero1 == 3 || a / numero1 == 5 
|| a / numero1 == 7 
|| a / numero1 == 11) 
&& 
(a / numero4 == 2  || a / numero4 == 3 
|| a / numero4 == 5 
|| a / numero4 == 7 
|| a / numero4 == 11)){
printf("%d%d%d-%d\n", numero1, a, numero4, resto);
 }
 for(int b = 1; b <= a; b++){
 if(a % b == 0)
  flag++;
 }
 if(flag == 2)
printf("%d%d%d-%d\n", numero1, a, numero4, resto);
 }
    return 0;
}