#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{


    
}

int main() {
    char str1[] = "heLloWoRlD";
    char str2[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", ft_strlcpy(str1)); // "Hello World"
    printf("%s\n", ft_strlcpy(str2)); // "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
    
    return 0;
}
