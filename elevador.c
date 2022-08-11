#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char n1, n2, n3;
    int grupos, movimentos, andadas = 0;
    int a, b, c, i, zero1 = 0, zero2 = 0, zero3 = 0;
    scanf("%d %d", &grupos, &movimentos);
    int pessoas = grupos * 4;
    for(i = 1; i <= pessoas && movimentos >= 0; i++){
    scanf(" %c%c%c", &n1 ,&n2, &n3);
    a = n1 - 48;
    b = n2 - 48;
    c = n3 - 48;
    if (zero1 < a){ 
     for(zero1; zero1 < a;zero1++){
      printf("d");   
      andadas++;
      movimentos--;
     }
    }
    else if (zero1 > a){ 
     for(zero1; zero1 > a;zero1--){
      printf("e");   
      andadas++;
      movimentos--;
     }
    }
    if(zero2 < b){
     for(zero2; zero2 < b;zero2++){
      printf("c");   
      andadas++;
      movimentos--;
     }
    }
    else if(zero2 > b){
    for(zero2; zero2 > b; zero2--){
      printf("b");   
      andadas++;
      movimentos--;
     }
    }
    if(zero3 < c){
     for(zero3; zero3 < c;zero3++){
      printf("f");   
      andadas++;
      movimentos--;
     }
    }
    if(zero3 > c){
     for(zero3; zero3 > c;zero3--){
      printf("t");   
      andadas++;
      movimentos--;
     }
    }
    printf("\nEntregue %d no quarto %d%d%d com %d movimentos\n", i, a, b, c, andadas);
    if(movimentos<=0){
    printf("Faltou combustivel e foram entregues %d pessoas.\n", i);
    break;
    }
    }
    if(i >= pessoas)
    printf("Todas as pessoas foram entregues.\n");
    printf("Fim do teste. Obrigado Kanye West!");
    //scanf("%c%c%c", &n1, &n2, &n3);
	return 0;
}
