#include <stdio.h>

int main () {

    // imprime cabeçalho
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute = 0;
    int tentativas = 1;

    
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
    }
    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!\n",tentativas);
}