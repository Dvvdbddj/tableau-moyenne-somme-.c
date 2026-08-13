#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);
double moyenneTableau(int tableau[], int tailleTableau);

int sommeTableau(int tableau[], int tailleTableau)
{
   int somme=0;

   for(int i=0; i<tailleTableau; i++)
   {
      somme+=tableau[i];
   }

   return somme;
}

double moyenneTableau(int tableau[], int tailleTableau)
{
   int moyenne=0;
   for(int i=0; i<tailleTableau; i++)
   {
      moyenne+=tableau[i];
   }
   return (double)moyenne/(double)tailleTableau;
}

int main()
{
   int total, resultat;
   int tab[4]={25, 33, 5, 21};

   total=sommeTableau(tab, 4);
   printf("%d \n", total);

   resultat=moyenneTableau(tab, 4);
   printf("%d \n", resultat);

   return 0;

}