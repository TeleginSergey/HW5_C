#include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    int max, min;
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
        max += arr[i][0];
        min += arr[i][0];
    }

    int sumcol, indmax, indmin;
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            if (j < row){
                sumcol += arr[j][i];
            } else if (sumcol > max){
                max = sumcol;
                indmax = i;
            } else if (sumcol < min){
                min = sumcol;
                indmin = j;
            }
        }
    }

    int s;
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            s = arr[j][indmin];
            arr[j][indmin]=arr[j][indmax];
            arr[j][indmax] = s;

        }
    }
    printf("\n");
     for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}