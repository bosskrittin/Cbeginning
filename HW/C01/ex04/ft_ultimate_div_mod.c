#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{    
     int div = *a / *b;
     int dev = *a % *b;      
    *a = div; // Update the value at the address pointed to by a
    *b = dev; // Update the value at the address pointed to by b
}

int main ()
{
    int *a,*b;
    int number1 = 18,number2 = 7;
    a = &number1;
    b = &number2;
    printf("A = %d\n",number1);
    printf("B = %d\n",number2);
    ft_ultimate_div_mod(a,b);
    printf("a divides b = %d\n",number1);
    printf("a division b = %d\n",number2);
    return 0;
}