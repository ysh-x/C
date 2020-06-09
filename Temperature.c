//To convert the temperatures from celcius to farenheit and vice versa
// Yogeshwar

#include<stdio.h>

typedef double temp;

int main()
{
     temp celcius, farenheit;
     int choice;
     printf("\n\n\t\tTemperature Converter\n\n1. Celcius -> Farenheit\n2.Farenheit -> Celcius\n\n");
     scanf("%d",&choice);

     if(choice==1)
     {
          printf("Celcius: ");
          scanf("%lf",&celcius);
          farenheit = (((9 * celcius)/5) + 32);
          printf("Temperature: %5.5f *F ",farenheit);
     }
     else if(choice ==2)
     {
          printf("Farenheit: ");
          scanf("%lf", &farenheit);
          celcius = (((farenheit - 32 ) * 5)/9);
          printf("Temperature: %5.5f *C ", celcius);
     }
     else
     {
          printf("The requested choice is unavalaible\n\n");
     }
     
}