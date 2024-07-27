#include <stdio.h>
#include <unistd.h>

void ft_puthex(int dec)
{

    char hex[16] = "0123456789abcdef";
    if (dec<16)
    {
        write(1,&hex[dec],1);
        return;
    }
    ft_puthex(dec/16);
}

void ft_putstr_non_printable(char *str)
{
        int dec = 0;
    while (*str)
    {
        if (*str<32)
        {
            dec = *str;
            printf("(%d)",dec);
            write(1,"\\",1);
            if (dec<16)
            {
                write(1,"0",1);
            }
            ft_puthex(dec);
            str++;
        }
           
        write(1,str,1);
        str++;
    }    
    return ;
}

int main() 
{    
    char str1[] = "Coucou\rtu vas bien ?";  
    printf("%s\n",str1);  
    ft_putstr_non_printable(str1);        
    return 0;
}

