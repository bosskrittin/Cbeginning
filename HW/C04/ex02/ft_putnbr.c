#include <unistd.h> 
#include <stdio.h>
void ft_putnbr(int nb)
{    
    char c ;
    if (nb == -2147483648)
    {
        write(1,"-2147483648",12);
        return;
    }
    if (nb < 0)
    {        
        write(1,"-",1);
        nb *=-1 ;
    }
    
    
    if (nb<=9)
    {
        c = '0'+ nb;
        write(1,&c,1);
    }
    if (nb>9)
    {
        ft_putnbr(nb/10);
        c = (nb % 10) + '0';
        write(1,&c,1);
    }
}  
int main() 
{
//    ft_putnbr(0);   
//    ft_putnbr(1); 
//    ft_putnbr(2); 
//    ft_putnbr(3); 
//    ft_putnbr(4); 
//    ft_putnbr(5); 
//    ft_putnbr(6); 
//    ft_putnbr(7); 
//    ft_putnbr(8); 
//    ft_putnbr(9); 
//    ft_putnbr(2147483649); 
    // ft_putnbr(-42); 
    ft_putnbr(-2147483648); 
    return 0;
}



