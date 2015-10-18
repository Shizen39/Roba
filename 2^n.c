#include <stdio.h>

int main()
{
  int is=2;
  int poot[5];
  for(int a=0; a<5; a++)
    {
      poot[a]=is;
      printf("%d ", poot[a]);
	  is*=2;
    }

  printf("\n");

  return 0;
}
