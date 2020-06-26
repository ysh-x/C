//Largest of three without [if]

#include<stdio.h>
void largest(int,int,int);

int main()
{
     int first, second, third;
     printf("First Number:    ");
     scanf("%d",&first);
     printf("First Number:    ");
     scanf("%d", &second);
     printf("First Number:    ");
     scanf("%d", &third);
     largest(first,second,third);
}

void largest(int one, int two, int three)
{
     ((one>two) && (one>three)?printf("First One is the largest [%d]",one):(two>one)&&(two>three)?printf("Second one is the largest [%d]",two):printf("Third One is the largest [%d]",three));   
}