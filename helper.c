#include "helper.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

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