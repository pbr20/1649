    //Two numbers - a & b, are written in a file. Write a programme to replace them with their sum 

#include<stdio.h>

int main(){

FILE *fptr;

int a,b;
int sum;

fptr = fopen("c10p4.txt" , "r");

fscanf(fptr , "%d" , &a);
fscanf(fptr , "%d" , &b);

sum = a + b;

fclose(fptr);

fptr = fopen("c10p4.txt" , "w");

fprintf(fptr , "%d" , sum);

fclose(fptr);

    return 0;
}