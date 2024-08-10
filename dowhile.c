#include<stdio.h>
int main()
{
int i=1;
do {
    printf("%d \n",i);  //do then check condition
    i++;
}while(i<1);

int j=5;
do{
    printf("%d \n",j);
    j--;
}while(j>=1);

int n, k=0,sum=0;
printf("Enter the number till u wanna add \n");
scanf("%d",&k);
do{
    sum=sum+n;
    n++;
}
while(n<=k);
printf("Sum is %d \n",sum);
i=n;     //n=21 do first ,then condition
do{
    printf("%d \n",i);
    i--;
}while(i>=1);

//practice q 17
//Keep taking number as input from user 
//untill user enters an odd number

int y;

do{
    printf("Enter a number : \n");
    scanf("%d",&y);
    
    if(y % 2 != 0){
        break;
    }
    printf("%d \n");
}while(1);
printf("End! \n");


//practice q 18
//Keep taking number as input from user 
//untill user enters a number which is multiple of 7

int num;
do {
    printf("Enter a number : \n");
    scanf("%d",&num);
    if(num % 7 == 0){
        break;
    }
    printf("%d \n",num);
}while(1);

printf("Thank you (; \n");
    return 0;
}