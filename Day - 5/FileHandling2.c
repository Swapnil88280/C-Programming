#include<stdio.h>

int main(){
      FILE *fp;
    fp = fopen("D:\\NSEIT\\FileHandling\\myFile2.txt","w");
    fputs("Welcome to C programming",fp);
    fclose(fp);

}