#include <stdio.h>
#include <string.h>

int main()
{
  char n[20];
  scanf("%s", &n[0]);
  for(int x = strlen(n); x>=0; x--)
      {
       printf("%c", n[x]);
      } // Cleaner and 'faster'.
      // Instead of checking when a < x you could just subtract from
      // x until it reaches 0 
  printf("\n");
  return 0;
}