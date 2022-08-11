#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int doces, pokemon1, pokemon2, pokemon3, evoluidos = 0;
int a, b, c;
scanf("%d %d %d %d", &doces, &pokemon1, &pokemon2, &pokemon3);
if(pokemon1 > pokemon2){
a = pokemon2; // a = 800
pokemon2 = pokemon1; // pokemon2 = 900
pokemon1 = a; // pokemon1 = 800
}
if(pokemon1 > pokemon3){
b = pokemon3; // b = 700
pokemon3 = pokemon1; // 
pokemon1 = b; // 
}
if(pokemon2 > pokemon3){
c = pokemon3;
pokemon3 = pokemon2;
pokemon2 = c;
}
printf("%d %d %d\n", pokemon1, pokemon2, pokemon3);
if((doces - pokemon1) >= 0){ // 300 - 100 = 200 >= 0 VVVV
doces -= pokemon1; // 300 - 100 = 200
evoluidos++; // evoluidos = 1
}
if((doces - pokemon2) >= 0){
doces -= pokemon2; // 200 - 190 = 10 >= 0 VVVVVVV
evoluidos++;
}
if((doces - pokemon3) >= 0){
doces -= pokemon3; // doces = 10 - 220 = -210
evoluidos++;
}
printf("%d", evoluidos);
/*if ((doces >= 0 && doces <= 1000)
&& (pokemon1 >= 1 && pokemon1 <= 1000)
&& (pokemon2 >= 1 && pokemon2 <= 1000)
&& (pokemon3 >= 1 && pokemon3 <= 1000)){*/
//}



	return 0;
}