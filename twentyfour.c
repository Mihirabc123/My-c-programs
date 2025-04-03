#include<stdio.h>

int main()
{
 int i =5;
 int *j = &i;
 int *alpha;
 float *s;
 char *ch;
 printf("\nThe address of i is %p\n", &i);
 printf("\nThe address of i is %p\n", j);
 printf("\nYhe address of j is %p\n", &j);
 printf("\n%ld %ld %ld\n",sizeof(alpha), sizeof(s), sizeof(ch));
return 0;
}
