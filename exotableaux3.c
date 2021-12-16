#include <stdio.h>
#include <stdlib.h>

void copie (int tableauOriginal[],int tableauCopie[], int tailleTableau, int TableauOriginal[], int TableauCopie[] );

int main(int argc,char* argv[])

{

int tableauOriginal[5] = { 5, 6, 8, 9, 2 };
int tableauCopie[5] = { 7, 6, 1, 2, 3 };
int TableauOriginal[5] = {0};
int TableauCopie[5] = {0};
int tailleTableau = 5;
copie(tableauOriginal, tableauCopie, tailleTableau, TableauOriginal, TableauCopie );

return 0 ;

}

void copie (int tableauOriginal[],int tableauCopie[], int tailleTableau, int TableauOriginal[], int TableauCopie[] )

{

 int i;
 int o;
 int u;
 int e;

 for (i=0 ; i< tailleTableau ; i++)

  {

    printf("%d\n",tableauOriginal[i]);

  }

 for (o=0 ; o< tailleTableau ; o++)

  {

    printf("\n%d", tableauCopie[o]);

  }

 //SWAP


 TableauOriginal = tableauOriginal ;
 TableauCopie = tableauCopie ;
 tableauOriginal = TableauCopie;
 tableauCopie = TableauOriginal;

 {

  for (i=0 ; i< tailleTableau ; i++)

   {

     printf("\n\n%d",tableauOriginal[i]);

   }

  for (o=0 ; o< tailleTableau ; o++)

   {

     printf("\n""\n%d\n""", tableauCopie[o]);

   }

 return ;

 }

}
