#include <unistd.h> 
#include <fcntl.h>
#include <stdio.h>
void ft_putchar(char c);
void ft_is_negative(int n);


int main(void){
    ft_is_negative (-1);
    ft_is_negative (0);
    ft_is_negative (1);
    // int fd;
    // fd = open("Test.txt",O_WRONLY);
    // printf("%d\n",fd);
    // write(1,"Hello World\n",12);
    // ft_putchar(97);
    // ft_putchar(98);
    // ft_putchar('c');
    // ft_putchar('d');
    // ft_putchar('e');
    // ft_putchar('f');
    // ft_putchar('g');
    // ft_putchar('h');
    // ft_putchar('i');
    // ft_putchar('j');
    // ft_putchar('k');
    // ft_putchar('l');
    // ft_putchar('m');
    // ft_putchar('n');
    // ft_putchar('o');
    // ft_putchar('p');
    // ft_putchar('q');
    // ft_putchar('r');
    // ft_putchar('s');
    // ft_putchar('t');
    // ft_putchar('u');
    // ft_putchar('v');
    // ft_putchar('w');
    // ft_putchar('x');
    // ft_putchar('y');
    // ft_putchar('z');    

    // ZYXWVUTSRQPONMLKJIHGFEDCBA
    for (size_t i = 90; i >= 65; i--)
    {
        ft_putchar(i);
    }
    
        ft_putchar('\n');
    
    // 0123456789
    for (size_t i = 48; i < 58; i++)
    {
        ft_putchar(i);        
    }
    
    
    return 0;
}


void    ft_putchar(char c)
{
    write(1,&c,1);
}
void ft_is_negative(int n)
{
    if (n<0)
    {
        ft_putchar('N');
    }else{
        ft_putchar('P');
    }
    
}
