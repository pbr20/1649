#include<stdio.h>

int main(){

char date[100] ={"17 March 2004"};

int day;
int year;
char month[25];

sscanf(date , "%d %s %d" ,&day ,month ,&year); //Read string value and assign them into int ,double ,float and char varrible
                                                //warning it stop assigning after space
printf("Day: %d\n",day);
printf("Month: %s\n",month);
printf("Year: %d\n",year);

    return 0;
}