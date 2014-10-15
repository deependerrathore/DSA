#include<stdio.h>
void main(){
    int a[] = {5,1,6,2,4,3,7};
    int i , j , temp;

    for(i=0;i<7;i++){
        int flag = 0 ;      //taking a flag variable
        for(j=0;j<7-i-1;j++){



            printf("The value of i and j is %d %d\n",i,j);

            if(a[j]> a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] =temp;
                flag = 1;       //setting flag as 1 , if swapping occurs
            }
        }
        if(!flag){              //breaking out of for loop if no swapping takes place
            break;
        }
    }

    int k;
    for(k = 0;k<7;k++){
        printf("%d ", a[k] );
    }
}
