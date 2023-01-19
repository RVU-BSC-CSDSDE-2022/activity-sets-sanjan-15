#include<stdio.h>
void input_two_strings(char *string1, char *string2)
{
    printf("Enter two strings\n");
    scanf("%s %s",string1,string2);
}
int stringcompare(char *string1, char *string2)
{
    if(string1>string2)
       string2 = string1;
    return string2;     
}
void output(char *string1, char *string2, int result)
{}
int main()
{
    char s1[20],s2[20];
    int result;
    input_two_strings(s1,s2);
    result = 
}