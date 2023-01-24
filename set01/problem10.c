#include<stdio.h>
#include<string.h>
void input_two_strings(char *string1, char *string2)
{
    printf("Enter two strings\n");
    scanf("%s %s",string1,string2);
}
int stringcompare(char *string1, char *string2)
{
    int result = strcmp(string1,string2); 
    return result;    
}
void output(char *string1, char *string2, int result)
{
    if(result == 0)
      printf("Both strings are equal");
    else if(result>0) 
      printf("%s is greater than %s",string1,string2);
    else if(result<0) 
      printf("%s is greater than %s",string2,string1);     
}
int main()
{
    char s1[20],s2[20];
    int result;
    input_two_strings(s1,s2);
    result = stringcompare(s1,s2);
    output(s1,s2,result);
}