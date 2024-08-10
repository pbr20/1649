#include<stdio.h>

void mnum(int *a , int *b);

int main(){

int a = 5; int b = 3;

mnum(&a ,&b);
printf("Maximum number is %d \n",b);



    return 0;
}

void mnum(int *a , int *b){
    if(*a>*b){
        int t = *a;
        *a = *b;
        *b = t;
    }
    else if(*a<*b){}
    else{
        printf("Equal number \n");
    }
}