#include<stdio.h>//link section
#include <math.h>

int main()//main function
{
float p,a,v1,u1,angle;
float workDone;
printf("Enter the density of fluid of jet:");
scanf("%f",&p);
printf("Enter the area of jet:");
scanf("%f",&a);
printf("Enter the velocity of jet at inlet:");
scanf("%f",&v1);
printf("Enter the velocity of plate at inlet");
scanf("%f",&u1);
printf("Enter the angle b/w relative velocity and plate at outlet:");
scanf("%f",&angle);
workDone = (p*a*v1)*(v1-u1)*(1+cos((angle*22)/1260));
printf("The Work Done per second by Jet is: %f",workDone);
return 0;
}