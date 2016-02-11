#include <stdio.h>
#include <conio.h>
main()
{
float costo1,costo2,costo3,total=0,resul1=0,resul2=0,resul3=0;
int ventas,x,bol1,bol2,bol3, totalbol;
clrscr();
printf("\t\tBIENVENIDO(A)\n\n\n");

printf("Ingrese el precio de los boletos 1:\n");

scanf("%f", &preciob1);

while(preciob1<0)

{

printf("ERROR\n");

scanf("%f", &preciob1);

}

printf("Ingrese el precio de los boletos 2:\n");

scanf("%f",&preciob2);

while(preciob2<0)

{

printf("ERROR\n");

scanf("%f", &preciob2);

}

printf("Ingrese el precio de los boletos 3:\n");

scanf("%f",&preciob3);

while(preciob3<0)

{

printf("ERROR\n");

scanf("%f", &preciob3);

}

printf("¨Cu ntas ventas se realizaron este d¡a?:\n");

scanf("%d", &n);

while(n<0)

{

printf("ERROR\n");

scanf("%d", &n);

}

for(i=1; i<=n; i++)

{

printf("Ingrese el Boleto:\n");

scanf("%d", &boleto);

switch(boleto)

{

case 1: printf("Ingrese la cantidad de boletos vendidos:\n");

scanf("%d", &boletos1);

sum1+=boletos1;

sum=sum+(boletos1*preciob1);

break;

case 2: printf("Ingrese la cantidad de boletos vendidos:\n");

scanf("%d", &boletos2);

sum2+=boletos2;

sum=sum+(boletos2*preciob2);

break;

case 3: printf("Ingrese la cantidad de boletos vendidos:\n");

scanf("%d", &boletos3);

sum3+=boletos3;

sum=sum+(boletos3*preciob3);

break;

default: printf("ERROR, Vuelva a intentarlo\n\n");

break;

}

}

clrscr();

if(sum3<sum2 && sum3<sum1)

printf("Los Boletos que se vendieron menos fueron los boletos numero UNO\n\n");

if(sum2<sum3 && sum2<sum1)

printf("Los Boletos que se vendieron menos fueron los boletos numero DOS\n\n");

if(sum1<sum2 && sum1<sum3)

printf("Los Boletos que se vendieron menos fueron los boletos numero TRES\n\n");

printf("El total recaudado en taquilla, durante este dia fue: %.2f\n\n", sum);

getch();

return 0;

}