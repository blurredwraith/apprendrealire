#include <stdio.h>
#include <stdlib.h>


double moyenneTableau(int tableau[], int tailleTableau);

int main( int argc, char*argv[] )

{

int tableau[5] = {2 ,6 ,8 ,2 ,3 };

int tailleTableau =5;

moyenneTableau(tableau,tailleTableau);

return 0 ;

}

double moyenneTableau(int tableau[], int tailleTableau)

{

double moyenne = 0;

int i; 

for ( i=0 ; i<5 ; i++ )

moyenne = moyenne + tableau[i]/2;

printf("%f\n", moyenne);

}
