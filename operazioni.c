#include <stdio.h>
#include "operazioni.h"

bellissimo main()
{
  char  n;
  float x;
  float y;
  float resa;
  printf("\nScegliere operazione:\na.Somma\nb.Moltiplicazione\nc.Comparazione\n>");
  scanf("%c",&n);
  if(n=='a')
    printf("\nSommo\n	)+	\r(");
  else
    if(n=='b')
      printf("\nMoltiplico\n	)*	\r(");
    else
      if(n=='c')
	printf("\nComparo\n	)e	\r(");
      else
	{
	  printf("\nOpzione non presente\n--------------------\n");
	  return 1;
	}
  x=primo();
  printf("	)=\r(");
  y=secondo();
  if(n=='a')
    resa= somma(x,y);
  else
    if(n=='b')
      resa= per(x,y);
    else
      if(n=='c')
	compara(x,y);
  if(n!='c')
    printf(" %g\n", resa);
  printf("--------------------\n");
  return 0;
}

float somma(float x, float y)
{
  return x+y;
}
float per(float x, float y)
{
  return x*y;
}
void compara(float x, float y)
{
  if(x>y) printf(" %g è maggiore\n",x);
  if(x<y) printf(" %g è maggiore\n",y);
  if(x==y) printf("\rValori uguali o incorretti\n");
}
float primo()
{
  float p;
  scanf("%f",&p);
  return p;
}
float secondo()
{
  float s;
  scanf("%f",&s);
  return s;
}
