#include <stdio.h>
#include <string.h>
char *ft_strstr(char *str, char *to_find)
{
    while (*str!='\0')
    {       
    char *p1 = str;
    char *p2 = to_find;

    while (*p1 == *p2 && *p1 != '\0' && *p2 != '\0') 
    {
            p1++;
            p2++;
        }
    if (*p2=='\0')
    {
        return str;
    } 
    str++;   
}
}    

int main() 
{
    char str[] = "Hello, World123456";
    char to_find[] = "World";    
    char *result_std = strstr(str, to_find);
    if (result_std != NULL) {
        printf("The result_std = %s and str = %s and to_find = %s \n",result_std,str,to_find );
        printf("Standard strstr: Found '%s' in '%s' at position %ld\n", to_find, str, result_std - str);        
        char *result_std = ft_strstr(str, to_find);
        printf("The result_std = %s and str = %s and to_find = %s \n",result_std,str,to_find );
        printf("Standard strstr: Found '%s' in '%s' at position %ld\n", to_find, str, result_std - str);
    } else {
        printf("Standard strstr: '%s' not found in '%s'\n", to_find, str);
    }
      
    
    return 0;
}



