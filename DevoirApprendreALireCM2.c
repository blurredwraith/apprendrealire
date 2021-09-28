#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

int Rejouer=1;

while (Rejouer==1)
{

int JEU()

{
int MAX = 0;
int MIN = 0; 
int nombreClair = 0;
int nombreMystere = 0; 
int Press = 0;
int Choice = 0; 
printf("\n\n = + GINKI - =\n\n Quel Niveau de Difficulté voulez-vous ? \n\n 1 ?\n\n\n 2 ?\n\n\n 3 ?\n\n");
scanf("%d",&Choice);

switch (Choice)
{
case 1:
srand(time(NULL)); // Initialiser l'aléatoire
MAX = 100, MIN = 1; // Donner à l'aléatoire des nombre constants, des limites quoi
nombreMystere = 0;
nombreMystere = (rand() % (MAX-MIN+1))+MIN; // Formule
nombreClair = 0;
printf("\n\n VOUS JOUEZ EN NIVEAU 1 \n\n");
printf(" * - BIENVENUE DANS LA PARTIE DE PLUS OU MOINS ! - *\n\n VEUILLEZ SAISIR UN NOMBRE ENTRE 1 et 100 !\n\n ");
break;

case 2:
srand(time(NULL)); // Initialiser l'aléatoire
MAX = 1000, MIN = 1; // Donner à l'aléatoire des nombre constants, des limites quoi
nombreMystere = 0;
nombreMystere = (rand() % (MAX-MIN+1))+MIN; // Formule
nombreClair = 0;
printf("\n\nVOUS JOUEZ EN NIVEAU 2 \n\n");
printf(" * - BIENVENUE DANS LA PARTIE DE PLUS OU MOINS ! - *\n\n VEUILLEZ SAISIR UN NOMBRE ENTRE 1 et 1000 !\n\n ");
break;

case 3:
srand(time(NULL)); // Initialiser l'aléatoire
MAX = 10000, MIN = 1; // Donner à l'aléatoire des nombre constants, des limites quoi
nombreMystere = 0;
nombreMystere = (rand() % (MAX-MIN+1))+MIN; // Formule
nombreClair = 0;
printf("\n\nVOUS JOUEZ EN NIVEAU 3\n\n");
printf(" * - BIENVENUE DANS LA PARTIE DE PLUS OU MOINS ! - *\n\n VEUILLEZ SAISIR UN NOMBRE ENTRE 1 et 10000 !\n\n ");
break;
}

scanf("%d",&nombreClair);

 while (nombreClair<nombreMystere)

 {
    printf(" C'est Plus !\n\n Choisissez un autre numéro ! ?\n\n ");
    nombreClair=0;
    scanf("%d",&nombreClair);
    Press ++;
      while (nombreClair>nombreMystere)

      {
       printf(" C'est Moins !\n\n Choisissez un autre numéro ! \n\n ");
       nombreClair=0;
       scanf("%d",&nombreClair);
       Press ++;
      }

    if (nombreClair==nombreMystere)

      {
       printf(" \n\n OUI !  %d ! FELICITATIONS!\n\n Vous avez trouvé la solution avec %d coups! \n\n ", nombreMystere, Press );
       printf("Voulez-vous rejouer ?\n\n 1 - Oui\n\n 2 -Non\n\n");
       scanf("%d",&Rejouer);
      }
 }


 while (nombreClair>nombreMystere)

 {
    printf(" C'est Moins !\n\n Choisissez un autre numéro ! \n\n ");
    nombreClair=0;
    scanf("%d",&nombreClair);
    Press ++;

      while (nombreClair<nombreMystere)

      {
       printf(" C'est Plus !\n\n Choisissez un autre numéro ! ?\n\n ");
       nombreClair=0;
       scanf("%d",&nombreClair);
       Press ++;
      }

 if (nombreClair==nombreMystere)

      {
       printf(" \n\n OUI !  %d ! FELICITATIONS!\n\nVous avez trouvé la solution  avec %d coups!\n\n ", nombreMystere, Press );
       printf("Voulez-vous rejouer ?\n\n 1 - Oui\n\n 2 -Non\n\n");
       scanf("%d",&Rejouer); 
      }

 else 

 return 0;

 }

return 0; 

}

 
