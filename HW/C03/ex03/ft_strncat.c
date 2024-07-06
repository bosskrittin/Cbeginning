#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i = 0;   
    while (*dest!='\0')          
    dest++;

    while (i<nb)
    {
        if (*src!='\0')
        {
            *dest=*src;
        }        
        src++;
        dest++;
        i++;
    }    
    *dest='\0';
    return dest;
}

int main() 
{
    char dest[20] = "Hello, ";
    char src[] = "world!111";
    int nb = 4;
    
    printf("Before: %s\n", dest);  
    ft_strncat(dest,src,nb);    
    printf("After: %s\n", dest);
    
    return 0;
}