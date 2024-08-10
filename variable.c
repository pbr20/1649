#include<stdio.h>
int main()
{

int number =8;
printf("Your number is %d \n",number);
char star='*';
printf("You got %c \n",star);
float pi=3.14;
printf("The value of pi is %f \n",pi);
int _age=34;
printf("Your age is %d \n",_age);
_age=36;
printf("After two years your age is %d \n",_age);
printf("Enter your information \n");
int age,age1;
printf("How old are you? \n");
scanf("%d", &age);
printf("You are %d years old \n",age);
printf("How old is your sister?\n");
scanf("%d", &age1);
printf("Your sister is %d years old \n",age1);
printf("The sum of you and your sister age is %d years old \n" ,age + age1);


printf("The subtraction of you and your sister age is %d years old \n" ,age - age1);
printf("The quotient of you and your sister age is %d years old \n" ,age / age1);
printf("The modular of you and your sister age is %d years old \n" ,age % age1);
char name[20];
printf("Enter your name \n");
scanf("%s", name);
printf("Hi %s you are %d years old \n", name,age);
char name1 [20];
printf("What's your sister name? \n");
scanf("%s",name1);
printf("Your sister %s is %d years old \n", name1,age1);
printf("Bye %s \n",name);


return 0;

}   