#include <unistd.h> 
#include <fcntl.h>
#include <stdio.h>
void ft_putchar(char c);
void ft_is_negative(int n);


int main(void) {
    // ft_is_negative (-1);
    // ft_is_negative (0);
    // ft_is_negative (1);
    
    // ZYXWVUTSRQPONMLKJIHGFEDCBA
    // for (size_t i = 90; i >= 65; i--)
    // {
    //     ft_putchar(i);
    // }
    
    //     ft_putchar('\n');
    
    // 0123456789
    for (size_t i = 48; i < 58; i++)
    {
        ft_putchar(i);        
    }
    
    
    return 0;
}


// void    ft_putchar(char c)
// {
//     write(1,&c,1);
// }
// void ft_is_negative(int n)
// {
//     if (n<0)
//     {
//         ft_putchar('N');
//     }else{
//         ft_putchar('P');
//     }
    
// }
