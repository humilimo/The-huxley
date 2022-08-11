#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int Asoldados, Atanques, Aavioes, Amisseis;
scanf("%d %d %d %d", &Asoldados, &Atanques, &Aavioes, &Amisseis);
int Isoldados, Itanques, Iavioes, Imisseis;
scanf("%d %d %d %d", &Isoldados, &Itanques, &Iavioes, &Imisseis);
int RIsoldados, RItanques, RIavioes, RImisseis;
scanf("%d %d %d %d", &RIsoldados, &RItanques, &RIavioes, &RImisseis);
int somasoldados = Isoldados + RIsoldados, somatanques = Itanques + RItanques,
somaavioes = Iavioes + RIavioes, somamisseis = Imisseis + RImisseis;
if((Asoldados > somasoldados && Atanques > somatanques && Aavioes > somaavioes)
|| (Asoldados > somasoldados && Atanques > somatanques && Amisseis > somamisseis)
|| (Asoldados > somasoldados && Aavioes > somaavioes && Amisseis > somamisseis)
|| (Atanques > somatanques && Aavioes > somaavioes && Amisseis > somamisseis))
printf("Avancar");
else if((Asoldados < somasoldados && Atanques < somatanques && Aavioes < somaavioes)
|| (Asoldados < somasoldados && Atanques < somatanques && Amisseis < somamisseis)
|| (Asoldados < somasoldados && Aavioes < somaavioes && Amisseis < somamisseis)
|| (Atanques < somatanques && Aavioes < somaavioes && Amisseis < somamisseis))
printf("Recuar");
else
printf("Permanecer");
	return 0;
}