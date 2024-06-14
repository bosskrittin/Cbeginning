#include <stdio.h>
int ft_str_is_uppercase(char *str)
{
while (*str != '\0') {
        if (!(*str >= 'A' && *str <= 'Z')) {
            return 0;
        }else return 1;
        str++;
    }
    return 1;
}

int main ()
{
    printf("%d\n",ft_str_is_uppercase("ABC"));//1
    printf("%d\n",ft_str_is_uppercase("234"));//0
    printf("%d\n",ft_str_is_uppercase("aBv"));//0
    printf("%d\n",ft_str_is_uppercase("abv123"));//0
    printf("%d\n",ft_str_is_uppercase(""));//1
    return 0;
}