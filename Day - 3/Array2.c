#include<stdio.h>
#include<malloc.h>
int main(){

    int *arr,elements,i,j;
    printf("\nEnter how many elements you want to enter\n");
    scanf("%d",&elements);

    arr=(int*)calloc(elements,sizeof(int));

    printf("\nEnter elements\n");
    for(i=0;i<elements;i++){
        // scanf("%d",&arr[i]);
        scanf("%d",&(*(arr+i)));
    }

    printf("\nValues are\n");
    for(i=0;i<elements;i++){
        // printf("   %d",arr[i]);
        printf("   %d",*(arr+i));
    }

    printf("\nAddresses are\n");
    for(i=0;i<elements;i++){
        printf("   %d",&(*(arr+i)));
    }


    free(arr);

    return 0;
}