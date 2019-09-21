#include <stdio.h>

void calculate(float value, float adjustment, float* result){

    *result = value + (value * adjustment/100);
}

int main(int argc, char* argv[]){

    float value, adjustment, result;

    printf("Insira o valor a ser reajustado: ");
    scanf("%f", &value);
    printf("\n");

    printf("Insira a porcentagem de reajuste: ");
    scanf("%f", &adjustment);
    printf("\n");

    calculate(value, adjustment, &result);

    printf("Valor reajustado = %f", result);
    printf("\n");


}
