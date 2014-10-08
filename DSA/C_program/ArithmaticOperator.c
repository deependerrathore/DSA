//Using Arithmetic Operator
//if we have two int variable than in division operation it only show integer.
//To get the decimal result we have to use FLOAT OR DOUBLE
// "%lf " for double
#include<stdio.h>
int main(){
    int a , b  ;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);

    int add = a + b;
    int sub = a - b;
    int multi = a * b;
    int quotiient = a/ b;
    int rem = a % b;
    //% is used for place holder ie why we use  %% in modulo
    printf("add is %d \nsub is %d\nmulti is %d \ndivision is %d \nreminder ie a%%b %d \n",add , sub , multi , quotiient , rem);


}
