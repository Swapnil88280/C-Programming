

#include<stdio.h>

int main(){
    int n,temp,num1,num2,num3,num4;
    printf("Enter a four digit number\n");
    scanf("%d",&n);
    temp=n;

    num1=n%10;
    n=n/10;

    num2=n%10;
    n=n/10;

    num3=n%10;
    n=n/10;

    printf("values are %d %d %d %d\n",num1,num2,num3,n);
    printf("Addition of number is %d",num1+num2+num3+n);

    return 0;
}