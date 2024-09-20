//   11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
//   de ICMS com base nas faixas de preço do produto:
//   ● Até R$ 1.000,00: Desconto de 5%
//   ● De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
//   ● Acima de R$ 5.000,00: Desconto de 15%
//   Use a estrutura condicional aninhada para aplicar o desconto corretamente. 


#include <stdio.h>

float descontoICMS(float x) { // x = valor produto

	float desconto;
	if (x <= 1000.00) {
		desconto = x * 0.95;    // 0.95 Fator de Multiplicação
	} else if (x <= 5000.00) {
		desconto = x * 0.90;
	} else {
		desconto= x * 0.85;
	}

	return desconto;
}

int main() {
	float x, resultado; // resultado = valor final


	printf("Digite o valor do produto: R$ ");
	scanf("%f", &x);


	resultado = descontoICMS(x);  


	printf("O valor do produto com o desconto de ICMS C): R$ %.2f\n", resultado);

	return 0;
}