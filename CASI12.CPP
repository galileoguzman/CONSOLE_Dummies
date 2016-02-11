#include<stdio.h>
#include<conio.h>
main()
{
clrscr();
 int i,k,e,edad[5],sumae=0,altos=0,bajos=0;
 char nom[5];
 float x[5],suma=0,mediaed=0,media=0;
 for(k=0;k<5;k++)
	  {
	  printf("dame el nombre del alumno\n");
	  scanf("%s",&nom[k]);
	  }
 for(i=0;i<5;i++)
	  {
	  printf("dame la altura\n");
	  scanf("%f",&x[i]);
	  suma=suma+x[i];
	  }
 for(e=0;e<5;e++)
	  {
	  printf("dame la edad\n");
	  scanf("%d",&edad[e]);
	  sumae=sumae+edad[e];
	  }
    media=suma/5;
    mediaed=sumae/5;
    printf("\n");
    printf("\n");
    printf("\n");
    printf("el promedio de estatura es: %f\t\n",media);
    printf("el promedio de edad es : %f\t\n",mediaed);
 for(i=0;i<5;i++)
	  {
	  if(x[i]<media)
	  printf(" estatura menor que la media %f\n,",x[i]);
	  else if(x[i]>media)
	  printf("estatura mayor que la media %f\n",x[i]);
	  else
	  printf("estatura igual que la media %f\n",x[i]);
	  }
 for(e=0;e<5;e++)
	  {
	  if(mediaed<edad[e])
	  altos+=1;
	  else if(mediaed>edad[e])
	  bajos+=1;
	  }
      printf("alumnos de edad mayor : %d\n",altos);
      printf("alumnos de edad menor : %d\n",bajos);
getch();
return(0);
}

