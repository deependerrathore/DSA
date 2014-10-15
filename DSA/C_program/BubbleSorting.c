#include<stdio.h>
void main(){
    int a[] = {2,10,600,200,800,0,7,5,6};
    int i , j , temp;

    for(i=0;i<7;i++){
        for(j=0;j<7-i-1;j++){
            printf("The value of i and j is %d %d\n",i,j);
            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] =temp;
            }
        }
    }

    int k;
    for(k = 0;k<7;k++){
        printf("%d ", a[k] );
    }
}
