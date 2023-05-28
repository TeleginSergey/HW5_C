#include <stdio.h>

struct Person
{
    int age; //возраст
    char name[30]; //имя
};


float averageAge(struct Person arr[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum += arr[i].age;
    }
    return (float)sum/n;
}


int main(){
    int n = 4;
    struct Person arr[4] = {
        {25, "Алиса"},
        {30, "Дмитрий"},
        {14, "Александр"},
        {16, "Дарья"}
    };
    printf("%g\n", averageAge(arr, n));
    
    return 0;
}