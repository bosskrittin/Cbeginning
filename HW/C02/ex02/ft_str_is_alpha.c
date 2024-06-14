#include <stdio.h>
#include <string.h>
int ft_str_is_alpha(char *str)
{
    while (*str)
    {
        
        if (!((*str >= 'a' && *str<= 'z') || (*str >= 'A' && *str <= 'Z')))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

// str         *str
// str[1]       H   
// str[2]       E
// str[3]       L

int main() 
{    
    printf("%d\n",ft_str_is_alpha("Hello"));//1
    printf("%d\n",ft_str_is_alpha("ab12"));//0
    return 0;
}

