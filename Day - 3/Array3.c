#include<stdio.h>
#include<malloc.h>

int main(){

    int **arr,rows,cols,i,j;
    printf("\nEnter rows and cols for the array\n");
    scanf("%d%d",&rows,&cols);

    arr=(int**)calloc(sizeof(int*),rows); //allocation for number of rows
    for(i=0;i<rows;i++){
        *(arr+i)=(int*)calloc(sizeof(int),cols); //allocation for number of cols
    }

    printf("\nEnter %d  elements",rows*cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            // scanf("%d",&arr[i][j]);
            scanf("%d",&(*(*(arr+i)+j)));

        }
    }

    // printf("\nValues are \n");
    // for(i=0;i<rows;i++){
    //     for(j=0;j<cols;j++){
    //         printf("   %d",(*(*(arr+i)+j)));
    //     }
    //     printf("\n");
    // }

    printf("\nAddress of first element %u\n",&(*(arr+0)));
    printf("\nAddress of first row %u\n",arr);
    printf("\nAddress of first complete element %u\n",&(*(arr)));


    printf("\nAddress of second element %u\n",*(arr+1));
    printf("\nAddress of second row %u\n",arr+1);
    printf("\nAddress of second complete element %u\n",*arr+1);

    for(i=0;i<rows;i++){
      free(*(arr+i));
    }
    free(arr);

    return 0;
}