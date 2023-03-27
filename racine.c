#include<stdio.h>
int main()
{
    float u,v,n;
    int i=0;
    scanf("%f",&n);

    u=n/2;
    //v=u;
    do 
    {
        printf("Iter %d\n",i);
        v=u;
        u=(1.0/2.0)*(u+n/u);
         printf("%f\n",u);
         i++;
    }while (v-u>=0.001);
    
    

}