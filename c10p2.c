#include<stdio.h>




int main(){


FILE *fptr;

int count=0;
char confirmation;

char name[100];
int age;
double cgpa;

fptr = fopen("c10p2.txt" , "a");

while(count<=100){

printf("Do you want to enter student's info (Y/N):");
scanf(" %c",&confirmation);
getchar();

        if(confirmation == 'Y'){

        printf("Enter your name\n");
        fgets(name , 100 ,stdin);
        fprintf(fptr , "Name:");
        fputs(name , fptr);
        
        printf("Enter your age\n");
        scanf("%d",&age);
        fprintf(fptr , "Age: %d\n" ,age);

        printf("Enter your cgpa\n");
        scanf("%lf",&cgpa);
        fprintf(fptr , "CGPA: %.2lf\n\n" ,cgpa);

        
    }
    else if(confirmation == 'N'){
        printf("Farewell\n");
        break;
    }
    else{
        printf("Invalid character\n Pleaae enter Y or N");
        continue;
    }

}





    return 0;
}