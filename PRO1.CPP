#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int n,i,k,altos,bajos,iguales;
 float media,suma=0;
 float x[10];
 printf("dame el numero de estudiantes\n");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   k=i+1;
   printf("dame la %d estatura\t\n",k);
   scanf("%f",&x[i]);
   suma=suma+x[i];
   }
   media=suma/n;
   bajos=0;
   altos=0;
   for(i=0;i<n;i++)
   {
    if(x[i]<media)
      bajos=bajos+1;
    else if(x[i]>media)
      altos=altos+1;
    else
      printf("son iguales\n");
      }
      printf("la media es %f \t\n",media);
      printf("alumnos de estatura meyor que la media %d\t\n",altos);
      printf("alumnos de estatura menor que la media %d\t\n",bajos);
getch();
return(0);
}