#include<stdio.h>
int main()
{
    float ui,ui1,n;
    int i=0;
    scanf("%f",&n);

    ui=n/2;
    //v=u;
    do 
    {
        printf("Iter %d\n",i);
        ui1=ui;
        ui=(1.0/2.0)*(ui+n/ui);
         printf("%f\n",ui);
         i++;
    }while (ui1-ui>=0.001);
    
    

}
