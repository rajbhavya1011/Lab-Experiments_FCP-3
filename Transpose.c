#include<stdio.h>
void transpose(int a[2][3])
    {
    printf("Transpose of matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ", a[j][i]);
        }
         printf("\n");
    }
    }
int main()
{
    int a[2][3];
    printf("enter a matrix of order 2X3\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    transpose(a);
}