#include<stdio.h>
#include<conio.h>

#define MAX 5
void main()
{
 int a[MAX],b[MAX],c[MAX],i,j=0,k=0;
 clrscr();
 printf("\t\tPROGRAMA QUE ALMACENA 12 NUMEROD EN UN ARREGLO\n");
 printf("\t\tY LUEGO LOS SEPARA EN DOS DE ACUERDO A SU VALOR.\n");

  for(i=0;i<MAX;i++)
  {
    printf("INTRODUCE EL VALOR \n");
    scanf("%d",&a[i]);
    }

  for(i=0;i<MAX;i++)
  {
     if(a[i]<MAX)
     {
     b[j]=a[i];
     j++;
     }
     else
     {
     c[k]=a[i];
     k++;
     }
     printf("LOS NUMEROS QUEDAN ASI:\n\n");
  }
  for(i=0;i<j;i++)
  {
    printf("%d\n",b[i]);
    }
  for(i=0;i<k;i++)
  {
    printf("\t%d\n",c[i]);
    }
 getch();
 }
