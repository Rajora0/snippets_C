#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {

    // imprime cabeçalho
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;

    int chute = 0;
    int tentativas = 1;
    float pontos = 1000;
    
    while (1){

        printf("Tentativa %d.\n",tentativas);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute é %d.\n", chute);
        if (chute < 0){
            printf("Você não pode chutar numeros negativos.\n");
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo!\n");
            break;
        } 
        else if(maior) {
            printf("Que pena voçê errou!\n");
            printf("Seu chute foi maior que o numero secreto! \n");   
        }
        else {
            printf("Seu chute foi menor que o numero secreto! \n");
        }
        tentativas++;

        float pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - abs(pontosperdidos);
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n",tentativas);
    printf("Total de pontos %.1f\n",pontos);
}