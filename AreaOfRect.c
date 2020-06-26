//3.4 EBG
//Calculate area and perimeter of the rectangle
#include<stdio.h>

double Area (double, double);
double Perimeter(double, double);
int main()
{
     double length, breadth, area, perimeter;
     printf("Length:     ");
     scanf("%lf",&length);
     printf("Breadth:     ");
     scanf("%lf", &breadth);
     area = Area(length,breadth);
     perimeter = Perimeter(length,breadth);
     printf("Area:  %3.4lf\n",area);
     printf("Perimeter:  %3.4lf\n", perimeter);
}

double Perimeter(double length, double breadth)
{
     return (double)(2 * (length + breadth));
}

double Area(double length, double breadth)
{
     return (double)(length * breadth);
}