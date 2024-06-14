#include <stdio.h>
#include <string.h>
char *ft_strupcase(char *str)
{
    int i = 0 ;
    while (str[i])
    {       
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }        
        i++;
    }
    return str;
}

int main() 
{    
    char str1[] = "heLlo WoRlD";
    char str2[] = "AdcHuuggYYyyuu124\n";
    printf("%s\n",ft_strupcase(str1));
    printf("%s\n",ft_strupcase(str2));
    return 0;
}

