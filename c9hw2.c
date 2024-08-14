                //cgpa storing and calculating

#include<stdio.h>
#include<string.h>
typedef struct information{
    char name[100];
    char department[100];
    int id;
    char scgpa[10];
    
}info;

typedef struct cgpacalculation{
    float gpa;
    float credithour;   
    
}cgpa;



int main(){
info in[100];
cgpa cg[1000];
float tcrep = 0;
float tcreh = 0;
double cgpa;


float crep =0;
int count =0;
char confirmation;
char confirmation1;

printf("BLOCK LETTER\n");

while(count<100){
    printf("Do you want to enter student's information (Y/N) :");
    scanf(" %c",&confirmation);
    getchar();

    if(confirmation == 'Y'){
        printf("Enter your name: ");
        scanf("%s",&in[count].name);
        printf("Enter your department: ");
        scanf("%s",&in[count].department);
        printf("Enter your ID: ");
        scanf("%d",&in[count].id);
       
        printf("Do you want to calculate your gpa?(Y/N)");
        scanf(" %c",&confirmation1);
        getchar();

        if(confirmation1 == 'Y'){
            
                printf("Welcome to cgpa calculator\n");

for(int i=(count*8); i<((count*8)+8); i++){
    printf("\nEnter your gpa for semster %d: ",(i+1));
    scanf("%f",&cg[i].gpa);
    printf("Enter credit hour for semester %d: ",(i+1));
    scanf("%f",&cg[i].credithour);
   
    crep = cg[i].gpa * cg[i].credithour;
    
    tcrep = tcrep + crep;
    tcreh = tcreh + cg[i].credithour;
}
cgpa = tcrep / tcreh;

sprintf(in[count].scgpa, "%.2lf" ,cgpa); //format the double or int value as string value



        }
        else if(confirmation1 == 'N'){
          strcpy(in[count].scgpa , "0.00");
        }
        else{
            printf("Invalid input.\n Please enter Y or N\n");
            continue;
        }

        count ++;

    }
        else if(confirmation == 'N'){
            printf("GOODBYE\n\n");
            break;
    }
        else{
            printf("Invalid input.\n Please enter Y or N\n");
            continue;
    }
}



for(int i=0; i<count; i++){
    printf("%d) Post: STUDENT Department: %s Name: %s ID: %d CGPA: %s\n",(i+1),in[i].department,in[i].name,in[i].id,in[i].scgpa);
}



    return 0;
}

