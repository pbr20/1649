#include<stdio.h>

int fibo(int n);

int main (){

int n;
printf("Enter the term for the fibonacci number : ");
scanf("%d",&n);
printf("Fibonacci number for %dth term is : %d \n",n,fibo(n));
    
    return 0;
}

int fibo(int n){
if (n == 0){
    return 0;
}
if (n == 1){
    return 1;
}
    int fiboNM1 = fibo(n-1);
    int fiboNM2 = fibo(n-2);
    int fiboN = fiboNM1 + fiboNM2;
}

