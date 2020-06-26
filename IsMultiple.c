//Whether the number is a multiple

#include<stdio.h>
#include<stdbool.h>

bool isMultiple(int, int);

int main()
{
     int numberOne, numberTwo;
     printf("Number One:      \n");
     scanf("%d",&numberOne);
     printf("Number Two:      \n");
     scanf("%d", &numberTwo);

     if(isMultiple(numberOne,numberTwo)==0)
     {
          printf("%d is a multiple of %d \n",numberOne,numberTwo);
     }
     else
     {
          printf("%d is not a multiple of %d \n", numberOne, numberTwo);
     }
     
}

bool isMultiple(int numberOne, int numberTwo)
{
     bool x;
     x = ((numberOne % numberTwo == 0) ? 0:1);

     return x;


}