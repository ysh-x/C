#include<stdio.h>

#define PERIOD 10
#define  PRINCIPAL 5000

int main()
{
     int year;
     float amount, value, inrate;
     amount = PRINCIPAL;
     inrate = 0.11;
     year = 0;

     while(year<=PERIOD)
     {
          printf("%2d |  %7.2f\n",year,amount);
          value = amount + inrate * amount;
          year = year + 1;
          amount = value;
     }
}