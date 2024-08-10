#include<stdio.h>

int fact(int n);

int main(){

int n;

printf("Enter number:");
scanf("%d",&n);
printf("Factorial of %d is : %d\n",n,fact(n));   

    return 0;
}
int fact(int n){

if(n == 0){   // we can put n == 1 to break the funtion but still we have to return 1

    return 1;       /*we have to return 1 instead of 0 coz if we 
                      return 0 then it will multiply 0 with whole 
                      factorial that will coz to give the ans 0 everytime!!*/
}

int factNm1 = fact(n-1);   //recursion funtion // this is where funtion call itself agian and again till the function break 
int factN = factNm1 * n;

return factN;

}