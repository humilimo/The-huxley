#include<stdio.h>
int main(){
int numero1, numero4, resto, flag1 = 0, flag2 = 0;
scanf("%d__%d-%d", &numero1, &numero4, &resto);
for(int a = 0; a < 100;a++){
    flag1 = 0;
    flag2 = 0;
int b = a / numero1;
int c = a / numero4;
for(int d = 1; d <= b; d++){
  if(b % d == 0)
  flag1++;
}
for(int e = 1; e <= c; e++){
  if(c % e == 0)
  flag2++;
}
if(flag1 == 2 && flag2 == 2)
 if(a == 1 || a == 2 || a == 3 || a == 4 || a == 5 || a == 6 
|| a == 7 || a == 8 || a == 9){
 int zero = 0;
 printf("%d%d%d%d-%d\n", numero1, zero, a, numero4, resto);
}
else
 printf("%d%d%d-%d\n", numero1, a, numero4, resto);
 }
    return 0;
}