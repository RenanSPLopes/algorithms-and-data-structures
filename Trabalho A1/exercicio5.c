#include <stdio.h>

#define SIZE 10

void setBiggerAndSmaller(int arr[], int size, int* bigger, int* smaller){

    int i = 1;
    *bigger = arr[0];
    *smaller = arr[0];

    while(i < size){

        if(*bigger < arr[i])
            *bigger = arr[i];

        if(*smaller > arr[i])
            *smaller = arr[i];

        i++;
    }
}

int main(int argc, char* argv[]){

    int i, bigger, smaller;
    int arr[SIZE];

    for(i = 0; i < SIZE; i++){
        printf("Insira o elemento [%d] do vetor: ", i);
        scanf("%d", &arr[i]);
        printf("\n");
    }

    setBiggerAndSmaller(arr, SIZE, &bigger, &smaller);

    printf("Maior valor = [%d]", bigger);
    printf("\n");
    printf("Menor valor = [%d]", smaller);
    printf("\n");
}
