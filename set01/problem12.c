#include<stdio.h>
struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;
int get_n()
{
    int n;
    printf("Enter the no. of n elements ");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex n;
    printf("Enter real no. and imaginary no.\n");
    scanf("%f%f",&n.real,&n.imaginary);
    return n;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result;
    result.real=0;
    result.imaginary=0;
    for(int i=0;i<n;i++)
       {
        result.real+=c[i].real;
        result.imaginary+=c[i].imaginary;
       }  
    return result;   
}
void output(int n, Complex c[n], Complex result)
{
    for(int i=0;i<n;i++)
    {
     printf("(%.0f+%.0fi) ",c[i].real,c[i].imaginary);
     if(i!=n-1)
       printf(" + "); 
     else
       printf("is (%.0f+%.0fi)",result.real,result.imaginary);      
    }
}
int main()
{
    int n,i;
    n = get_n();
    Complex c[n],sum[n-1],result;
    for(i=0;i<n;i++)
       {
        printf("Enter the %d element\n",i+1);
        c[i] = input_complex();
       }
    result = add_n_complex(n,c);  
    output(n,c,result);     
}