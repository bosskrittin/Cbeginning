#include <stdio.h>
#include <string.h>
char *ft_strlowcase(char *str)
{
    int i = 0 ;
    while (str[i])
    {       
        if (str[i]>='A' && str[i]<='Z')
        {
            str[i] += 32;
        }        
        i++;
    }
    return str;
}

int main() 
{    
    char str1[] = "heLlo WoRlD";
    char str2[] = "AdcHuuggYYyyuu124\n";
    printf("%s\n",ft_strlowcase(str1));
    printf("%s\n",ft_strlowcase(str2));
    return 0;
}

