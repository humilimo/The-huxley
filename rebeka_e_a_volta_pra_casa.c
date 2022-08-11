#define premio1(a, b) (int) ((a * b) / 100)
#define premio2(c, d) (int) ((c * d) / 100)
#define premio3(e, f) (int) ((e * f) / 100)
#define premiototal(g, h, i) (int) (g + h + i)
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
int dinheiro, porcentagem1, porcentagem2, porcentagem3, dinheirorebeka = 3;
//int premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro), premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro));
scanf("%d %d %d %d", &dinheiro, &porcentagem1, & porcentagem2, &porcentagem3);
/*premio1(porcentagem1, dinheiro) = (porcentagem1 * dinheiro) / 100;
premio2(porcentagem2, dinheiro) = (porcentagem2 * dinheiro) / 100;
premio3(porcentagem3, dinheiro) = (porcentagem3 * dinheiro) / 100;
premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro)) = premio1(porcentagem1, dinheiro) + premio2(porcentagem2, dinheiro) + premio3(porcentagem3, dinheiro);*/
//(porcentagem1 * (dinheiro + 1)) / (100) + (porcentagem2 * (dinheiro + 1)) / (100) + (porcentagem3 * (dinheiro + 1)) / (100)
if((porcentagem1 * dinheiro) % 100 == 0 
&& (porcentagem2 * dinheiro) % 100 == 0 && (porcentagem3 * dinheiro) % 100 == 0){
dinheirorebeka += (dinheiro - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro)));
printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro));
}
else if(((porcentagem1 * (dinheiro + 1)) % 100 == 0
&& (porcentagem2 * (dinheiro + 1)) % 100 == 0
&& (porcentagem3 * (dinheiro + 1)) % 100 == 0)
&& ((dinheiro++) - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro))) >= 2){
dinheirorebeka--;
dinheirorebeka += (dinheiro - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro)));
printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro));
}
else if(((porcentagem1 * (dinheiro + 2)) % 100 == 0
&& (porcentagem2 * (dinheiro + 2)) % 100 == 0
&& (porcentagem3 * (dinheiro + 2)) % 100 == 0)
&& ((dinheiro += 2) - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro))) >= 3){
dinheirorebeka -= 2;
dinheirorebeka += (dinheiro - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro)));
char letra1, letra2, letra3;
int x1, x2, x3, soma;
scanf(" %c %c %c", &letra1, &letra2, &letra3);
x1 = letra1 - 96;
x2 = letra2 - 96;
x3 = letra3 - 96;
soma = x1 + x2 + x3;
printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro));
printf("%d\n", soma);
}
else if(((porcentagem1 * (dinheiro + 3)) % 100 == 0
&& (porcentagem2 * (dinheiro + 3)) % 100 == 0
&& (porcentagem3 * (dinheiro + 3)) % 100 == 0)
&& ((dinheiro += 3) - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro))) >= 4){
dinheirorebeka -= 3;
dinheirorebeka += (dinheiro - premiototal(premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro)));
int idade1, idade2, idade3, parcelas = 0;
scanf("%d %d %d", &idade1, &idade2, &idade3);
printf("Cada homem ficou com %d, %d e %d reais, respectivamente\n", premio1(porcentagem1, dinheiro), premio2(porcentagem2, dinheiro), premio3(porcentagem3, dinheiro));
if(idade1 % 3 == 0 || idade2 % 3 == 0 || idade3 % 3 == 0){
if(idade1 % 3 == 0)
parcelas += idade1 / 3; 
if(idade2 % 3 == 0)
parcelas += idade2 / 3; 
if(idade3 % 3 == 0)
parcelas += idade3 / 3; 
printf("%d\n", parcelas);
}
}
else
printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
if(dinheirorebeka >= 7)
printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
else
printf("E parece que Rebeka vai ter que voltar andando...\n");
	return 0;
}