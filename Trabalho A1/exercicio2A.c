#include <stdio.h>

#define SIZE 15

int main(int arc, char* argv[]){

    int mat[SIZE][SIZE];
    int i, j, arr_index = 0;
    int sum = 0;

    printf("Insira a matriz 15x15\n");

    for(i = 0; i < SIZE; i++)
        for(j=0; j < SIZE; j++){
            printf("Insira o elemento [%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);

            if(i + j == SIZE - 1){
                sum += mat[i][j];
            }

        }

    printf("Soma da diagonal secundária: %d", sum);
    printf("\n");
}
