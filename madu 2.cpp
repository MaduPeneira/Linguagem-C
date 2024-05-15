#include<stdio.h>
#include<stdlib.h>


int main ()
{
	int numero, sucessor, antecessor;
	
printf ("digite um numero");
scanf("%d", &numero);

antecessor = numero-1;
sucessor =numero+1;



printf ("o antecessor de %d\n",antecessor );
printf("o sucessor e %d\n", sucessor );

return 0;

}