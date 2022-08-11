#include<stdio.h>
#include<stdbool.h>
main() {
  int q, i, e, x;
  char letra;
  int num;
  printf("Digite uma letra do alfabeto entre 'A'e 'Z'. \n");
  scanf("%c", & letra); // lê a letra
  
  num = letra - 64; // transforma a letra em numero de 0 a 26

  if (num < 27) { // verifica se é uma letra de A a Z não conta minuscula
    for (q = 0; q < num; q++) { // laço de repetição quedefine a quantidade de linhas do triangulo
      i = q;
      int ponto;
      bool temPonto = true;

      for (e = 65; e < 66 + i; e++) { // imprime do lado esquerdo em ordem crescente
        ponto = num - (q + 1);
        if (temPonto && e == 65) {
          temPonto = false;
          for (x = 0; x < ponto; x++) {
            printf(" .");
          }
        }
        printf("%c", e);
      }
      for (x = 64 + i; x > 64; x--) { // imprime do lado direito em ordem decrescente
        printf("%c", x);
      }
      printf("\n"); // quebra a linha
    }
  } else {
    printf("Valor inválido.");
  }
}