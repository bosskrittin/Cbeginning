#include <stdio.h>
void print_number(int n)
{
    if (n>=11)
    {
        return;
    }
    
    printf("%d ",n);
    print_number(n+1);
}

int main ()
{
    print_number(1);
    return 0;
}