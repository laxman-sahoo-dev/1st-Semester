#include <stdio.h>

int main() {
    int dg,num,sum=0,num1,i;
    printf("Enter the number:");
    scanf("%d",&num);
    num1=num;
    while(num!=0){
    int f=1;
    dg=num%10;
    for(i=dg;i>=1;i--){
    f=f*i;}
    sum=sum+f;
    printf("%d\n",sum);
    num=num/10;
    }
    if(sum==num1)
    printf("%d is strong",num1);
    else
    printf("%d is not strong",num1);
    

    return 0;
}
