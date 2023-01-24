#include <stdio.h>
void input(float *base, float *height)
{
    printf("Enter base of the triangle\n");
    scanf("%f",base);
    printf("Enter height of the base\n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area = (base*height)/2;
}
void output(float base, float height, float area)
{
    printf("The area of triangle with base %.2f and height %.2f is %.2f",base,height,area);
}
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
}