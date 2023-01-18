#include <stdio.h>
int input_array_size();
void input_array(int n,int a[n]);
int sum_n_array(int n,int a[n]);
void output(int n,int a[n],int sum);

int input_array_size()
{
  int n;
  printf("Enter no. of elments to be added ");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
    int i;
    for(i=0;i<n;i++)
       {
        printf("Enter array element %d \n",i+1);
        scanf("%d",&a[i]);
       }
}
int sum_n_array(int n,int a[n])
{
    int i,sum =0;
    for(i=0;i<n;i++)
       {
        sum+=a[i];
       }
    return sum;   
}
void output(int n,int a[n],int sum)
{
    printf("The sum of %d entered nos. is %d",n,sum);
}
int main()
{
    int n,sum;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_n_array(n,a);
    output(n,a,sum);
    return 0; 
}