#include <stdlib.h> // For malloc
#include <stddef.h> // For NULL
#include <stdio.h>

char *ft_strdup(char *src) 
{
    if (src == NULL) {
        return NULL;
    }
    
    // Calculate the length of the source string
    int len = 0;
    while (src[len] != '\0') {
        len++;
    }
    
    char *dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL) {
        return NULL;
    }   
    
    int i = 0;
    while (i < len)
    {
        dup[i] = src[i];
        i++;
    }    
    dup[i] = '\0';
    return dup;
}  

int main (void)
{
    char* str ;
    char* new_str;

    str = "Hi,Boss";
    new_str = ft_strdup(str);
    printf("%s\n",str);
    printf("%s\n",new_str);

    return 0;   
}
