#include <stdio.h>
#include<stdlib.h>

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}


int main()
{
 char another;
 int num;
 do
 {
  printf("\nEnter the number: ");
  scanf("%d", &num);
  printf("\nThe squared of number %d is %d", num, num * num);
  printf("\nDo you want another try? (y/n) :");
  clearInputBuffer();
  scanf("%c", &another);
 }while(another == 'y');
 return 0;
}
