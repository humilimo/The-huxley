#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int dia1, mes1, ano1, dia2, mes2, ano2, bissextos1 = 0, bissextos2 = 0;
long long int total1 = 0LL, total2 = 0LL;
scanf("%d/%d/%d", &dia1, &mes1, &ano1);
scanf("%d/%d/%d", &dia2, &mes2, &ano2);
total1 += 31536000LL * (ano1 - 1);
total2 += 31536000LL * (ano2 - 1);
for(int i = 1; i < ano1; i++){
  if((i % 4 == 0) && (i % 100 != 0 || i % 400 == 0))
  bissextos1++;
}
for(int a = 1; a < ano2; a++){
  if((a % 4 == 0) && (a % 100 != 0 || a % 400 == 0))
  bissextos2++;
}
for(int b = 1; b < mes1; b++){
if(b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
  total1 += 86400LL * 31;
else if(b == 4 || b == 6 || b == 9 || b == 11)
total1 += 86400LL * 30;
else if(b == 2)
total1 += 86400LL * 28;
}
total1 += 86400LL * dia1;
for(int c = 1; c < mes2; c++){
if(c == 1 || c == 3 || c == 5 || c == 7 || c == 8 || c == 10 || c == 12)
total2 += 86400LL * 31;
else if(c == 4 || c == 6 || c == 9 || c == 11)
total2 += 86400LL * 30;
else if(c == 2)
total2 += 86400LL * 28;
}
total2 += 86400LL * dia2;
total1 += bissextos1 * 86400LL;
total2 += bissextos2 * 86400LL;
if((mes1 > 2) && (ano1 % 4 == 0) && (ano1 % 100 != 0 || ano1 % 400 == 0))
total1 += 86400LL;
if((mes2 > 2) && (ano2 % 4 == 0) && (ano2 % 100 != 0 || ano2 % 400 == 0))
total2 += 86400LL;
long long int segundostotais = total2 - total1;
int diastotais = segundostotais / 86400LL;
printf("%d dias de namoro.", diastotais);
	return 0;
}