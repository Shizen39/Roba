#include <stdio.h>
#include <string.h>

int main()
{
  char n[20];//shshsh
  scanf("%s", &n[0]);
  for(int x = strlen(n); x>=0; x--)
      {
       printf("%c", n[x]);
      }
  printf("\n");
  return 0;
}
