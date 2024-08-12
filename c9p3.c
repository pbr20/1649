                    //storing complex numbers and displaying them with arrows

#include<stdio.h>

typedef struct complexnumber{
    int real;
    int img;
}complex;

int main(){

complex n1 ={5 , 4};
complex *ptr = &n1;

printf("Real part :%d\n",ptr->real);
printf("Img part :%d\n",ptr->img);


    return 0;
}
