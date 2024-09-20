//6. 
#include <stdio.h>

int Batata(int numero) { //funcao pra validar os numeros primos.

    if (numero < 2) return 0;               //Aqui nao e primo, por isso retorna "0" que e o mesmo que "falso".
    
    
    for (int i = 2; i <= numero; i++) {                      //vai testar a divisao de todos os numero ate o o final. 
        if (numero % i == 0) return 0;              //Se o resto da divisao de qualque numero anterior for 0 ele nao e primo
    return 1;                               //se nao, retorna 1 pra positivo, que seria primo. 
}

} int main() {
    int inicio, fim;

   
    printf("Informe o valor inicial: ");           //NÃ£o vou explicar isso kkkk ;-;                                               
        scanf("%d", &inicio);
    printf("Informe o valor final: ");
        scanf("%d", &fim);
    int Resultado = 0;                      //variavÃ©l lÃ³gica temporÃ¡ria sÃ³ pra usar como valor pra funÃ§Ã£o "int Batata, iniciei ela como "falsa", = 0. 

   
    for (int i = inicio; i <= fim; i++) { // laÃ§o para que os nÃºmeros do inÃ sejam impressos atÃ© o nÃºmero final.
        if (Batata(i)) {                    // toda vez que passar pelo laÃ§o a funÃ§Ã£o batata vai ser chamada e o valor de "i" usado no laÃ§o -> 
                                            // -> vai lÃ¡ pra cima na "int Batata".
            
            printf("%d ", i);       //Escreve o valor de i que Ã© somente os nÃºmeros validados pela funÃ§Ã£o depois dos testes lÃ¡ em cima.
            Resultado = 1;      //Como sÃ³ vai ser escrito os nÃºmeros primos o resultado vai ser "verdadeiro" = 1.
        }
    }

    
    if (!Resultado) {     //se o resultado de alguma condiçao anterior for diferente de resultado, que atualmente e 1 "verdadeiro" entao...
        printf("Não há números primos no intervalo informado.\n");
    }

    return 0; 
}
                    
