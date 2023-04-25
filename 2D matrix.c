#include <stdio.h>
void main()
{
    int m,n,i,j;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter the matrix size: ");
    scanf("%d %d",&n,&m);
    printf("Enter the matrix ;\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
        
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
        printf("\n");
    }
    printf("\nTranspose matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            c[i][j]=b[i][n-1-j];
        }
        printf("\n");
    }
    printf("\n90 degree rotated matrix: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
}
