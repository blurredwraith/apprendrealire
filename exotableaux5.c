#include <stdio.h>
#include <stdlib.h>

void ordonnerTableau(int tableau[], int tailleTableau);

int main(int argc, char*argv[])

{
int i;
int o;
int tableau[5] = { 4, 3, 5, 2, 1};
int tailleTableau = 6;

ordonnerTableau(tableau,tailleTableau);
ordonnerTableau(tableau,tailleTableau);
ordonnerTableau(tableau,tailleTableau);
ordonnerTableau(tableau,tailleTableau);
ordonnerTableau(tableau,tailleTableau);

return 0;

}


void ordonnerTableau(int tableau[], int tailleTableau)

{

 int i;
 int o;

for (i=0 ;i<tailleTableau ; i++)

if (tableau[i] > tableau[i+1])

 {
        o = tableau[i];
        tableau[i] = tableau[i+1];
        tableau[i+1] = o;
 }

if (tableau[i] < tableau[i+1])
 {
        o = tableau[i+1];
        tableau[i+1] = tableau[i];
        tableau[i] = o;
 }

printf("%d\n%d\n%d\n%d\n%d\n\n", tableau[0],tableau[1],tableau[2],tableau[3],tableau[4]);


}

























