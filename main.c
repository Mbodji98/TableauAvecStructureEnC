#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Personne Personne;
struct Personne
{
    char nom[100],prenom[100],adresse[50];
    int age;
};

int main()
{
    Personne pers[2];
    int i;
    for (i=0;i<2;i++)
    {
        printf("**********%d_eme personne**********\n",i+1);
        printf("Quel est votre nom?");
        scanf("%s",pers[i].nom);
        printf("Quel est votre prenom?");
        scanf("%s",pers[i].prenom);
        printf("Vous habitez dans quelle ville?");
        scanf("%s",pers[i].adresse);
        printf("Vous avez quel age?");
        scanf("%d",&pers[i].age);
        printf("\n");
    }

    for(i=0;i<2;i++)
    {
        printf("**********Personne N%d**********\n",i+1);
        printf("Nom:%s\n",pers[i].nom);
        printf("Prenom:%s\n",pers[i].prenom);
        printf("Adresse:%s\n",pers[i].adresse);
        printf("Age:%d\n\n",pers[i].age);
    }
    printf("***********************************\n**********FIN DE LA LISTE**********\n***********************************");
    return 0;
}
