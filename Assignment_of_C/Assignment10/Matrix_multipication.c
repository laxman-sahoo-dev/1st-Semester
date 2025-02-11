/*MATRIX MULTIPLICATON*/
#include <stdio.h>

int main() {
    int r,c,n1,n2,n3,n4,sum,k;
    int a[20][20],b[20][20],res[20][20];
    printf("Enter the rows & cloums fo 1st matrix =");
    scanf("%d%d",&n1,&n2);
    printf("Enter data to the 1st matrix=\n");
    for(r=0;r<n1;r++){
        for(c=0;c<n2;c++){
            printf("A[%d][%d]=",r+1,c+1);
            scanf("%d",&a[r][c]);
        }
    }
    printf("Display the 1st matrix;\n");
    for(r=0;r<n1;r++){
        for(c=0;c<n2;c++){
            printf(" %d ",a[r][c]);
        }
        printf("\n");
    }
     printf("Enter the rows & cloums fo 2nd matrix = ");
    scanf("%d%d",&n3,&n4);
    printf("Enter data to the 2nd matrix=\n");
    for(r=0;r<n3;r++){
        for(c=0;c<n4;c++){
            printf("B[%d][%d]=",r+1,c+1);
            scanf("%d",&b[r][c]);
        }
    }
    printf("Display the 2nd matrix;\n");
    for(r=0;r<n3;r++){
        for(c=0;c<n4;c++){
            printf(" %d ",b[r][c]);
        }
        printf("\n");
    }
    if(n2!=n3){
        printf("The matrix multiplication is not possible\n");
        return 1;
    }
    for(r=0;r<n1;r++){
        for(c=0;c<n4;c++){
            sum=0;
            for(k=0;k<n2;k++){
                sum+=a[r][k]*b[k][c];
            }
            res[r][c]=sum;
        }
    }
    printf("After matrix multiplication\n");
    for(r=0;r<n1;r++){
        for(c=0;c<n4;c++){
            printf(" %d ",res[r][c]);
        }
        printf("\n");
    }
    return 0;
}
