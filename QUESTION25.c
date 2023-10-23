//Fibonacci Series Program in C Using DO While Loop
#include<stdio.h>
int main(){
    double n,i=1;
    printf("Enter value of n till where yot want to print the series: ");
    scanf("%lf",&n);
    double a=1;
    double b=1;
    double c=0;
  do
  {
    i=i+1;
    printf("%.2lf ",c);
    a=b;
    b=c;
    c=a+b;
  } while(i<=n);
  return 0;
}