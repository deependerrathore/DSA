#include<stdio.h>
void main6(){
    int number,temp ,sum =0, remainder;
    printf("Enter the number: ");
    scanf("%d",&number);

    temp = number;
    while(temp != 0 )
    {

        remainder = temp % 10;
        sum = sum + remainder * remainder * remainder;
        temp = temp / 10;
    }

    if(sum == number){
        printf("The number is armastrong number.");
    }else{
        printf("The number is not an armstrong number.");
    }
}
