//Finding Roots of Quadratic Equation
#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,d,r1,r2;
    printf("Enter the Coefficent of x^2 : ");
    scanf("%f",&a);
    printf("Enter the Coefficent of x : ");
    scanf("%f",&b);
    printf("Enter the value of c : ");
    scanf("%f",&c);
    if(a==0){
        printf("Invalid Inputs.");
    }else{
        d=(b*b-4*a*c);
        if (d>0){
            printf("Roots are Real & Distinct.\n");
            r1 = (-b+sqrt(d))/(2*a);
            r2 = (-b-sqrt(d))/(2*a);
            printf("Root 1 : %f \n",r1);
            printf("Root 2 : %f \n",r2);
        }else if(d< 0){
            printf("Roots are Distinct & Imaginary\n");
            r1 = -b/2*a;
            r2 = sqrt(fabs(d))/2*a;
            printf("Root 1 : %f + i%f \n",r1,r2);
            printf("Root 2 : %f - i%f \n",r1,r2);
        }else{
            printf("Roots are Real & Equal.\n");
            r1=r2=(-b+sqrt(d))/(2*a);
            printf("Root 1 : %f \n",r1);
            printf("Root 2 : %f \n",r2);
        }
    }
}