//To calculate the sum of the harmonic series; (2.1 E.B ANSI C)
//Yogeshwar 

#include<stdio.h>

int main()
{
     int nValue;
     float sum = 1;
     int count = 2;
     printf("N: ");
     scanf("%d",&nValue);
     
     while(count<=nValue) //Looping till it hits the nValue
     {
          sum = sum + (1/count);
          count++;
     }
     count = 2; //resetting count

     printf("Series : 1 +");
     while(count<=nValue)
     {
          printf(" 1/%d + ",count);
          count++;
     }
     printf(" = %4.2f\n\n", sum);

     printf("Thus,Sum of the harmonic: %4.2f", sum);

}