#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSorteado, palpite;
    int tentativas = 7;
    int tentativaAtual = 0;
    int acertou = 0;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));
    
    // Sorteia um número entre 1 e 100
    numeroSorteado = rand() % 100 + 1;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número entre 1 e 100.\n");

    // Loop para permitir até 7 tentativas
    while (tentativaAtual < tentativas) {
        printf("Tentativa %d de %d: ", tentativaAtual + 1, tentativas);
        scanf("%d", &palpite);

        // Verifica se o palpite é válido
        if (palpite < 1 || palpite > 100) {
            printf("Por favor, insira um número entre 1 e 100.\n");
            continue;
        }

        // Verifica o palpite
        if (palpite == numeroSorteado) {
            acertou = 1;
            break;
        } else if (palpite < numeroSorteado) {
            printf("O número sorteado é maior que %d.\n", palpite);
        } else {
            printf("O número sorteado é menor que %d.\n", palpite);
        }

        tentativaAtual++;
    }

    // Resultado final
    if (acertou) {
        printf("Parabéns! Você acertou o número %d.\n", numeroSorteado);
    } else {
        printf("Você esgotou todas as suas tentativas. O número sorteado era %d.\n", numeroSorteado);
    }

    return 0;
}
