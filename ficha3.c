#include <stdio.h>

void swapM(int *x, int *y){
    int temporary = *x;
    *x = *y;
    *y = temporary;
}

void swap (int v[], int i, int j){
    swapM(&v[i], &v[j]);
}

int sumArray(int v[], int N){
    int i = 0; int sum = 0;
    while (i < N){
        sum += v[i];
        i++;
    }
    return sum;
}

void invertArray(int v[], int N){
    for (int i = 0; i < N; i++, N--)
        swapM(&v[i], &v[N-1]);
}

void invertArray1(int v[], int N){
    for (int c = 0; c < N; c++, N--)
        swap(v, c, N-1);
}

int main(){
    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%d", sumArray(v, 10));
    printf("\n");
    invertArray1(v, 10);
    for (int a = 0; a < 10; a++){
        printf("%d ", v[a]);
    }
}
