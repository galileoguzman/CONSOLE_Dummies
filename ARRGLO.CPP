#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int x[10];
 int suma,i;
 printf("\t\t\tPROGRAMA QUE INGRESE 10 NUM. Y REALICE LA SUMA\n");
 for(i=0;i<=9;i++)
 {
   printf("ingrese un numero\n");
   scanf("%d",&x[i]);
 }
 suma=0;
 for(i=0;i<=9;i++)
 {
   suma+=x[i];
 }
 printf("la suma es %d",suma);
getch();
return(0);
}