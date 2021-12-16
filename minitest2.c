#include <stdlib.h>
#include <stdio.h> 

int main (int argc, char* argv[])

{

int c[5]={0,1,2,3,4};
int i; 
int taille=5;

for (i=0 ;i<taille ; i++)

 if (i%2==0)

 {
  printf("%d\n",c[i]);
 }

return 0;

}

