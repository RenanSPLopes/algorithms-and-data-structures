#include <stdio.h>

#define ROW 20
#define COLUMN 15

int main(int argc, char* argv[]){

    int mat[ROW][COLUMN];
    int i, j;
    int sum = 0;

    printf("Digite a matriz: \n");
    for(i = 0; i < ROW; i++)
        for(j = 0; j < COLUMN; j++){

            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            printf("\n");

            if(i % 2 == 0)
                sum += mat[i][j];

        }

    printf("Soma das linhas pares: %d", sum);

}
