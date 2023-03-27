#include<stdio.h>

int main()
{
    int s[10]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    int t1,t2,i;

    t1=n;

    while (t1>0)
    {
       printf("\nCoef Approx\n");
       for(i=0;i<t1/2;i++)
       {
           printf("%d ",s[i]);
       }

       printf("\nCoef Details\n");
       for(i=t1/2;i<t1;i++)
       {
           printf("%d ",s[i]);
       }
    t1=t1/2;
    }
    
printf("\n");
}