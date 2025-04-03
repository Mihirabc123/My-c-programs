#include <stdio.h>

int main()
{
 int q;
 printf("How many questions do you have? : ");
 scanf("%d", &q);
 if( q > 0 && q <= 5)
  printf("\nFine I can answer your questions..\n");
 else
 {
  if( q > 5 && q < 10)
   printf("\nThat's a lot of questions for today..\n");
  else
   printf("\nWhy are you asking to me!?\n");
 }
 return 0;
}
