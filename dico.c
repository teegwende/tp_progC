#include<stdio.h>
typedef struct mot mot;
typedef struct sousdico sousdico;
typedef struct dictionnaire dictionnaire;


 struct mot
{
   char terme[100];
   char def[100];
};

 struct sousdico
{
    char lettre;
    mot liste[100];
};

struct  dictionnaire
{
    sousdico listssd[26];
};


mot sasisirMot()
{
    mot m;
    printf("le terme\n");

    scanf("%s",m.terme);
    getchar();
    printf("la definition");
    
    gets(m.def);

    return m;
}

sousdico  saisirSousDico(int n,char lettre)
{
int i;
sousdico t;
t.lettre=lettre;
for(i=0;i<n;i++)
{
    t.liste[i]=sasisirMot();
}
return t;
}
int main()
{
sousdico ssd;
dictionnaire dict;
mot m1; int j,nb,i;
int continuer; char c;
/*do {
    m1=sasisirMot();

printf("terme = %s\n",m1.terme);
printf("Def = %s",m1.def);

printf("Continuez 1-oui 2-non\n");
scanf("%d",&continuer);

}while (continuer!=2);*/


/*int continuer;
do {
   
printf("Continuez 1-oui 2-non\n");
scanf("%d",&continuer);

}while (continuer!=2);*/

for (j=0;j<2;j++){
    printf("Entrez une lettre \n");
    scanf("%c",&c);
    printf("combien de mots a saisir\n");
    scanf("%d",&nb);
    dict.listssd[j]=saisirSousDico(nb,c);
}

//affichage dictionnaire 
for(j=0;j<2;j++)
{
    printf("les mots de lettre %c sont \n",dict.listssd[j].lettre);
    for(i=0;i<2;i++)
    {
         printf("%s ",dict.listssd[j].liste[i].terme);
    }
    printf("\n");
   
}

}