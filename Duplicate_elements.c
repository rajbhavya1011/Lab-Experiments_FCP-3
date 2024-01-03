#include<stdio.h>
int main()
{
    int a[5],c=0;
    printf("enter an array\n");
    for(int i=0;i<5;i++)
    {   
    scanf("%d",&a[i]);
    }
    for (int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                printf("Duplicate element %d at indices %d and %d\n",a[i],i,j);
            }
        }
    }
    printf("No. of duplicate elements : %d",c);
}