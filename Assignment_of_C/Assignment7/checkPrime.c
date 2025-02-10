#include <stdio.h>

int main(){
    int i,j,count;
    printf("The prime number are between 1 to 100 =\n ");
    for(i=2;i<=100;i++){
        count=0;
        for(j=1;j<=i;j++)
        {
        if(i%j==0){
            count=count+1;
        }
        }
    if(count==2)
    printf("%10d\n",i);
    }
    return 0;
}
