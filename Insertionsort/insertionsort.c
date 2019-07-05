#include <stdio.h>
#include "helper.h"
#include <time.h>

int main(int argc, char const *argv[]){
    int i, j, temp;
    int n = 100000;
    int arr[n];
    initializeVector(arr, n);

    clock_t t;
    t = clock();

    for(i = 1; i < n; i++){
        temp = arr[i];
        j = i -1;
        // printf("\n[%d]", i);
        while (j >= 0 && arr[j] > temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
        // print(arr, n);
    }
    
    t = clock() - t;
    double timeElapsed = ((double)t)/CLOCKS_PER_SEC;
    printf("\n Time elapsed: %f seconds", timeElapsed);
    printf("\n");

    return 0;
}