#include <stdio.h>

#define NUMERO_DE_TENTATIVAS 5

int main () {

    // imprime cabeçalho
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;
    
    for( int i=1; i <= NUMERO_DE_TENTATIVAS; i++ ){

        printf("Tentativa %d de %d.\n",i,NUMERO_DE_TENTATIVAS);
        printf("Qual é o seu chute?\n");
        scanf("%d", &chute);
        printf("Seu chute é %d.\n", chute);
        if (chute < 0){
            printf("Você não pode chutar numeros negativos.\n");
            i--;
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            break;
        } 
        else if(maior) {
            printf("Que pena voçê errou!\n");
            printf("Seu chute foi maior que o numero secreto! \n");   
        }
        else {
            printf("Seu chute foi menor que o numero secreto! \n");
        }
        
    }
    printf("Jogue de novo!\n");
}