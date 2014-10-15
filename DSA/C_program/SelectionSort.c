#include<stdio.h>
void main(){
    int a[] = {5,2,7,8,9,6};
    int i, j , min, temp;
    for(i = 0;i<6 -1;i++){
        min = i; //setting min as i

        for(j = i +1;j<6;j++){
            printf("THe value of i and j is %d %d\n", i,j);
            if(a[j]<a[min]){//if element at j is less than element min position
                min = j;    //then set min as j
            }
        }

        temp = a[i];
        a[i]=a[min];
        a[min] = temp;
    }


    int k ;
    for(k=0;k<6;k++){
        printf("%d ", a[k]);
    }

}

