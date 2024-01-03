#include<stdio.h>
void main()
{
    long cc;
    int d[19], i=0, sum1=0, sum2=0;
    printf("Enter your Credit Card Number:\n");
    scanf("%ld",&cc);
    while(cc!=0)
    {
     int t=cc%10;
     d[i]=t;
     i++;
     cc=cc/10;
    }
    for(int j=0; j<i; j++)
    {
        if(j%2!=0)
        {
        if(d[j]*2>=10){
        sum1=sum1+((d[j]*2)-9);}
        else {
        sum1 = sum1+d[j];
        }}
        else 
        {
        sum2 =sum2+d[j];
        }
    }
    if((sum1+sum2)%10==0)
    printf("Credit Card number is valid");
    else
    printf("Credit Card number is invalid");
}
