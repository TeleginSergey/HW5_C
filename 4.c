#include <stdio.h>

void reduce_fraction(int *a, int *b){
    for (int i=2; i<=*b; i++){
        //цикл while, т.к. один и тот же делитель может быть несколько раз, например: 16 и 8.  
        while (*a % i == 0 && *b % i == 0){
            *a /= i;
            *b /= i;
        }
    }
    printf("%d %d\n", *a, *b);
}

int main(){
    int a, b, *ptr1 = &a, *ptr2 = &b;
    scanf("%d %d", &a, &b);
    reduce_fraction(ptr1, ptr2);
    return 0;
}