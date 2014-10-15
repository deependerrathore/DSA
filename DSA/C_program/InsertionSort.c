#include<stdio.h>
void main9(){
    int a[] = {4,5,8,7,3,2};
    int i,j,key;

    for(i = 1;i<=6;i++){
        key = a[i];

        j= i -1;
        while( j >= 0 && key < a[j] ){
            printf("The value of i and j is %d %d \n", i , j);
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    int k;
    for(k = 0;k<6;k++){
        printf("%d ", a[k]);
    }
}
