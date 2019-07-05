#include <stdio.h>
#include "../helper.h"
#include <time.h>

int main(int argc, char const *argv[])
{   

    int i, j, temp;
    int n = 100000;
    int arr[n];
    initializeVector(arr, n);
    
    clock_t t;
    t = clock();

    for(i = 0; i < n; i++){
        // printf("\n[%d]", i);
        for(j = 0; j < n - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        // print(arr, n);
    }

    t = clock() - t;
    double timeElapsed = ((double)t)/CLOCKS_PER_SEC;
    printf("\n Time elapsed: %f seconds", timeElapsed);
    printf("\n");


    /* code */
    return 0;
}
