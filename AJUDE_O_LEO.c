#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int a, b, n, m, pontox, pontoy, zero = 0;
scanf("(%d, %d)", &pontox, &pontoy);
scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);
// (a * pow(x,n)) - (b * pow(y, m))
//if(pontoy != pow((a * pow(pontox, n)) / b, pow(m, -1)))
if (zero != (a * pow(pontox,n)) - (b * pow(pontoy, m)))
printf("a função está definida em (%d,%d)", pontox, pontoy);
else
printf("a função não está definida em (%d,%d) .-.", pontox, pontoy);
//a = (b * pow(pontoy, m)) / pow(pontox, n);
//printf("%d", a);




	return 0;
}
