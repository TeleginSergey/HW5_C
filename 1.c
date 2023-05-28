#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    //считываем массив
    for (int i=0; i < N; i++){
        scanf("%d", &arr[i]);
    }
    //1, 2, 3, ..., k-1, k
    for (int i=N/2; i < N; i++){
        printf("%d ", arr[i]);
    }
    //k+1, k+2, k+3...
    for (int i=0; i < N/2; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}