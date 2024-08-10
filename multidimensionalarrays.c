#include<stdio.h>
int main(){
int mark[2][3];
printf("PHY 1: ");
scanf("%d",&mark[0][0]);
printf("EEE 1: ");
scanf("%d",&mark[0][1]);
printf("CSE 1: ");
scanf("%d", &mark[0][2]);

printf("PHY 2: ");
scanf("%d",&mark[1][0]);
printf("EEE 2: ");
scanf("%d",&mark[1][1]);
printf("CSE 2: ");
scanf("%d", &mark[1][2]);

printf("Phy1: %d \n",mark[0][0]);
printf("Phy2: %d \n",mark[1][0]);

int ar[2][2] = {{2,3},{4,5}};  //declare

printf("Four :%d \n",ar[1][0]); //access
    return 0;
}