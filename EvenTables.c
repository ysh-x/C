//Even tables
//Yogeshwar

#include<stdio.h>

int main()
{
     int bValue;
     int nValue;

     printf("Begin: ");
     scanf("%d",&bValue); //Start value
     printf("End: ");
     scanf("%d",&nValue); // End Value

     if(bValue%2!=0) //If Begin is odd, Change to even by +1
     {
          bValue = bValue + 1;
     }

     printf("Even numbers from %d - %d\n\n",bValue ,nValue);
     while(bValue<=nValue) //Looping till it hits the end
     {
          printf("%4d\t", bValue);
          if(bValue%20==0) // Printing the rows till it hits the multiple of 20
          {
               printf("\n");
          }
          bValue = bValue + 2;
     }
}