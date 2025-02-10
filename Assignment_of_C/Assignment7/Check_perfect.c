#include<stdio.h>

int main() {
    // Write C code here
    int l,c,n1,n2,f,sum;
    printf("Enter 1st & last natural number:");
    scanf("%d%d",&n1,&n2);
    printf("The perfects numbers are:\n");
    for(l=n1;l<=n2;l++)
    {
        sum=0;
        for(c=1;c<l;c++)
        {
                if(l%c==0)
                {
                    sum=sum+c;
                }
        }
            if(sum==l)
            printf("%d\n",l);
    }

    return 0;
}


