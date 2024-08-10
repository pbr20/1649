#include<stdio.h>
int main ()
{
int marks[3];   //array that can store 3 varibles 

printf("Enter the PHY number\n");
scanf("%d" ,&marks[0]);       //storage serial counting start from 0

printf("Enter the CSE number\n");
scanf("%d",&marks[1]);

printf("Enter the EEE number\n");
scanf("%d" ,&marks[2]);

printf("Phy = %d, CSE = %d, EEE = %d \n",marks[0],marks[1],marks[2]);



    return 0;
}