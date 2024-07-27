#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int ft_atoi_base(char *str, char *base) 
{
    int len = 0;     
    char *ptr;
     
    while (base[len]) 
    {
        // check invalid argument, the function should return 0.
        if (base[len] == '+' || base[len] == '-' || base[len] == ' ' || base[len] == '\n') 
        {
            return 0;
        }
        ptr = base + len + 1 ; 
        // Check same character twice     
        while (*ptr) 
        {
            if (*ptr == base[len]) 
            {
                return 0;
            }
            ptr++;
        }
        len++;        
    } 
    printf("%s\n",str);
    printf("%s\n",base);
    printf("%d\n",len);
    ///////////////////////// END Check Base ///////////////////////////////

    // int i = 0;
    // // int value;
    // while (str[i])
    // {
    //     if (str[i] == '+' || str[i] == '-' || str[i] == ' ' || str[i] == '\n')
    //     {
    //         str++;
    //     }      
    //         printf("%s\n",str);
    //         printf("%d\n",i); 
    // i++; 
    // }   
    int count=0;
    int result=0;
    char *ptr2;
    
    while (*str == '+' || *str == '-' || *str == ' ' || *str == '\n')
    {                
        str++;
        // printf("%s\n",str);
    } 
    while (*str!='\0')
    {
        ptr2 = str;
        ptr2 = *ptr2 * pow(len,count);
        result = result + ptr2;
        count++;
        str++;
        printf("%d\n",result);
    }

    return 0;
}

int main() {
    // char str1[] = "101";
    // char base1[] = "01";
    // printf("%d\n", ft_atoi_base(str1, base1)); // Output: 0 

    // char str2[] = "1A";
    // char base2[] = "0123456789ABCDEF";
    // printf("%d\n", ft_atoi_base(str2, base2)); // Output: 26

    char str3[] = "    -2F";
    char base3[] = "0123456789ABCDEF";
    printf("%d\n", ft_atoi_base(str3, base3)); // Output: -47

    return 0;
}
