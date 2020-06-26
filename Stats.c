//To calculate various stats for a series of numbers

#include<stdio.h>

double sum(int[],int);
double avg(int[],int);
int small(int[],int);
int large(int[],int);

int main()
{
     int num[10];
     int length;
     double Sum,average;
     int i;

     printf("Number of Elements:        ");
     scanf("%d",&length);
     for(i=0;i<length;i++)
     {
          printf("Element[%d]:     ",(i+1));
          scanf("%d",&num[i]);
     }
     Sum = sum(num,length);
     average = avg(num,length);
     printf("Sum of the list:                %lf\n",Sum);
     printf("Average of the list:             %lf\n",average);
     printf("Biggest number in the list:     %d\n",large(num,length));
     printf("Smallest number in the list:     %d\n", small(num, length));
}

double sum(int numbers[], int length)
{
     double sum;
     int i;
     sum = 0;
     for(i=0;i<length;i++)
     {
          sum = sum +  numbers[i];
     }
     return sum;
}
double avg(int numbers[], int length)
{
     double sum;
     int i;
     sum = 0;
     for (i = 0; i < length; i++)
     {
          sum = sum + numbers[i];
     }
     return sum/length;
}

int large(int number[],int length)
{
     int i;
     int max = 0;
     for(i=0;i < length;i++)
     {
          if(number[i]>max)
          {
               max = number[i];
          }
     }
     return max;
}
int small(int number[], int length)
{
     int i;
     int min = number[0];
     for (i = 0; i < length; i++)
     {
          if (number[i] < min)
          {
               min = number[i];
          }
     }
     return min;
}