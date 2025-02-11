// TO PRINT REVERSE OF A NUMBER USEING FUNCTION
#include <stdio.h>
int reverse(int x){
    int dg=0,rev=0;
    while(x!=0){
        dg=x%10;
        rev=rev*10+dg;
        x=x/10;
    }
    return rev;
}
int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    reverse(num);
    printf("The reverse number is: %d",reverse(num));
    return 0;
}
