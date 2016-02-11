#include<conio.h>
#include<stdio.h>

float encontrarpromedio(float tam,float lista[])
	{
	int i;
	float suma;
	for(i=0;i<tam;i++)
	       {
	       suma=suma+lista[i];
	       }
	       return(suma/tam);
	}
main()
{
clrscr();
float numeros[10];
int e;
for(e=0;e<10;e++)
     {
     printf("dame el numero %d\n",e+1);
     scanf("%f",numeros[e]);
     }
printf("el promedio es %f",encontrarpromedio(10,numeros));
getch();
return(0);
}
