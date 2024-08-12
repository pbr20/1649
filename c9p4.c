                    //storing bank acc info with structure and making an alias

#include<stdio.h>

typedef struct bankaccount{
    char name[100];
    int accno;
}acc;

int main(){

acc a1 ={"PBR" , 20};
acc a2 ={"PSP" , 03};
acc a3 ={"FASP" , 04};

printf("Account name: %s Account no: %d\n",a1.name,a1.accno);



    return 0;
}