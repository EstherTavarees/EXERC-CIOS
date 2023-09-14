//>Leia a distância percorrida por um veículo e o total de litros de combustível consumidos, informe o consumo médio.
#include <stdio.h>
int main (){
    float consumo, distancia, qtdlitros;

    printf("Infome a quantidade de Litros: ");
    scanf("%f", &qtdlitros);
    printf("Informe a distância: ");
    scanf("%f", &distancia);
    consumo = distancia / qtdlitros;
    printf("Seu consumo médio foi de %.2f", consumo);
}