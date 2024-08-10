#include<stdio.h>
#include<math.h>
float areaofsquare(float a);

float areaofcircle(float b);

float areaofrectangle(float d, float e);

int main()
{
    char s,o,r,ch;
printf("Enter s,o,r to calculate area of square, circle and rectangle respectively \n");
scanf("%c", &ch);
if(ch == 's'){
    float a;
    
    printf("Enter the side of square : \n");
    scanf("%f", &a);
    
    printf("Area of square is : %f \n", areaofsquare(a));
}

else if(ch == 'o'){
    float b;

    printf("Enter the radius of circle : \n");
    scanf("%f", &b);

    printf("Area of circle is : %f \n",areaofcircle(b));
}

else if(ch == 'r'){
    float d,e;

    printf("Enter the side a : \n");
    scanf("%f", &d);
    printf("Enter the side b : \n");
    scanf("%f", &e);

    printf("Area of rectangle is : %f \n" ,areaofrectangle(d , e));
}

else {
    printf("Sorry invalid character! \n");
}
    return 0;
}

float areaofsquare(float a){
  
   return a = pow(a , 2);
 }

float areaofcircle(float b){

    return 3.14 * (pow(b , 2));
}

float areaofrectangle(float d, float e){

    return d * e;
}

// type gcc filename.c -o filename -lm
// ./filename