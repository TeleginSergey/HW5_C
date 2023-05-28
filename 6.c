#include <stdio.h>

int abs_arr(int arr[], int n){
    int cnt=0;
    for (int *ptr=arr; ptr<arr+n; ptr++){
        if (*ptr < 0){
            *ptr *= -1;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    int n = 7;
    int arr[7] = {1, -2, -3, 4, -5, 6, -7};
    printf("%d\n", abs_arr(arr, n));
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}