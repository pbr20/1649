#include<stdio.h>
int main()
{

int a=8;
int b=2;
a+=b; //a=8      a=a+b;
printf("%d \n",a);
a-=b; //a=10     a=a-b;
printf("%d \n",a);
a*=b; //a=8      a=a*b;
printf("%d \n",a);
a/=b; //a=16     a=a/b;
printf("%d \n",a);
a%=b; //a=8      a=a%b;
printf("%d \n",a);


   return 0; 
}