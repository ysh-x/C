//Quadratic Roots
//Yogeshwar.G

#include<stdio.h>
#include<math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
     double a,b,c,d,r1,r2;
     int choice;
     do
     {

          printf("ax^2 + bx + c = 0\n");
          printf("A:");
          scanf("%lf",&a);
          printf("B:");
          scanf("%lf", &b);
          printf("C:");
          scanf("%lf", &c);
          d = (pow(b,2)-(4*a*c));
          if(d<0)
          {
               printf("Since the Discriminant is %5.2lf \nThe roots are imaginary\n",d);
          }
          else
          {
               r1 = ((-b + sqrt(d))/ (2 * a) );
               r2 = ((-b - sqrt(d)) / (2 * a));
               printf("Root One: %5.2lf\n",r1);
               printf("Root One: %5.2lf\n", r2);
          }
          printf("Want to calculate once more? (1/0)\n");
          scanf("%d",&choice);
     
     repeat:
     if(isdigit(choice) && choice==0)
          exit(0);
          else
          {
               printf("Want to calculate once more? (1/0)\n");
               scanf("%d", &choice);
               goto repeat;
          }
          
     } while (1);

}