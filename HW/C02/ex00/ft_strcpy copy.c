#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src) 
{
   while (*src)
   {        
        *dest = *src;    
        src++;
        dest++;
   }
   *dest = '\0';
    return (dest);
}

int main() 
{
    char dest[50] = "";
    char *src = "To be number one project";
    // *ft_strcpy( );
    printf("%s\n",dest);
    // strcpy(dest,src);
    ft_strcpy(dest,src);
    printf("%s\n",dest);
    return 0;
}

