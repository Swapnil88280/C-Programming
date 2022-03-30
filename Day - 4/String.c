#include<stdio.h>
#include<string.h>

int main(){

    char c5[100];

    printf("Enter String\n");
    fgets(c5,sizeof(c5),stdin);
    printf("String is %s",c5);
    puts(c5);


    // char str1[]="Hello";
    // char str2[]="World";
    // char str3[50];
    // int len;

    // strcpy(str2,str1);
    // printf("\nStrcpy %s",str2);

    // len=strlen(str2);
    // printf("\nStrlen %d",len);

    //     if(strcmp(str1,str2)<0)
    //         printf("\nstr1 < str2 ");
    //     else if(strcmp(str1,str2)>0)
    //         printf("\nstr1 > str2 ");
    //     else
    //     printf("\nBoth are equal ");
}
