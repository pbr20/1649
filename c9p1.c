                        //multiple address info with structure

#include<stdio.h>

typedef struct address {
int houseno;
int block;
char city[100];
char state[100];
} ad;

void printinfo(ad add, int n);

int main(){

ad add[5];

printf("Enter address for 1st person:\n");
scanf("%d",&add[0].houseno);
scanf("%d",&add[0].block);
scanf("%s",add[0].city);
scanf("%s",add[0].state);

printf("Enter address for 2nd person:\n");
scanf("%d",&add[1].houseno);
scanf("%d",&add[1].block);
scanf("%s",add[1].city);
scanf("%s",add[1].state);

printf("Enter address for 3rd person:\n");
scanf("%d",&add[2].houseno);
scanf("%d",&add[2].block);
scanf("%s",add[2].city);
scanf("%s",add[2].state);

printf("Enter address for 4th person:\n");
scanf("%d",&add[3].houseno);
scanf("%d",&add[3].block);
scanf("%s",add[3].city);
scanf("%s",add[3].state);

printf("Enter address for 5th person:\n");
scanf("%d",&add[4].houseno);
scanf("%d",&add[4].block);
scanf("%s",add[4].city);
scanf("%s",add[4].state);

printinfo(add[0],1);
printinfo(add[1],2);
printinfo(add[2],3);
printinfo(add[3],4);
printinfo(add[4],5);

    return 0;
}

void printinfo(ad add ,int n){
    
    printf("%d) House no: %d\nBlock: %d\nCity: %s\nState: %s\n",n, add.houseno,add.block,add.city,add.state);
    
}