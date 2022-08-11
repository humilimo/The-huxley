#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
/*
Pães:

Integral: '.' (ponto final)
Italiano: ':' (dois pontos)

Carnes:

Bovina: 'b'
Frango: 'f'
Peixe Peixoto Pisciano: 'p'

Extras:

Alface:  'A'
Tomate: 'T'
Cebola acebolada: 'C'
Pickle Rick: 'R'

Molhos:

Picante: 'P'
Desinteressante: 'D'
Meh: 'M'
Errado: 'E'

Tanto o primeiro quanto o último ingrediente precisa, necessariamente, ser um tipo de pão, e as duas fatias de pães devem ser do mesmo tipo;
A carne (se houver), tem prioridade de ser adicionada;
Até 3 ingredientes extras podem ser adicionados após a carne, mas não podem ser pão, carne ou molho.
Para finalizar, molho picante. Qualquer outra seleção de molho (ou a falta de molho) ocasionará no acionamento do MemeSinal, e nosso protagonista será chamado para arremessar o "sanduíche" no "cliente" e o "cliente" na rua para outro lugar para comer >:). O sanduíche também é invalidado nesse caso.

7 caracteres (i0, i1, i2, i3, i4, i5, i6), cada um representando um ingrediente.

Devem ser lidos como i1i2i3i4i5i6
Os ingredientes extras podem ser repetidos.
A falta de algum ingrediente é indicada por um espaço em branco. Checar exemplos.
*/
char i0, i1, i2, i3, i4, i5, i6;
int sucesso1 = 0, sucesso2 = 0, sucesso3 = 0, sucesso4 = 0;
scanf("%c%c%c%c%c%c%c", &i0, &i1, &i2, &i3, &i4, &i5, &i6);
if((i0 == '.' || i0 == ':') && (i6 == '.' || i6 == ':') && (i0 == i6))
sucesso1 = 1;
if(i1 == 'b' || i1 == 'f' || i1 == 'p'|| i1 == ' ')
sucesso2 = 1;
if((i2 == 'A' || i2 == 'T' || i2 == 'C' || i2 == 'R' || i2 == ' ') 
&& (i3 == 'A' || i3 == 'T' || i3 == 'C' || i3 == 'R' || i3 == ' ')
&& (i4 == 'A' || i4 == 'T' || i4 == 'C' || i4 == 'R' || i4 == ' '))
sucesso3 = 1;
if (i5 == 'P')
sucesso4 = 1;
if(sucesso1 == 1 && sucesso2 == 1 && sucesso3 == 1 && sucesso4 == 1)
printf("Valido");
else{
printf("Invalido\n");
if(sucesso4 == 0)
printf("...Mas pelo menos ganhou um chute\n");
}
	return 0;
}