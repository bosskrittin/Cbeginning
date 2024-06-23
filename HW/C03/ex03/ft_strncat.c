#include <stdio.h>
#include <string.h>
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i =0;    

    while (*dest!='\0')          
    dest++;

    while (i-1<nb)
    {
        if (*src!='\0')
        {
            *dest=*src;
        }        
        src++;
        i++;
    }    
    
    return dest;
}

int main() 
{
    char dest[20] = "Hello, ";
    char src[] = "world!111";
    int nb = 4;
    
    printf("Before: %s\n", strncat(dest,src,nb));  
    ft_strncat(dest,src,nb);    
    printf("After: %s\n", dest);
    
    return 0;
}