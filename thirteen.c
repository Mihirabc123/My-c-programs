#include <stdio.h>

int main()
{
 int op,h,i = 1;
 while (i < 10)
 {
  printf("How many hours did you worked?. :");
  scanf("%d", &h);
  if(h > 40)
   op = (h - 40) * 120;
  else
   op = 0;
  printf("You worked %d hours.. Here is your %d\n", h, op);
  i++;
 }
 return 0;
}
