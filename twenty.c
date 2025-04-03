#include<stdio.h>
#include<stdlib.h>
int main()
{
 int goals;
 printf("\nEnter the goals done: ");
 scanf("%d",&goals);
 if(goals<=5)
 {
  goto sos;
 }
 else
 {
  printf("\nThats a lot of goals...\n");
  exit(1);
 }
 sos:
  printf("\nThats a lot less...\n");
 return 0;
}
