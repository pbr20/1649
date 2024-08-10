#include<stdio.h>

void printnum(int num[], int n);

void printchar(char *num, int n);

int main()
{
int num[] = {1, 2, 3, 4, 5, 6};
printnum(num, 6);

char ch[] = {'a', 'b', 'e' ,'g', 'h', 'i'};
printchar(ch, 6);

    return 0;
}

void printnum(int num[], int n){    //array in funtion is always call by reference
    for(int i=0; i<n ; i++){
        printf("Numbers %d \t", num[i]);
    }
    printf("\n");
}

void printchar(char *num, int n){
    for(int i=0; i<n; i++){
       printf("Char %c \t",num[i]);
    }
    printf("\n");
}