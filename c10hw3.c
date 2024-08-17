             //Format the information of 5 students (name, marks, cgpa, course) in a table like structure in a file.

#include<stdio.h>

typedef struct studentinfo{
    char name[100];
    int marks;
    double cgpa;
    char course[100];
}info;

int main(){

FILE *fptr;
info in[5];

int n = 0;

fptr = fopen("c10hw3.txt" ,"a");

while(n<5){
    printf("Enter information for the student no:%d\n",(n+1));
    
    printf("Name: ");
    fgets(in[n].name , sizeof(in[n].name) , stdin);
   
    printf("Marks: ");
    scanf("\n%d",&in[n].marks);

    printf("CGPA: ");
    scanf("\n%lf",&in[n].cgpa);
    
    printf("Course: ");
    getchar();
    fgets(in[n].course , sizeof(in[n].course) , stdin);
n++;
}

for(int i=0; i<5; i++){
    fprintf(fptr , "%d)Name: %sMarks: %d\nCGPA: %.2lf\nCourse: %s\n\n" , (i+1) ,in[i].name,in[i].marks,in[i].cgpa,in[i].course);
}

fclose(fptr);
    return 0;
}