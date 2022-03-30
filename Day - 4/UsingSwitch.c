#include<stdio.h>
#include<string.h>

int main(){
    char str1="Hello";
    char str2="World";
    int ch;

    switch (ch)
    {
        case(ch==1):
        strcpy(str1,str2);
        printf("%s",str1);
        break;
        case(ch==2):
        if(strcmp(str1,str2)<0)
            printf("\nstr1 < str2 ");
        else if(strcmp(str1,str2)>0)
            printf("\nstr1 > str2 ");
        else
            printf("\nBoth are equal ");
    
    default:
    printf("Wrong selection");
        break;
    }
}