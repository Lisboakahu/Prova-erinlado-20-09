#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Solicita ao usuário um número inteiro positivo
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Calcula a soma dos divisores próprios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma == i; // Adiciona o divisor à soma
        }
    }

    // Verifica se o número é perfeito
    if (soma == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}
