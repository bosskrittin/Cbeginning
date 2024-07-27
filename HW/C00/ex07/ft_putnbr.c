#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int nb) {
    int ab;
    if (nb < 0) {
        write(1,"-", 1);
        nb = -nb;
    }
    
    if (nb >= 10) {
        ft_putnbr(nb / 10);        
    }
    
    ft_putchar('0' + nb % 10);
}

int main(void) {
    int number = -5.123445343545568;
    ft_putnbr(number);
    return 0;
}