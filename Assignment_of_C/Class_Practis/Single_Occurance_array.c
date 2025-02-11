//MAKE SINGLE OCCURANCE OF ARRAY
#include <stdio.h>
int main() {
    int a[20],n,i,j,k;
    printf("Enter the range of the array: ");
    scanf("%d",&n);
    printf("Enter the data to the array: ");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Display the data:\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(k=j;k<n;k++){
                    a[k]=a[k+1];
                    n--;
                    j--;
                }
            }
        }
    }
    printf("\nDisply\n ");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
