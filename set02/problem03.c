#include<stdio.h>
int input_number()
{
    int n;
    printf("Enter no.\n");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int a=0,i,result;
    for(i=1;i<=n;i++)
       {
        if(n%i==0)
          a++;
       }
    if(a>2)
       result = 1;
    else 
       result = 0;
    return result;        
}
void output(int n, int result)
{
    if(result==1)
       printf("%d is a composite number",n);
    else if(result==0)
           printf("%d is not a composite number",n);    
}
int main()
{
    int n,result;
    n = input_number();
    result = is_composite(n);
    output(n,result);
}
