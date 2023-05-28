#include <stdio.h>

struct Move
{
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n){
    struct Move FinishPoint = {0, 0};
    for (int i=0; i <n; i++){
        FinishPoint.x += arr[i].x;
        FinishPoint.y += arr[i].y;
    }
    return FinishPoint;
    
}

int main(){
    struct Move arr[] = {
        {2, 3},
        {-3, 5},
        {-5, 16},
        {1, 1}
    };
    struct Move FinishPoint = getFinishPoint(arr, 4);
    printf("%d %d\n", FinishPoint.x, FinishPoint.y);
    return 0;
}