//2. Write a C program to add two numbers.

#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  c=a+b;
  printf("sum  of %d + %d is %d\n",a,b,c);
  return 0;
}