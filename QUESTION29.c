//Palindrome Program in C Using While Loop
#include<stdio.h>
int main(){
    int num,rem,sum=0,x;
    printf("Enter the number: ");
    scanf("%d",&num);
    x=num;
    while(num>0){
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(sum==x)
    printf("Number is palindrom \n");
    else
    printf("Number is not palindrom \n");
    return 0;
}