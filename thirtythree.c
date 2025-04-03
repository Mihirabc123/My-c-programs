#include<stdio.h>

int main()
{
 int avg, sum = 0;
 int i;
 int marks[30];
 for(i=0;i<=29;i++)
 {
  printf("Enter the marks: ");
  scanf("%d", &marks[i]);
 }
 for(i=0;i<=29;i++)
 {
  sum = sum + marks[i];
 }
 avg = sum/30;
 printf("\nThe average of 30 marks is %d\n", avg);
 return 0;
}
