//To calculate the area of the circle using the given radius
//Yogeshwar G

#include<stdio.h>
const float PI = 3.14159; //Use of constant

int main()
{
     float radius, area;
     printf("Radius: ");
     scanf("%f",&radius);
     area = PI * radius * radius;
     printf("Area of the circle with %2.2f radius: %4.2f ",radius, area);
}