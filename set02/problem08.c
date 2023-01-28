#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;
int input_n()
{
    int n;
    printf("Enter no. of triangles\n");
    scanf("%d",&n);
    return n;
}
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n])
{
    int i;
    for(i=0;i<n;i++)
       {
        printf("Enter base and altitude of triangle %d\n",i+1);
        printf("Enter base\n");
        scanf("%f",&t[i].base);
        printf("Enter altitude\n");
        scanf("%f",&t[i].altitude);
       }
}
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n])
{
    for(int i=0;i<n;i++)
       {
        t[i].area = (t[i].altitude*t[i].base)/2;
       } 
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
    Triangle s;
    s.area = t[0].area;
    s.base = t[0].base;
    s.altitude = t[0].altitude;
    for(int i=1;i<n;i++)
       {
        if(t[i].area<s.area)
          {
            s.area = t[i].area;
            s.base = t[i].base;
            s.altitude = t[i].altitude;
          }
       }
    return s;   
}
void output(int n, Triangle t[n], Triangle smallest)
{
    printf("The smallest triangle among triangles having base and height ");    
    for(int i=0;i<n;i++)
       printf("(%.2f,%.2f) ",t[i].base,t[i].altitude);
    printf("is the triangle having base = %.2f ,altitude = %.2f and area = %.2f",smallest.base,smallest.altitude,smallest.area); 
}
int main()
{
    int n;
    n = input_n();
    Triangle t[n],s;
    input_n_triangles(n,t);
    find_n_areas(n,t);
    s = find_smallest_triangle(n,t);
    output(n,t,s);
}