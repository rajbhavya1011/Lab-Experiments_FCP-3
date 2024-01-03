#include<stdio.h>
void main()
{
    char ch[]=" read the question"; int c=0;
   // printf("Enter a String\n");
    //scanf("%s",&ch);
    for(int i=0;i<100;i++)
    {
        if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u') && (ch[i+1]=='a'||ch[i+1]=='e'||ch[i+1]=='i'||ch[i+1]=='o'||ch[i+1]=='u'))
        {
          c++;
        }
    }
printf("No. of succesive vowels : %d",c);
}
