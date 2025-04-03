#include<stdio.h>

int main()
{
 int arr[] = {10,20,30,45,67,56,74};
 int i = 4,*j,*k,*x,*y;
 j = &i;
 j = j+9;
 k = &i;
 k = k-3;
 x = &arr[1];
 y = &arr[5];
 j = &arr[4];
 k = (arr+4);
 if(j==k)
  printf("The two pointers point to the same direction\n");
 else
  printf("The two pointers point to different locations\n");
 return 0;
}
