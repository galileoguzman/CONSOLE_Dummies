#include<stdio.h>
#include<conio.h>
  float triangulo(int,int);
  float cuadrado(int);
  float trapecio(int,int,int);
  float esfera(int);
  float hexagono(int,int);
	float hexagono(int peri, int apo)
	     {
	     float areahexa;
	     areahexa=(peri*apo)/2;
	     return(areahexa);
	     }
	float esfera(int r)
	     {
	     float areaesfe;
	     areaesfe=(r*r*3.1416)*4;
	     return(areaesfe);
	     }
	float trapecio(int bma,int bme,int h)
	     {
	     float areatra;
	     areatra=(bma+bme*h)/2;
	     return(areatra);
	     }
	float triangulo(int b,int a)
	     {
	     float area;
	     area=(b*a)/2;
	     return(area);
	     }
	float cuadrado(int l)
	     {
	     float areacu;
	     areacu=l*l;
	     return(areacu);
	     }
main()
{
 clrscr();
 int base,altura,m,opcion,alt,bama,bame,radio,perimetro,apotema;
 float resultado,resultadocu,atra,aesf,ahex;
 textcolor(210);
 cprintf("\n\n\t\t\t.......MENU.......\t\t\t");
 textcolor(10);
 cprintf("\n\t1.TRIANGULO\t\t\t\n");
 cprintf("\n\t2.CUADRADO\t\t\t\t\n");
 cprintf("\n\t3.TRAPECIO\t\t\t\t\n");
 cprintf("\n\t4.ESFERA\t\t\t\t\n");
 cprintf("\n\t5.HEXAGONO\t\t\t\t\n");
 cprintf("\n\t6.EXIT\t\t\t\t\n");
 cprintf("\tSELECCIONE UNA OPCION\n");
 scanf("%d",&opcion);
 textcolor(5);
 switch(opcion)
	  {
	  case 1:
	    cprintf("dame la base\n");
	    scanf("%d",&base);
	    cprintf("dame la altura\n");
	    scanf("%d",&altura);
	    resultado=triangulo(base,altura);
	    printf("\n\t\tAREA: %f",resultado);
	    break;
	  case 2:
	    cprintf("dame el lado \n");
	    scanf("%d",&m);
	    resultadocu=cuadrado(m);
	    printf("\n\tAREA: %f",resultadocu);
	    break;
	  case 3:
	    cprintf("dame la base mayor\n");
	    scanf("%d",&bama);
	    cprintf("dame la base menor\n");
	    scanf("%d",&bame);
	    cprintf("dame la altura del trapacio\n");
	    scanf("%d",&alt);
	    atra=trapecio(bama,bame,alt);
	    printf("el area del trapcio es: %f",atra);
	    break;
	  case 4:
	    cprintf("dame el radio\n");
	    scanf("%d",&radio);
	    aesf=esfera(radio);
	    printf("el area de la esfera es %f\n",aesf);
	    break;
	  case 5:
	    cprintf("dame el perimetro del haxagono\n");
	    scanf("%d",&perimetro);
	    cprintf("dame el apotema del hexagono\n");
	    scanf("%d",&apotema);
	    ahex=hexagono(perimetro,apotema);
	    printf("el area del hexagono es: %f\n",ahex);
	    break;
	  default:
	  cprintf("\t\tEXIT");
	  }
getch();
return(0);
}