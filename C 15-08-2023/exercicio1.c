//> Leia duas notas de um aluno, informe a sua média.
#include <stdio.h> 
int main (){
    
    float n1, n2, media;

    printf("Informe a nota 1, por gentileza: ");
    scanf("%f", &n1);
    printf("Informe a nota 2, por gentileza: ");
    scanf("%f", &n2);

    media =  n1 + n2 / 2;

    printf("Sua média neste semestre foi de %.2f", media);

    return 0;

}

