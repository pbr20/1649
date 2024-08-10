#include<stdio.h>
int main()
{
float price[3];   //Price with VAT

printf("Enter prices for three products\n");
scanf("%f",&price[0]);
scanf("%f",&price[1]);
scanf("%f",&price[2]);

printf("Total price for first product :%f \n",price[0] + price[0]*0.18);
printf("Total price for second product :%f \n",price[1] + price[1]*0.18);
printf("Total price for third product :%f \n",price[2] + price[2]*0.18);

//Inititalization of Array

float price1[] = {100 , 200 , 300};

//float price1[3] = {100 , 200 , 300}; we can also declare number of variable storage but its not wrong if we don't

printf("Total price for first product :%f \n",price1[0] + price1[0]*0.18);
printf("Total price for second product :%f \n",price1[1] + price1[1]*0.18);
printf("Total price for third product :%f \n",price1[2] + price1[2]*0.18);
    return 0;
}