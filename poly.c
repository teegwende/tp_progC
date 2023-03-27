#include<stdio.h>
#include<stdlib.h>
void addPoly(int poly1[],int poly2[],int deg1,int deg2)
{
    int i;
    int p[50]={0};
    int ecart=0;
    if(deg1>deg2)
    ecart=deg1-deg2;

    for(i=ecart;i<=deg1;i++)
    {
         p[i]=poly2[i-ecart];
         poly1[i]=p[i]+poly1[i];
    }
   

    for(i=0;i<=deg1;i++)
    printf("%d\t",poly1[i]);

}
int *yankerPoly(int poly1[],int poly2[],int deg1,int deg2)
{
  int i;
   // int p[50]={0};
   int *p=(int*)calloc(50,sizeof(int));
    int ecart=0;
    if(deg1>deg2)
    ecart=deg1-deg2;

    for(i=ecart;i<=deg1;i++)
    {
        printf("dans la boucle\n");
         p[i]=poly2[i-ecart];
         poly1[i]=p[i]-poly1[i];
    }
    p=poly1;
     for(i=0;i<=deg1;i++)
    printf("%d\t",p[i]);
    return p;
}

int *multiplier(int p1[],int p2[],int n1,int n2)
{
    int i,j;
    int *presult=(int*)calloc(n1+n2,sizeof(int));;;
    //make computation
    for (i=0;i<=n1;i++)
    {
     for (j=0;j<=n2;j++){
         //deux opérations à faire multiplication des coefficients + addition
         presult[i+j]=presult[i+j]+ (p1[i]*p2[j]);

     }   
    }
    //for (i=0;i<=n1+n2;i++)
    //printf("%d  ",presult[i]);
    return presult;
}

int main()
{
    int p1[50];
    int p2[50];
   // int presult[100]={0};
     int *presult;
    
    int *presult2;

    int n1,n2,i,j;
     for (i=0;i<100;i++)
    presult[i]=0;

for (i=0;i<100;i++)
    printf("%d  ",presult[i]);

    printf("Entrez le degre du polynome 1\n");
    scanf("%d",&n1);
    for(i=0;i<=n1;i++){
        printf("coef%d\n",i+1);
        scanf("%d",&p1[i]);
    }
     printf("Entrez le degre du polynome 2\n");
    scanf("%d",&n2);
      for(i=0;i<=n2;i++){
        printf("coef%d\n",i+1);
        scanf("%d",&p2[i]);
    }

presult=multiplier(p1,p2,n1,n2);
    //make computation
   /* for (i=0;i<=n1;i++)
    {
     for (j=0;j<=n2;j++){
         //deux opérations à faire multiplication des coefficients + addition
         presult[i+j]=presult[i+j]+ (p1[i]*p2[j]);

     }   
    }*/

    //Display result
    printf("Result\n");
    for (i=0;i<=n1+n2;i++)
    printf("%d  ",presult[i]);

    //Addition
    //printf("\nResult Addition\n");
    //addPoly(p1,p2,n1,n2);

    //Appel de la fonction soustract
    //printf("\nResult Soustract\n");
    //presult2=yankerPoly(p1,p2,n1,n2);

   // for (i=0;i<=n1;i++)
    //printf("%d  ",presult2[i]);
    printf("\n");
}