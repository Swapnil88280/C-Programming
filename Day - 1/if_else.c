#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a number");
    scanf("%d",&a);

    if(a>0)
    printf("You have entered a positive number");
    else if(a<0)
    printf("You have entered a negative number");
    else
    printf("You have entered 0");
}