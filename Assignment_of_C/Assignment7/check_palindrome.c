#include <stdio.h>

 int main(){
    int n1,n2,dg,rev,l,num;
    printf("Enter 1st & last number:");
    scanf("%d%d",&n1,&n2);
    printf("The palindrome numbers are = \n");
    for(l=n1;l<=n2;l++)
    {
        num=l;
        rev=0;
        while(num!=0)
        {
            dg=num%10;
            rev=rev*10+dg;
            num=num/10;
        }
            if(rev==l)
            {
                printf("%d\n",l);
            }
    }
    
    return 0;
}

