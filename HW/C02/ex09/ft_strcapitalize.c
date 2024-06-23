#include <stdio.h>

char *ft_strcapitalize(char *str) {
    int i = 0;

    // Flag to track if the current character is the start of a word
    int word_start = 1; 

    while (str[i] != '\0') {        
            if (word_start) // Capitalize the first character of the word
            {
                if (str[i] >= 'a' && str[i] <= 'z')
                {
                    str[i] -= 32 ;
                    word_start = 0;
                } 
                else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
                {                    
                    word_start = 0;
                }         
            } 
            else if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32 ;                
            } 
            if (str[i] == ' '|| (str[i] == '+' || str[i] == '-'))
            {
                word_start = 1;                
            }  
        i++; 
    }
    return str;
}

int main() {
    char str1[] = "heLloWoRlD";
    char str2[] = "Salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", ft_strcapitalize(str1)); // "Hello World"
    printf("%s\n", ft_strcapitalize(str2)); // "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"
    
    return 0;
}
