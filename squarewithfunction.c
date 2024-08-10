#include<stdio.h>

int calcsquare(int n);     //function declaration //prototype

int main(){
int n;
printf("Enter a side: ");
scanf("%d",&n);
printf("Square is :%d\n",calcsquare(n));  //function call //argument which is used to pass value


printf("%d",n);  //Changes to parameters in function don't change the values in calling function.



    return 0;
}

int calcsquare(int n){

return n * n ;       //function defination
                    //parameter which is used to return value

}