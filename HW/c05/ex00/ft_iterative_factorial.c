#include<stdio.h>

int ft_iterative_factorial(int nb)
{
    int number = 1;    
    int A=1;

    while (number <= nb)
    {        
        A *= number;        
        // printf("%d\n",A);
        number++;
    }    
    return A;
}

int main ()
{
    printf("%d\n",ft_iterative_factorial(21));
    // printf("%d\n",ft_iterative_factorial(7));    
    return 0;
}