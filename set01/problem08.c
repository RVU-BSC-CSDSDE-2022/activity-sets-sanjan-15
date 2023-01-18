#include <stdio.h>
int input_array_size()
{
  int n;
  printf("Enter no. of elments to be added ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
    for(int i=0;i<n;i++)
       {
        printf("Enter array element %d \n",i+1);
        scanf("%d",&a[i]);
       }
}
int sum_n_array(int n,int a[n])
{
    int sum =0;
    for(int i=0;i<n;i++)
       {
        sum+=i;
       }
    return sum;   
}
void output(int n,int a[n],int sum)
{
    printf("The sum of %d nos. is %d",n,sum);
}
int main()
{
    int n,a[n],sum;
    n = input_array_size();
    input_array(n,a);
    sum = sum_n_array(n,a);
    output(n,a,sum);
    return 0; 
}