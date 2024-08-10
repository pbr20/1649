#include<stdio.h>
#include<math.h>
int main ()
{
    //chapter 2
    
//Type conversation valid
printf("sum of 2 & 3 : %d \n", 2 + 3);
printf("sum of 2.0 & 3 : %f \n", 2.0 + 3);
printf("sum of 2.0 & 3.0 : %f \n", 2.0 + 3.0);

/* invalid

printf("sum of 2.0 & 3 : %d", 2.0 + 3);*/

// (int) To convert float value into integer value forcefully by compiler

// (double) To convert int value into double value forcefully by compiler

int a = (int) 1.9999999;
printf("%d \n", a);

double b = (double) 5;
printf("%.2lf\n",b);

    return 0;
}