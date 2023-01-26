#include<stdio.h>
int input_array_size()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    for(i=0;i<n;i++)
       {
        printf("Enter element %d\n",i+1);
        scanf("%d",&a[i]);
       }
}
int sum_composite_numbers(int n, int a[n])
{
    int sum =0,t[n],i;
    for(i=0;i<n;i++)
       {
        t[i]=0;
       }
    for(i=0;i<n;i++)
       {
        for(int j=1;j<=a[i];j++)
           {
             if(a[i]%j==0)
               t[i]++;
           }
       }    
    for(i=0;i<n;i++)
       {
        if(t[i]>2)
          sum+=a[i]; 
       }   
    return sum;
}
void output(int sum)
{
   printf("%d",sum); 
}
int main()
{
    int n,sum;
    n = input_array_size();
    int a[n];
    input_array(n,a);
    sum = sum_composite_numbers(n,a);
    output(sum);
}