#include <stdio.h>

int main(){
    int row, col;
    scanf("%d %d", &row, &col);
    //создаю двумерный массив
    int arr[row][col];
    // min и max - это минимальный и максимальный по сумме столбцы
    int max, min;
    //считываю массив
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
        //сразу присваиваю к min и max сумму первого столбца
        max += arr[i][0];
        min += arr[i][0];
    }
    //sumcol - сумма столбца на данный момент, чтобы сравнивать его с min и max
    int sumcol, indmax, indmin;
    //i начинаю с единицы, т.к. первый столбец уже посчитали
    for (int i=1; i < row; i++){
        for (int j=0; j < col; j++){
            if (j < row){
                //считаю сумму столбца, пока он не закончится, поэтому сравнение с min и max через else if
                sumcol += arr[j][i];
            } else if (sumcol > max){
                max = sumcol;
                //запоминаю номер столбца максимального по сумме элементов
                indmax = i;
            } else if (sumcol < min){//запоминаю номер столбца максимального по сумме элементов
                min = sumcol;
                //запоминаю номер столбца минимального по сумме элементов
                indmin = j;
            }
        }
    }
    //меняю местами максимальный по сумме его элементов столбец и минимальный
    int s;
    for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            s = arr[j][indmin];
            arr[j][indmin]=arr[j][indmax];
            arr[j][indmax] = s;

        }
    }
    printf("\n");
    //вывожу получившийся двумерный массив пользователю
     for (int i=0; i < row; i++){
        for (int j=0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}