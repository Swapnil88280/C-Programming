

#include<stdio.h>

int main(){
    int a,b,c,x;
    printf("Enter a number\n");
    scanf("%d",&a);

    x=a%10;
    a=a/10;
    b=a%10;
    c=a/10;

    if(x==c)
    printf("It is Palindrom");
    else
    printf("It is NOT Palindrom");
}