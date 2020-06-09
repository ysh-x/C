//To calculate the average marks for a given student
//Yogeshwar

#include<stdio.h>
#define NO 5 //Using DEFINE to define the total subjects
typedef float marks; //Using typedef to create our own datatype

int main()
{
     marks mark[6];
     int count = 1;
     float sum = 0;
     float average = 0;
     printf("Marks of (5) Subjects: \n");
     while(count<=NO)
     {
          printf("Mark %2d: \n",count);
          scanf("%f",&mark[count]);
          count++;
     }
     count = 0; //Resetting count 

     while(count<=NO) //calculating the sum 
     {
          sum = sum+mark[count];
          count++;
     }
     average = sum/NO;
     //Print statements
     printf("Total of (5) subjects: %4.2f\n",sum);
     printf("Average of (5) subjects: %4.2f\n", average);

     return 0;
}