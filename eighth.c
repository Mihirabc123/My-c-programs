#include <stdio.h>

int main()
{
 int age;
 char ms ,sex;
 printf("\nEnter you marital status, sex and age: ");
 scanf("%c %c %d", &ms, &sex, &age);
 if ((ms == 'M') || ( ms == 'U' && sex == 'M' && age > 30) || ( ms == 'U' && sex == 'F' && age > 25))
  printf("\nYou are good to go...\n");
 else
  printf("\nHold on a sec....\n");
 return 0;
}
