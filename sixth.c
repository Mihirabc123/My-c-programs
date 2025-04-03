#include <stdio.h>

int main()
{
 int cp, sp, p, l;
 printf("Enter the cost point and selling point: ");
 scanf("%d %d", &cp, &sp);
 p = sp - cp;
 l = cp - sp;
 if ( p > 0 )
  printf("\nThe business is in profit..\n");
 if ( l > 0 )
  printf("\nThe business is in loss..\n");
 if( p == 0 && l == 0)
  printf("\nBarely surviving...\n");
 return 0;
}
