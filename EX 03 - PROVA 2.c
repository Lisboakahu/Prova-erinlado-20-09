/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int nota;
    int peso;
    int ponderada;
    int somaPeso;
    int mediatotal;
    
    for(int i = 0; i <=4; i++){
        printf("Insira a nota do aluno:");
        scanf("%d",&nota);
     printf("Insira o peso da prova:");
     scanf("%d",&peso);
        
    }  
    for(int i = 0; i <=4;i++){
       ponderada = nota * peso;
       somaPeso = peso;
    }
    
    mediatotal = ponderada / somaPeso;
    printf("A media da sala foi %d",mediatotal);

    return 0;
}
