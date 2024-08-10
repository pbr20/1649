#include<stdio.h>
#include<math.h>
int main()
{
double A;
double B;
double C;
printf("Enter side A:");
scanf("%lf",&A);
printf("Enter side B:");
scanf("%lf",&B);
C =(sqrt((A*A)+(B*B)));         //double sqrt(double) /// means take                                                            double value and gives double value 
                                //output     //input
                                //if the input value is int then it will convert it to double then it will give double value
                                
printf("Side c: %lf \n",C);
double d;
printf("Enter a number : \n");
scanf("%lf",&d);
printf("Ans : %lf\n" , pow(d , 3));    //double pow(double,double)
                                     //output   //input,input

double x; int y;
printf("Enter a number:");
scanf("%lf",&x);
printf("Enter a number:");
scanf("%d",&y);

//double n = 5.5%2;           //we can't modulus double value 
//printf("%.2lf\n",n);
      
                      //This is why we use fmod so we can modulus double value

double e = fmod(x , y);        //double fmod(double , double)
printf("e =%.2lf\n",e);



    return 0;
}

//Follow this procedures below when math.h library function is not included on your compiler

//procedure: 1

// type gcc filename.c -o filename -lm
// ./filename

//procedure: 2

//type gcc filename.c -lm
//./a.out