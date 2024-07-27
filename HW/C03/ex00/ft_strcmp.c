#include <string.h>
#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    while ( *s1!='\0' && *s2!='\0' && *s1==*s2)
    {    
       s1++;
       s2++; 
    }
    return (*s1-*s2);
}

int main (void)
{
    char s1[] = "ABC";
    char s2[] = "ABCD";

    printf("%d\n",strcmp(s1,s2));
    printf("%d\n",ft_strcmp(s1,s2));
    return 0;
}