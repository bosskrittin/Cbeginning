#include <ctype.h>
#include <stdio.h>

int ft_atoi(char *str) 
{
    int count = 0; 
    int sign=1 ;
    int result = 0;    

    while (*str==' ') {
        str++;
        // printf("%s\n",str);  
    }   
    // Determine sign
    while (*str == '-' || *str == '+')
    {        
        if (*str == '-')
        {            
            count++;  
        }          
        str++;   
        // printf("%s\n",str);             
    }    
    // printf("%d\n",count);       
    if (count%2!=0)
    {
        sign = -1;
    }         
    // printf("%d\n",sign);   
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        // printf("%d\n",result);
        str++;
    }

    return result*sign;      
}

int main() 
{   
    
    printf("%d\n",ft_atoi(" ---+--+1234ab567")); 
    
    return 0;
}




