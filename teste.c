#include <stdio.h>

int main(){
    float polinomio1[101];                   //um polinomio de grau 100 apresenta 101 termos
    float polinomio2[101];
    float polinomioR[201];                   //um polinomio de grau 200 apresenta 201 termos
    int grau, posicao, opcao, operador, posicao2;
    
    operador=100;                            //inicializacao da variavel e condicao para que o menu continue aparecendo, numero escolhido aleatoriamente
    while(operador==100){                    //cria-se um menu para o usuario escolher a operacao
       printf("1) Adicao\n");                //o menu deve continuar rodando ate que o usuario escolha a opcao 4, por isso usa-se while
       printf("2) Subtracao\n");             
       printf("3) Multiplicacao\n");
       printf("4) Sair\n"); 
    
       printf("Operacao: ");                 
       scanf("%d", &opcao);                  //primeiro deve-se ler a operacao desejada pelo usuario
         if(opcao==4){                       //se for a operacao 4, o programa encerra
            operador=99;                     //condicao diferente da estipulada anteriormente no while para que o programa encerre
         }
         else if(opcao==0||opcao>4){         //se a opcao não for valida, o usuario deve ser avisado
            printf("Opcao Invalida");        
         }
         else{                               //se a opcao for valida, o programa executa os proximos comandos
             printf("Grau: ");              
             scanf("%d", &grau);             //apos ler a operacao, deve-se ler o grau do polinomio
             if((grau<=0)||(grau>100)){      //o grau tem que ser entre 1 e 100
                printf("Grau invalido");     //caso o grau seja invalido o usuario deve ser avisado
             }
             else{ 
    
                  printf("P1: ");            //o polinomio 1 é lido completamente, na ordem em que foi digitado
                  for(posicao=0; posicao<=grau; posicao++){
                     scanf("%f", &polinomio1[posicao]);
                  }
           
                  printf("P2: ");            //o polinomio 2 tambem é lido completamente, na ordem em que foi digitado
                  for(posicao=0; posicao<=grau; posicao++){
                     scanf("%f", &polinomio2[posicao]);
                  }
    
       switch(opcao){                        //as operacoes deve estar dentro do switch porque dependem da opcao escolhida pelo usuario
        
         case 1:                             //os polinomios são lido novamente e ao mesmo tempo ocorre a operacao de adicao
         for(posicao=0;posicao<=grau;posicao++){
           polinomioR[posicao] = polinomio1[posicao] + polinomio2[posicao];
           printf("%.1f ", polinomioR[posicao]);
         }
         break;
         case 2:                             //os polinomios são lidos novamente e ao mesmo tempo ocorre a operacao de subtracao
         for(posicao=0;posicao<=grau;posicao++){
           polinomioR[posicao] = polinomio2[posicao] - polinomio1[posicao];
           printf("%.1f ", polinomioR[posicao]);
         }
         break;           
         case 3:                            //o polinomio resultado deve ser zerado e o grau é o dobro dos polinomios iniciais
         for(posicao=2*grau; posicao>=0; posicao--){
           polinomioR[posicao]=0;
         }
                                            //os polinomios são lidos novamente e a multiplicacao é realizada
         for(posicao=0; posicao<=grau; posicao++){
           for(posicao2=0; posicao2<=grau; posicao2++){
                                            //os expoentes devem ser somados, logo as posicoes devem ser somadas.
              polinomioR[posicao+posicao2] = polinomioR[posicao+posicao2] + polinomio1[posicao] * polinomio2[posicao2];
            }                               //o polinomio resultado é somado aos outros polinomios para que o valor de cada multiplicacao não seja perdido
         }                                  //é necessario fazer um comando for para que o polinomio resultado seja impresso
         for(posicao=0; posicao<=grau*2;posicao++){
           printf("%.1f ", polinomioR[posicao]);
         }
         break;          
            
            
       }
       }
             } 
       printf("\n");
    }
       return 0;
}