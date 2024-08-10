#include<stdio.h>
int main ()
{
int a=1;
while (a<=5){     //check condition then do
    printf("konichiwa! \n");
    a++;
}
int n,b=0;
printf("Enter the number till u want to print from 0 \n");
scanf("%d",&n);
while (b<=n){
    printf("%d \n",b);
    b++;
}
int m,i=1;
printf("Enter the number for what you want a table \n");
scanf("%d",&m);
while(i<=10){
    printf("%d \n",m*i);  
    i++;
}
int o,j;
printf("Enter the number for what you want a table \n");
scanf("%d",&o);
for(j=1;j<=10;j++){
    printf("%d \n",o*j);
}

int num9=0;
for(int num10 =5; num10<=50; num10++){
    num9 += num10;
}
printf("Sum from 5 to 50 is :%d \n" ,num9);

  return 0;  
}
  