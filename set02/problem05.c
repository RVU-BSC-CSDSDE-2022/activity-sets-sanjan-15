#include<stdio.h>
int input()
{
    int n;
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    int n,g;
    n = (a>b)?b:a;
    for(int i=n;i>=1;i--)
       {
        if(a%i==0 && b%i==0)
        {
            g=i;
            break;
        }
       }
    return g;   
}
void output(int a, int b, int gcd)
{
    printf("%d",gcd);
}
int main()
{
    int a,b,gcd;
    printf("Enter 1st no.\n");
    a = input();
    printf("Enter 2nd no.\n");
    b = input();
    gcd = find_gcd(a,b);
    output(a,b,gcd);
}