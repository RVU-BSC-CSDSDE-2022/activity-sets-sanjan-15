#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("Enter a word\n");
    scanf("%[^\n]s",a);
}
void str_reverse(char *str, char *rev_str)
{
    int i;
    int n= strlen(str);
    //rev_str = strrev(str);
    for(i=0;i<n;i++)
       {
        *(rev_str+(n-1-i))=*(str+i);
        //rev_str[n-1-i]=str[i];
       }
}
void output(char *a, char *reverse_a)
{
    printf("%s",reverse_a);
}
int main()
{
    char str[30];
    input_string(str);
    int n = strlen(str);
    char rev[n];
    str_reverse(str,rev);
    output(str,rev);
}