#include<stdio.h>

typedef struct StdDetails{
    char stdName[100];
    int stdDob;
    int stdMarks;
}Stud;

int main(){
    Stud s1[5];
    printf("Enter details for 5 Student\n");
    for(int i=0; i<5; i++){
        printf("Enter name ,DOB,Marks for %d Student\n",i+1);
        fflush(stdin);
        gets(s1[i].stdName);
        scanf("%d", &s1[i].stdDob);
        printf("Now, Enter 5 Subject Marks");
        for(int j=0; j<5; j++){
        scanf("%d", &s1[i].stdMarks);
        }
    }

    for(i=0; i<5; i++){
        total
    }

    printf("\nValues are \n");
    for(int i=0; i<5; i++){
        printf("%s %d  ", s1[i].stdName, s1[i].stdDob);
            for(int j=0; i<5; i++){
        printf("%d  ",s1[i].stdMarks);
    }
    }

    return 0;
}