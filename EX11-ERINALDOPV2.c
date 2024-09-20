//11. Escreva um programa que peça ao usuário para inserir as notas de 8 alunos e
//classifique cada nota em conceitos: A (nota entre 9 e 10), B (nota entre 7 e 8.9), C
//(nota entre 5 e 6.9), D (nota entre 3 e 4.9) ou F (nota abaixo de 3). (0.4 ponto)
//Entrada: 8 notas.
//Saída: conceito correspondente para cada nota



#include <stdio.h>

void calcularNota(float n){
    
    if(n >= 9 && n <= 10)
        printf("NOTA DO ALUNO: %.2f TIPO DE NOTA: A.\n", n);
    else if(n >= 7 && n <= 8.9)
        printf("NOTA DO ALUNO: %.2f TIPO DE NOTA: B.\n", n);
    else if(n >= 5 && n <= 6.9)
        printf("NOTA DO ALUNO: %.2f TIPO DE NOTA: C.\n", n);
    else if(n >= 3 && n <= 4.9)   
        printf("NOTA DO ALUNO: %.2f TIPO DE NOTA: D.\n", n);
        
    else
        printf("NOTA DO ALUNO: %.2f TIPO DE NOTA: F.\n", n);   
        
        
} 
int main(){
    
float nota;
int x;
  
    
    for(x = 1; x < 9; x++){
        printf("Informe a nota do %d° aluno: ", x);
            scanf("%f", &nota);
                
               calcularNota(nota);
    }        
            
    
                    
      




    
}