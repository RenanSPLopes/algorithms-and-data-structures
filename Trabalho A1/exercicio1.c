#include <stdio.h>

int main(int argc, char* argv[]){

    int mat[5][5];
    int i, j, arr_index = 0;
    int sum = 0, arr[5];

    printf("Insira a matriz 5x5\n");

    for(i = 0; i < 5; i++)
        for(j=0; j < 5; j++){
            printf("Insira o elemento [%d][%d]: \n", i, j);
            scanf("%d", &mat[i][j]);
            if(i == j){
                arr[arr_index] = mat[i][j];
                sum += mat[i][j];
                arr_index++;
            }
        }

    printf("Vetor diagonal: \n");
    for(i = 0; i < 5; i++){
        printf("Elemento [%d]: [%d]\n", i, arr[i]);
    }
    printf("Soma da Diagonal = [%d]", sum);

}
