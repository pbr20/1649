#include<stdio.h>

int main(){

int a = 5;
float b= 2.00;
double pi = 3.141592;

char str[100];

sprintf(str , "a = %d \nb = %.2f \npi = %.6lf \n" , a ,b ,pi);  //to format int,float and double value to string

printf("%s",str);



    return 0;
}