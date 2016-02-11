#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
 int x[10];
 int suma,i;
 for(i=0;i<10;i++)
 {
   printf("ingresar entero\n");
   scanf("%d",&x[i]);
   }
 suma=0;
 for(i=0;i<10;i++)
   suma+=x[i];
   printf("el resultado es: %d\n",suma);
getch();
return(0);
}