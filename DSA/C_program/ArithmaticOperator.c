//Using Arithmetic Operator
//if we have two int variable than in division operation it only show integer.
//To get the decimal result we have to use FLOAT OR DOUBLE
// "%lf " for double

#include<stdio.h>
int main5(){
    long long int  a , b  ;
    printf("Enter a:");
    scanf("%lld",&a);
    printf("Enter b:");
    scanf("%lld",&b);

    int add = a + b;
    int sub = a - b;
    long long int multi = a * b;
    int quotiient = a/ b;
    int rem = a % b;
    //% is used for place holder ie why we use  %% in modulo
    printf("add is %d \nsub is %d\nmulti is %lld \ndivision is %d \nreminder ie a%%b %d \n",add , sub , multi , quotiient , rem);


}
