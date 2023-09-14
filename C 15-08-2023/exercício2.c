//> Leia uma temperatura em graus Fahrenheit,informe o valorcorrespondente em graus Celsius. [Dica: C = (F –32) (5 / 9)].
#include <stdio.h>
int main (){

    float F, C;

    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F – 32) * (5 / 9);

    printf("A temperatua digitada em Celsius é: %.2f", C);

    return 0;
}