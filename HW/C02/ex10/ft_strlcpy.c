#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int src_len = strlen(src);
    unsigned int i = 0 ;

    if (size == 0)
    {
        return src_len;
    }
    while (i < size-1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return src_len;
}

int main() 
{
    char dest[50] = "";
    char *src1 = "bangkok";
    char *src2 = "Good";
    printf("%s\n",dest);
    ft_strlcpy(dest,src1,strlen(src1)+1);    
    ft_strlcpy(dest,src2,strlen(src2)+1);   
    printf("%s\n",dest);
    return 0;
}