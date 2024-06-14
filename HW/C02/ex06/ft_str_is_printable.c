#include <stdio.h>

int ft_str_is_printable(char *str) {
    while (*str != '\0') {
        if (!(*str >= 32 && *str <= 126)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    printf("%d\n", ft_str_is_printable("A"));        // 1
    printf("%d\n", ft_str_is_printable("234"));      // 1
    printf("%d\n", ft_str_is_printable("abv"));      // 1
    printf("%d\n", ft_str_is_printable("aBv123"));   // 1
    printf("%d\n", ft_str_is_printable("\n"));      // 0
    printf("%d\n", ft_str_is_printable("\x1F"));     // 0
    printf("%d\n", ft_str_is_printable("# $ & "));   // 1
    printf("%d\n", ft_str_is_printable(""));         // 1
    return 0;
}
