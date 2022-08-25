#include <stdio.h>

int main () {

    // imprime cabeçalho
    printf("*******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação! *\n");
    printf("*******************************************\n");

    int numerosecreto = 42;

    int chute;
    
    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);
    printf("Seu chute é %d.\n", chute);

    if(chute == numerosecreto){
        printf("Parabéns! Você acertou!\n");
        printf("Jogue de novo!\n");
    } else {
        printf("Que pena voçê errou!\n");
        printf("Jogue de novo!\n");
    }
}