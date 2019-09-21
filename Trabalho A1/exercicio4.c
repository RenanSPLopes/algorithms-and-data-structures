#include <stdio.h>

void calculate(int value1, int value2, int value3, int* sum, int* multiplication){

    *sum = value1 + value2 + value3;
    *multiplication = value1 * value2 * value3;
}

int main(int argc, char* argv[]){

    int value1, value2, value3, sum, multiplication;

    printf("Digite o primeiro valor: ");
    scanf("%d", &value1);
    printf("\n");

    printf("Digite o segundo valor: ");
    scanf("%d", &value2);
    printf("\n");

    printf("Digite o terceiro valor: ");
    scanf("%d", &value3);
    printf("\n");

    calculate(value1, value2, value3, &sum, &multiplication);

    printf("Resultado da soma: %d", sum);
    printf("\n");
    printf("Resultado da multiplicação: %d", multiplication);
}
