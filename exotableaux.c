#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int tableau[], int tailleTableau);

int main(int argc, char *argv[])

{

int tableau[5] = {2 ,6 ,8 ,2 ,3 };
int tailleTableau =5;
sommeTableau(tableau,tailleTableau);

return 0;

}

int sommeTableau(int tableau[], int tailleTableau)

{
     int somme=0;
     int i;
     for ( i=0 ; i<5 ; i++)
     somme = somme + tableau[i];
     printf("%d\n",somme);
}
