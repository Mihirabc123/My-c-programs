#include<stdio.h>

void display1(int);
void display(int *);

int main()
{
 int i;
 int marks[] = {55,34,54,54,54,54,34};
 for(i=0;i<=6;i++)
 {
  display1(marks[i]);
 }
 for(i=0;i<=6;i++)
 {
  display(&marks[i]);
 }

}

void display1(int m)
{
 printf("%d ",m);
}

void display(int *n)
{
 printf("%d",*n);
}
