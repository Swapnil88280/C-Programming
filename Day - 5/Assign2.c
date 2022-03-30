#include <stdio.h>

//declaraction of structure
typedef struct Employee{
    char name[100];
    int empId;
    double salary;
    double hra;

}EMP;
void showEmployeeDetails(EMP);
EMP acceptValues();
int main(){
    //How to create structure variable
    struct Employee p1;
    p1=acceptValues();
    showEmployeeDetails(p1);
    return 0;
}

void showEmployeeDetails(EMP s1){
    printf("Employee Details %s  %d   %lf  %lf \n",s1.name,s1.empId,s1.salary,s1.hra);
}

EMP acceptValues(){
    int records;
    EMP e1;
    printf("Enter N number of Employee with details\n");
    scanf("%d",&records);

    for(int i=0; i<records; i++){
    printf("Enter name,empId,salary,hra for the %d employee\n",i);
    gets(e1.name);
    scanf("%d",&e1.empId);
    fflush(stdin);
    scanf("%lf",&e1.salary);
    scanf("%lf",&e1.hra);
    }

    return e1;
}
