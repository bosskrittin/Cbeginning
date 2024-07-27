#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr = 42 ;
}
int main ()
{
    int number=0;
    int *ptr;

    ptr = &number;
    printf("%d\n",number);
    ft_ft(ptr);
    printf("%d\n",number);
    return 0;
}