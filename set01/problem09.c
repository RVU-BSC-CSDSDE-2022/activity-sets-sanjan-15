#include<stdio.h>
#include<math.h>
float input()
{
    float n;
    printf("Enter number ");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    float root;
    root = sqrt(n);
    return root;
}
void output(float n,float sqrroot)
{
    printf("Squre root of %.1f is %.1f ",n,sqrroot);
}
int  main()
{
    float n,sq;
    n = input();
    sq = square_root(n);
    output(n,sq);
} 