//SumOfDigits

#include<stdio.h>
int sumOfDigits(int);

int main()
{
     int number, sum;
     printf("Number:     ");
     scanf("%d",&number);
     sum = sumOfDigits(number);
     printf("%d\n",sum);
}

int sumOfDigits(int number)
{
     int  count, dig, sum;
     sum  = 0;
     while (number > 0)
     {
          dig = number % 10;
          sum = sum + dig;
          number = number / 10;
     }

     return sum;
}