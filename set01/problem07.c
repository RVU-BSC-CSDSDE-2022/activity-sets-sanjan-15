#include <stdio.h>
int input_n()
{
  int n;
  printf("Enter no. of natural nos. to be added ");
  scanf("%d",&n);
  return n;
}
int sum_n_nos(int n)
{
    int sum=0,i;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
void output(int n,int sum)
{
    printf("Enter sum of %d numbers is %d",n,sum);
}   
int main()
{
    int n,sum;
    n = input_n();
    sum = sum_n_nos(n);
    output(n,sum);
    return 0;
}