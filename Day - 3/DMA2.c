#include<stdio.h>
#include<malloc.h>

int main(){
    int rows,cols,i,j;
    int **arr;

    printf("\nEnter rows and cols for the array\n");
    scanf("%d%d",&rows,&cols);

    arr=(int**)calloc(sizeof(int*),rows); //allocation for number of rows
    for(i=0;i<rows;i++){
        arr[i]=(int*)calloc(sizeof(int),cols); //allocation for number of cols
    }

    printf("\nEnter %d  elements",rows*cols);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    showValues(arr,rows,cols);

    for(i=0;i<rows;i++){
      free(arr[i]);
    }
    free(arr);
    return 0;
}

void showValues(int **p,int rows,int cols){
    int i,j;
    printf("\nValues are \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("   %d",p[i][j]);
        }
        printf("\n");
    }
  
}