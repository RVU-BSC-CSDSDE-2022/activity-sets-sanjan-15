#include<stdio.h>
struct complex {
	float real;
	float imaginary;
};
typedef struct complex Complex;
Complex input_complex()
{
    Complex n;
    printf("Enter real no. and imaginary no.\n");
    scanf("%f%f",&n.real,&n.imaginary);
    return n;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real+b.real;
    sum.imaginary = a.imaginary+b.imaginary;
    return sum;
}
void output(Complex a, Complex b, Complex sum)
{
    printf("Sum of (%.0f+%.0fi)+(%.0f+%.0fi) is (%.0f+%.0fi)",a.real,a.imaginary,b.real,b.imaginary,sum.real,sum.imaginary);
}
int main()
{
    Complex n1,n2,sum;
    printf("NO. 1\n");
    n1 = input_complex();
    printf("No. 2\n");
    n2 = input_complex(n1,n2);
    sum = add_complex(n1,n2);
    output(n1,n2,sum);
}