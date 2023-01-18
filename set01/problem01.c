// 1. Write a C program to print your name.
#include <stdio.h>
int main()
{
  char name[20];
  printf("Enter your name\n");
  scanf("%[^\n]s",&name);
  printf("Your name is %s",name);
  return 0;
}