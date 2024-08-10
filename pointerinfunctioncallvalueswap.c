#include<stdio.h>

void swap (int a , int b);
void _swap (int* a , int* b );

int main()
{
int x=3; int y=5;
swap(x ,y);
printf("x is %d and y is %d \n",x,y);        //all the defination in pointersinfunctioncall1.c

_swap(&x , &y);
printf("x is %d and y is %d \n",x,y);




    return 0;
}
//call by value
void swap(int a , int b){

    int t =a;
    a=b;
    b=t;

    printf("a is %d and b is %d \n",a,b);
}
//call by reference
void _swap(int  *a , int *b){
    int t= *a;
    *a = *b;
    *b= t;

    printf("a is %d and b is %d \n",*a,*b);
}