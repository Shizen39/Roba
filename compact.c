#include <stdio.h>

int main()
{
  float x;
  float y;
  char n;
  printf("Calcolatrice\n");
  scanf("%f%c%f",&x,&n,&y);
  float res;
  switch(n)
    {
    case '+':
      res=x+y;
      break;
    case '*':
      res=x*y;
      break;
    case '/':
      res=x/y;
      break;
    case '-':
      res=x-y;
      break;
    default:
      printf("ERRORE\n");
      return 1;
    }
  printf("%g\n",res);
  return 0;
}
