#include <stdio.h>
int ft_str_is_lowercase(char *str)
{
while (*str != '\0') {
        if (!(*str >= 'a' && *str <= 'z'))
        {
            return 0;
        }        
        str++;
    }
    return 1;
}

int main ()
{
    printf("%d\n",ft_str_is_lowercase("ABC"));//0
    printf("%d\n",ft_str_is_lowercase("234"));//0
    printf("%d\n",ft_str_is_lowercase("abv"));//1
    printf("%d\n",ft_str_is_lowercase("abv123"));//0
    printf("%d\n",ft_str_is_lowercase(""));//1
    return 0;
}