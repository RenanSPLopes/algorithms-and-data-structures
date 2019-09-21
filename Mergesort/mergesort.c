#include "../helper.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void mergeSort(int arr[], int begin, int end);
void merge(int arr[], int begin, int middle, int end);


void initializeVector(int arr[],int n){
    int i;
    srand((unsigned) time(NULL));
    for(i = 0; i < n; i++){
        arr[i] = rand() % n;
    }
}

void print(int arr[], int n){

    int i;
    for(i = 0; i < n; i++){
        printf("%d,", arr[i]);
    }
}


int main(int argc, char** argv)
{
    int n = 5;
    int arr[n];
    initializeVector(arr, n);

    clock_t t;
    t = clock();

    printf("Unsorted array: ");
    print(arr, n);

    mergeSort(arr, 0, n);

    printf("\nSorted Array: ");
    print(arr, n);

    t = clock() - t;
    double timeElapsed = ((double)t)/CLOCKS_PER_SEC;
    printf("\n Time elapsed: %f seconds", timeElapsed);
    printf("\n");

    /* code */
    return 0;
}


void mergeSort(int arr[], int begin, int end){

    if(begin < end){
        int middle = begin+end/2;

        mergeSort(arr, begin, middle);
        mergeSort(arr, middle+1, end);
        merge(arr, begin, middle, end);
    }

}

void merge(int arr[], int begin, int middle, int end){
    int l_index = begin, r_index = middle+1, aux_index = 0, size = end-begin-1;
    int* aux;
    aux = (int*) malloc(size * sizeof(int));

    while (l_index <= middle && r_index <= end)
    {
        if(arr[l_index] < arr[r_index]){
            aux[aux_index] = l_index;
            l_index++;
        } else
        {
            aux[aux_index] = r_index;
            r_index++;
        }

        aux_index++;
    }

    while (l_index <= middle){
        aux[aux_index] = l_index;
        l_index++;
        aux_index++;
    }

    while (r_index <= end){
        aux[aux_index] = r_index;
        r_index++;
        aux_index++;
    }

    for(aux_index = begin; aux_index < end; aux_index++)
        arr[aux_index] = aux[aux_index - begin];

    free(aux);
}
