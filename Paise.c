//To convert the Paise to rupee to farenheit and vice versa
// Yogeshwar

#include<stdio.h>

typedef double currency;

int main()
{
     currency paise, rupee;
     int choice;
     printf("\n\n\t\tTemperature Converter\n\n1. Paise -> Rupee \n2.Rupee -> Paise\n\n");
     scanf("%d",&choice);

     if(choice==1)
     {
          printf("Paise: ");
          scanf("%lf",&paise);
          rupee = (paise/100);
          printf("Rupees: %4.2lf ",rupee);
     }
     else if(choice ==2)
     {
          printf("Rupee: ");
          scanf("%lf", &rupee);
          paise = (rupee*100);
          printf("Paise: %8lf", paise);
     }
     else
     {
          printf("The requested choice is unavalaible\n\n");
     }
     
}