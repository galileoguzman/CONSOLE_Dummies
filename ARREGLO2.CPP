#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int cuadrado[100];
 int i,k;
 for(i=0;i<100;i++)
 {
   k=i+1;
   cuadrado[i]=k*k;
   printf("EL CUADRADO DE %d ES %d\n",k,cuadrado[i]);
   getch();
   }
getch();
return(0);
}