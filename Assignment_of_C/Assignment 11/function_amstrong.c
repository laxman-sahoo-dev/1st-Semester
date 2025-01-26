// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool isAmstrong(int num){
    int i,dg,dg_count = 0,temp,f,sum = 0;
     temp = num;
     
     //digit count
     while(num != 0){
         num /=10;
         dg_count++;
     }
    
    num = temp;
    while(num)
    {
        dg=num%10;
        f=pow(dg,dg_count);
        sum=sum+f;
        num=num/10;
    }
    
    if(sum != temp)
    {
    return false;
    }
return true;
}
int main() {
    int num,d;
    printf("Enter a number:");
    scanf("%d",&num);


    if(isAmstrong(num)){
        printf("amstrong");
    }
    else{
    printf("NOt amstrong");
    }
    return 0;
}
