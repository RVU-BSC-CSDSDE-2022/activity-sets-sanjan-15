#include<stdio.h>
int input_side()
{
    int n;
    scanf("%d",&n);
    return n;
}
int check_scalene(int a, int b, int c)
{
    int sca;
    if(a!=b&&b!=c&&c!=a)
       sca = 1;
    else
       sca = 0;
    return sca;      
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene==1)
      printf("The triangle with sides %d, %d and %d is scalene",a,b,c);
    else if(isscalene==0)
      printf("The triangle with sides %d, %d and %d is not scalene",a,b,c);  
}
int main()
{
    int a,b,c,isscalene;
    printf("Enter side 1\n");
    a = input_side();
    printf("Enter side 2\n");
    b = input_side();
    printf("Enter side 3\n");
    c = input_side();
    isscalene = check_scalene(a,b,c);
    output(a,b,c,isscalene);
}