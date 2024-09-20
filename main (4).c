



#include <stdio.h>

void ConverterParaBase(int numero, int base) {       //Função pra converter o número, como o nome sugere ;-;
    int resto;

    
    while (numero > 0) {             //enquanto o número informado lá em baixo for menor que zero....
        resto = numero % base;      // Variavél resto recebe o resto da divisão de numero pela base escolhida
        printf("%d", resto);        // Digita o resto
        numero = numero / base ;    //O resultado que sobrar é divido novamente, ex 10/2 = 5, então o resto vai ser "0" e o "5" será o próximo a ser dividido.
    }
    printf("\n"); //só pulei uma linha calma.
}







int main() {                                // <<------- Começa daqui pra ficar mais facil------------>>
    int num, base;  //Variáveis 

    
    printf("Informe um número decimal: ");                    //Solicita o numero  
    scanf("%d", &num);

   
    printf("Escolha a base de conversão (Obs: entre 2 e 16): ");    //Base é o número que será usado pra dividir, ex: numero 10, base 2
    scanf("%d", &base);                                             // o número 10 seria divido por 2 até onde n der mais.

    
    if (base < 2 || base > 16) {            //Se a base não estiver entre 2 e 16 então...
        printf("Base inválida! Escolha uma base entre 2 e 16.\n");          
        return 1; 
    }

    
    printf("Resultado da conversão: ");    //chamei a função pra imprimir o resultado
    ConverterParaBase(num, base);           //<---- isso é basicamente isso -----> nome da função(valores que eu quero que sejam usados dentro da função)


}