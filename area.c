#include<stdio.h>
int main()
{
  const float pi=22.0/7.0;
  float A, R, P;
    printf("enter the radius\n");
    scanf("%f", &R);
    A=pi*R*R;
    P=2*pi*R;
    printf("area= %f\n Parameter= %f", A, P);

}