#include<stdio.h>
int main()
{



for(int a=10; a>=0; a=a-1){
    printf("%d \n",a);
}

for (int b=0; b<=10; b=b+1){
    printf("%d \n",b);
}
//increament operator
//++i (pre increament operator)
//i++ (post increament operator)


int i=1 ;

printf("%d \n" ,i++);   //use , then increase 
printf("%d \n",i);

printf("%d \n" ,++i);   //increase , then use i=2
printf("%d \n",i);

//decrement operator
//--i (pre decrement operator)
//i-- (post decrement operator)

printf("%d \n" ,i--);   //use ,then decrease  i=3
printf("%d \n",i);

printf("%d \n",--i);    //decrease , then use i=2
printf("%d \n",i);

for (float c=0.0; c<=10.0; c++){
    printf("%f \n",c);
}

for (char ch='a'; ch<='z'; ch++){
    printf("%c \n",ch);
}

// Infinite loop


/* for (int k=1; ; k++){
    printf("PBR");   //It will print infinty times till your memory is full
}
*/

int sum=0,n;
printf("Enter the number till you wanna add");
scanf("%d",&n);
for(int m=1,o=n; m<=n && o>=1; m++, o--){
    printf("%d \n",o);
    sum =sum+m;
}
printf("Sum is %d \n",sum);
 
 //         BREAK Statement
 //        use to exit the loop
 //      warning!! break will close the whole nested loop no matter where we use it!

 for(int z=1; z<=10; z++){
    if (z==5){
        break;
    }
    printf("%d \n",z);
 }
printf("End! \n");

//         CONTINUE Statement
//       skip to next iteration

int num1;

for(num1=1; num1<=5; num1++){
    if(num1 == 3){
        continue;   //skip 3 
    }
    printf("%d \n",num1);
}

int num2;

for(num2=1; num2 <=10; num2++){
    if(num2 == 6){
        continue;
    }
    printf("%d \n",num2);
}

int num3;

for(num3=5; num3<=50; num3++){
    if(num3 % 2 != 0) //odd number
    {
    printf("%d \n" ,num3);
    }
}

int fact=1, p;
printf("Enter the number to get its factorial \n");
scanf("%d" ,&p);
for (int q=1; q<=p; q++){
fact = fact * q;
}
printf("Factorial is :%d \n",fact);

int facto=1, num6;
printf("Enter the number to get its factorial \n");
scanf("%d" ,&num6);
for (int num5=1; num5<=num6; num5++){
facto = facto * num5;
}
printf("Factorial is :%d \n",facto);

int num7;
printf("Enter the number you want table for in reverse order \n");
scanf("%d",&num7);
for(int num8=1; num8<=10; num8++){
    int num9= num7 * num8;
    printf("%d \n",num9);
}
    return 0;
}