#include<stdio.h>

int main(){

FILE *fptr;

int n;
char ch;

fptr = fopen("c10p1.txt" , "r");

if(fptr == NULL){
    printf("File doesn't exist\n");
}
   else{
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        fscanf(fptr , "%d" , &n);
        printf("%d\n",n);
        }
    
    printf("\n");

fclose(fptr);




    return 0;
}