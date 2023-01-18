#include <stdio.h>
int input()
{
  int n;
  scanf("%d",&n);
  return n;
}
int compare(int a,int b,int c)
{
  if(a<b)
     a=b;
  if(a<c)
     a=c;
  return a;
}
void output(int a, int b,int c,int largest)
{
  printf("The largest no. is %d",largest);
}
int main()
{
  int a,b,c,largest;
  printf("Enter 1st no. ");
  a=input();
  printf("Enter 2nd no. ");
  b = input();
  printf("Enter 3rd no. ");
  c = input();
  largest = compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}


