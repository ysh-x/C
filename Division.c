//Float Division
// Yogeshwar

#include<stdio.h>

typedef  double numbers;

int main()
{
     numbers one, two, result;
     printf("Number One: ");
     scanf("%lf",&one);
     printf("Number Two: ");
     scanf("%lf", &two);

     if(two==0)
     {
          printf("\nTERMINATED: DIV BY ZERO \n\n");
     }

     else
     {
          {
               result = one/two;
               printf("%lf / %lf = %4.7f",one, two,result);
          }
     }
     
}
