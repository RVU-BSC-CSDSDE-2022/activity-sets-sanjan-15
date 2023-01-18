#include<stdio.h>
int input()
{
    int n;
    printf("Enter number\n");
    scanf("%d",&n);
    return n;
}
int add(int a,int b)
{
    return a+b;
}
void output(int a,int b,int sum)
{
    printf("The sum of %d + %d is %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    a= input();
    b= input();
    sum = add(a,b);
    output(a,b,sum);
}