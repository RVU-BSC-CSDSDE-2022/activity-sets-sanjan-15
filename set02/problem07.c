#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle()
{
    Triangle t;
    printf("Enter altitude and base of triangle\n");
    scanf("%f%f",&t.altitude,&t.base);
    return t;
}
void find_area(Triangle *t)
{
    (*t).area = (t->base*t->altitude)/2;
}
void output(Triangle t)
{
    printf("The area of triangle with base = %.2f and altitude = %.2f is %.2f",t.base,t.altitude,t.area);
}
int main()
{
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
}