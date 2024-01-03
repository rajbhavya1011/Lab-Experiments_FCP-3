#include<stdio.h>
int main()
{
    int a[3][3];
    printf("enter a matrix of order 3X3\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Upper Triangular Matrix\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i>j)
            {
                a[i][j]=0;
                printf("%d ",a[i][j]);
            }
            else{
                printf("%d ",a[i][j]);
            }
        }
        printf("\n");
    }
}