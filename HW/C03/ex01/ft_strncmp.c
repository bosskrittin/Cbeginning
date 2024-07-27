#include <string.h>
#include <stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i =0;
    // while ( *s1!='\0' && *s2!='\0' && i < n && *s1==*s2)
    while ( i < n )
    {    
       if (*s1!=*s2)
       {
        return (*s1-*s2);
       }       
       s1++;
       s2++; 
       i++;
    }
    return 0;
}

int main (void)
{
    char s1[] = "ABC";
    char s2[] = "ABCD";

    printf("%d\n",strncmp(s1,s2,3));
    printf("%d\n",ft_strncmp(s1,s2,5));
    return 0;
}