                        //calculating sum of two vectors with structure

#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}v;

void sumofv(v v1, v v2, v sum);

int main(){

v v1 ={2 ,4};
v v2 ={8 ,6};
v sum ={0};         //asign null value or 0 in every data types of structure

sumofv(v1,v2,sum);




    return 0;
}


void sumofv(v v1, v v2, v sum){
   sum.x = v1.x + v2.x;
   sum.y = v1.y + v2.y;

   printf("Sum of vector = %di^ + %dj^\n",sum.x,sum.y);
}