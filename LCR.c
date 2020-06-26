//3.10 EBG
//Calculate the Freqency of the given LCR circuit

#include<stdio.h>
#include<math.h>
double freqency(double,double,double);
double QF(double,double,double);

int main()
{
     double L,C,R, freq,Q;
     printf("L(H):     ");
     scanf("%lf",&L);
     printf("C(F):     ");
     scanf("%lf", &C);
     printf("R(O):     ");
     scanf("%lf", &R);
     freq = freqency(L,C,R);
     Q = QF(L,C,R);
     printf("FREQENCY:     %5.4lf(HZ)\n",freq);
     printf("Q-FACTOR:     %5.2lf\n",Q);
    
}

double freqency(double L, double C, double R)
{
     return (double)(((1 / (2 *  3.14159 * sqrt(L * C)))));
}
double QF(double L, double C, double R)
{
     return (double)((1/R) *(sqrt(L/C)));
}
