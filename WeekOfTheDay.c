//Week of the day
//Yogeshwar

#include<stdio.h>

enum week {Sunday=1,Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
     enum week day = Monday;
     printf("% is the %d day of the week \n",day,day);
}