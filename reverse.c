#include <stdio.h>
#include <string.h>

int main()
{
  char n[20];
  scanf("%s", &n[0]);
  int x= strlen(n);
  for(int a = 0; a<strlen(n); a++)
      {
	x = x-1;
	printf("%c", n[x]);
      }
  printf("\n");
  return 0;
}
