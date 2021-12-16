#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t *bonjour(const char* chaine);

int main ( int argc, char * argv[])

{

char prenom[]= "Amy";
char* bonjour = (char *)malloc(sizeof(char)* strlen("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz")+1);

printf("Bonjour je m'appelle %s !\n ",prenom);

free (bonjour);

return 0 ;

}
