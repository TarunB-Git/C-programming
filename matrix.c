#include<stdio.h>
int main()
{
    int r1,c1,r2,c2,i,j;
    printf("Enter number of rows for the first matrix: \n");
    scanf("%d",&r1);
    printf("Enter number of columns for the first matrix: \n");
    scanf("%d",&c1);
    int matrix1[r1][c1],matrixsum[r1][c1];
    
    printf("Enter the values of the first Matrix:");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("\nElement-[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\nThe first matrix is:");
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c1;j++){
            printf("%d \t",matrix1[i][j]);
        }
    }
    printf("\nEnter number of rows for the second matrix: \n");
    scanf("%d",&r2);
    printf("Enter number of columns for the second matrix: \n");
    scanf("%d",&c2);
    int matrix2[r2][c2];
    printf("Enter the values of the second Matrix:");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("\nElement-[%d][%d]:",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\nThe second matrix is:");
    for(i=0;i<r2;i++){
        printf("\n");
        for(j=0;j<c2;j++){
            printf("%d \t",matrix2[i][j]);
        }
    }
    if(r1==r2 && c1==c2){
    printf("\nThe sum of the two matrices is:");
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c1;j++){
            matrixsum[i][j]= matrix1[i][j] + matrix2[i][j];
            printf("%d \t",matrixsum[i][j]);
        }
    }
    }
    else{
        printf("\nThe two matrices cannot be added since they have differing rows/columns.");
    }
}
