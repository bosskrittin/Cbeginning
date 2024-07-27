#include <unistd.h> 

void ft_putnbr_base(int nbr, char *base)
{


return;
}


int main() {
    // Example usage
    ft_putnbr_base(42, "0123456789"); // Output: 42
    ft_putnbr_base(-42, "01");        // Output: -101010
    ft_putnbr_base(255, "0123456789ABCDEF"); // Output: FF
    ft_putnbr_base(-255, "poneyvif");         // Output: -777
    ft_putnbr_base(123, ""); // Invalid base, nothing will be displayed

    return 0;
}
