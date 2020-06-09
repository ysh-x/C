// List of Items
// Yogeshwar

#include<stdio.h>

typedef char Product;
typedef double Price;

int main()
{
     Product product[20][20];
     Price price[20];
     int count = 0;
     int number;

     printf("Number of Items: ");
     scanf("%d",&number);

     while(count<number)
     {
          printf("Name of Item %2d: ",count+1);
          scanf("%s", product[count]);

          printf("Price of Item %2d: ",count+1);
          scanf("%lf", &price[count]);
          printf("\n");
          count++;
     }

     count = 0;

     printf("Product\t | Price\n");
     while (count < number)
     {
          printf("%s \t|Rs. %4.2lf: \n", product[count], price[count]);
          count++;
          
     }
}
