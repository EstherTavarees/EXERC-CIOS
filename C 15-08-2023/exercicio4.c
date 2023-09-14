//>Dados dois números distintos, informe qual dele é o maior.
#include <stdio.h>
int main () {

    float a, b;

    printf("Informe dois valores: ");
    scanf("%f%f", &a, &b);

    if(a>b){
        printf("O maior número é o %f", a);

    }else{
        printf("O maior número é o %f", b);
    }
}