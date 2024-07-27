#include <stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src)
{
    while (*dest!='\0')          
    dest++;
    
    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }    
    *dest='\0';
    return dest;
}

int main() 
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    
    printf("Before concatenation: %s\n", dest);
    // strcat(dest,src);    
    ft_strcat(dest,src);    
    printf("After concatenation: %s\n", dest);
    ft_strcat(dest,src);    
    printf("After concatenation: %s\n", dest);
    ft_strcat(dest,src);    
    printf("After concatenation: %s\n", dest);
    ft_strcat(dest,src);    
    printf("After concatenation: %s\n", dest);
    ft_strcat(dest,src);    
    printf("After concatenation: %s\n", dest);
    return 0;
}