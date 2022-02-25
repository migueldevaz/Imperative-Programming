#include <stdio.h>

void swapM(int *x, int *y){
    int temporary = *x;
    *x = *y;
    *y = temporary;
}

void swap (int v[], int i, int j){
    swapM(&v[i], &v[j]);
}

int soma(int v[], int N){
    int i = 0; int sum = 0;
    while (i < N){
        sum += v[i];
        i++;
    }
    return sum;
}