//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main(){
    int num,rem,reverse;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(reverse=0;rem=num%10;num=num/10){
        reverse= reverse*10+rem;
    }
    printf("%d",reverse);
    return 0;
}