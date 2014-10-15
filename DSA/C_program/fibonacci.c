#include<stdio.h>
void main(){
    int n,first = 0 ,second = 1,c,next;

    printf("Enter the number\n");
    scanf("%d",&n);

    for(c = 0;c<n;c++){
        if(c<=1){
            next = c;
        }else{
            next = first +second;
            first = second;
            second = next;
        }
        printf("%d\n",next);
    }

}
