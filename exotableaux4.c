#include <stdlib.h>
#include <stdio.h>

void tri();
void maximumTableau(int tableau[], int tailleTableau, int valeurMax);

int main(int argc, char*argv[])

{

int tailleTableau = 5;
int tableau[5] = {10, 2, 3, 6, 8};
int valeurMax = 4;

maximumTableau(tableau, tailleTableau, valeurMax);

return 0;

}


void maximumTableau(int tableau[], int tailleTableau, int valeurMax)

{

int i ;
int o ;

 for (i = 0 ; i<tailleTableau ; i++)
  {

   if (tableau[i]>=valeurMax)

    {

     tableau[i]=0;
      o++;
      i=o;
    }

  }

 for (i=0 ; i<tailleTableau ; i++)

 {

  printf("%d\n", tableau[i]);

 }


return ;

}
