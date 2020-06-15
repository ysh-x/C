//Salesman Salary (Chap 3: Case study:1 )
//Yogeshwar G

#include<stdio.h>
typedef double salary;
#define BASE 1500;
#define BONUS 200;
#define COMM 0.02;

int main(void)
{
     salary bonus, commision, price; 
     double total;
     int quantity;

     printf("\nNumber of Products sold: ");
     scanf("%d",&quantity);
     printf("\nAmount of the computer : ");
     scanf("%lf", &price);

     bonus = quantity * BONUS;
     commision = price * quantity * COMM;
     total = bonus + commision + BASE;

     printf("Bonus: %5.2f\n",bonus);
     printf("Commision: %5.2f\n", commision);
     printf("Total Pay: %5.2f\n", total);
}


