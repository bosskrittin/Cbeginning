#include <stdio.h>
#include <string.h>

int ft_strlen(char *str)
{    int i=0;
    while (*str !='\0')
    {
        str++;
        i++;
    }
    return i;
}  
   

int main() 
{
    char dest[] = "Hello World School";
    
    printf("%s\n",dest);
    printf("%lu\n",strlen(dest));
    printf("%d\n",ft_strlen(dest));
    return 0;
}



