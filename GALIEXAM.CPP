#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int t1,t2,t3;
 float p1,p2,p3,total,b1,b2,b3;
 printf("dame el precio de la clase 1\n");
 scanf("%f",&p1);
 printf("dame el precio de la clase 2\n");
 scanf("%f",&p2);
 printf("dame el precio de la clase 3\n");
 scanf("%f",&p3);
 printf("dame el total de boletos vendido de la clase 1\n");
 scanf("%d",&t1);
 printf("dame el total de boletos vendido de la clase 2\n");
 scanf("%d",&t2);
 printf("dame el total de boletos vendido de la clase 3\n");
 scanf("%d",&t3);
 b1=p1*t1;
 b2=p2*t2;
 b3=p3*t3;
 total=b1+b2+b3;
 if(b1>b2 && b1>b3){
 printf("el boleto que se vendio mas es el de la clase 1\n");}
 else if(b2>b3 && b2>b1){
 printf("el boleto que se vendio mas es el de la clase 2\n");}
 else{
 printf("el boleto que se vendio mas es el de la clase 3\n");
 }
 printf("el total recaudado de la venta es %f\n",total);
getch();
return(0);
}
