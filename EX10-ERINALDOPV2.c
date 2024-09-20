//10. Escreva um programa que peça ao usuário para inserir a idade de 10 pessoas.
//Para cada idade, o programa deve classificar a pessoa em uma das categorias:
//criança (0-12 anos), adolescente (13-17 anos), adulto (18-64 anos) ou idoso (65
//anos ou mais). (0.4 ponto)

#include <stdio.h>

void calcularIdade(int idade){
    
    if(idade <= 12 || idade == 0)
        printf("IDADE: %d CATEGORIA: Criança.\n", idade);
    else if(idade >= 13 && idade <= 17 )
        printf("IDADE: %d CATEGORIA: Adolescente.\n", idade);
    else if(idade >= 18 && idade <= 64 )
        printf("IDADE: %d CATEGORIA: Adulto.\n", idade);
    else
        printf("IDADE: %d CATEGORIA: Idoso (a).\n", idade);
    
} 
int main(){
    
int idade;
int x;
  
  
    for(x = 1; x < 11; x++){
        printf("Informe a idade da pessoa %d°: ", x);
            scanf("%d", &idade);
                
                calcularIdade(idade);
    }        
            
    
                    
      




    
}