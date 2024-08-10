#include<stdio.h>
int main()
{
    int a;
printf("Enter the number \n");
scanf("%d" ,&a);

for(int i=2; i<a; i++){
    if(a % i == 0){
       printf("Not a prime number \n");
        break;
    }
    else {
        printf("Prime number \n");
        break;
    }
}

int b,d;
printf("Enter the range to check prime number \n");
printf("From : \n");
scanf("%d" , &b);
printf("to : \n");
scanf("%d" , &d);
for(int j=b; j<=d; j++){
    for (int k=2; k<=j; k++){
        if(j % k == 0){
            break;
        }
        else{
            printf("%d \n",j);
            break;
        }
    }

}









    return 0;
}