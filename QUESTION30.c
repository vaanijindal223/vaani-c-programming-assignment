//Count the Number of Digits of an Integer Using the While Loop
# include<stdio.h>
int main(){
    int num,rem,count=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(rem=num%10){
      rem=num%10;
      num=num/10;
      count=count+1;
    }
    printf("%d",count);
    return 0;
}