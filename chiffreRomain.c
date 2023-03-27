#include<stdio.h>

int main()
{
    int n;
    int r,q,i;
    /*
    1 ---- > I
    2 -----> II
    3 -----> III
    4 -----> IV
    5 -----> V
    6 -----> VI
    7 -----> VII
    8 -----> VIII
    9 -----> IX
    10 ----> X
    */
   scanf("%d",&n);
   r=n%10;
   q=n/10;
   
   for (i= 1; i <=q; i++)
   {
       printf("X");
   }

    if(r==4)
    {

    printf("IV");
    }
    else
    {
         if(r==5)
          printf("V");

          else {
            if(r==9)
          printf("IX");
          else{
              for (i= 1; i <=r; i++)
                {printf("I");}
          }
          }
    }

   
  
   
   
}