#include <stdio.h>

int ft_recursive_power(int nb, int power) 
{
   if (power < 0) 
   {
        return 0;
    }
    if (power == 0) 
    {
        return 1;
    } 
    if (power >1) 
    {
        nb = nb * ft_recursive_power(nb, power - 1);         
    } 
    
    return nb;
}

int main() {
    printf("2^3 = %d\n", ft_recursive_power(2, 3)); // 8
    printf("5^0 = %d\n", ft_recursive_power(5, 0)); // 1
    printf("0^0 = %d\n", ft_recursive_power(0, 0)); // 1
    printf("2^-2 = %d\n", ft_recursive_power(2, -2)); // 0
    printf("3^4 = %d\n", ft_recursive_power(3, 4)); // 81
    printf("2^31 = %d\n", ft_recursive_power(2, 31)); // large power
    printf("2^32 = %d\n", ft_recursive_power(2, 32)); // overflow 
    return 0;
}
