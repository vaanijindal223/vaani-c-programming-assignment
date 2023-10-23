//Program to Find LCM of Two Numbers in C Using While Loop
#include<stdio.h>
int main(){
    printf("Enter value of a and b: ");
    int a,b,start,i;
    scanf("%d %d",&a,&b);
    if(a>=b){
        start=a;
    }
    else{
        start=b;
    }
    int end=a*b;
    int ans=start;
    for(int i=start;i<=end;i++)
    {
        if(i%a==0 && i%b==0)
        {
            ans=i;
            break;
        }
    }
    printf("L.C.M. is %d",ans);
    return 0;
}