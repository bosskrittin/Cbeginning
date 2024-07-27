#include <unistd.h>
#include <stdio.h>

void ft_print_combn(int n);

int main(void)
{
    ft_print_combn(0);
    write(1, "\n", 1);
    ft_print_combn(1);
    write(1, "\n", 1);
    ft_print_combn(2);
    // write(1, "\n", 1); 
    // ft_print_combn(3);
    // write(1, "\n", 1);
    // ft_print_combn(4);
    // write(1, "\n", 1);
    // ft_print_combn(10);
    // write(1, "\n", 1);
    return (0);
}

void print_combn(int *comb, int n)
{
    int i;
    char c;

    for (i = 0; i < n; i++)
    {
        c = comb[i] + '0';
        write(1, &c, 1);
    }
    if (comb[0] < 10 - n)
        write(1, ", ", 2);
}

void generate_combn(int *comb, int n, int idx, int next)
{
    if (idx == n)
    {
        print_combn(comb, n);
        return;
    }
    for (int i = next; i <= 10 - (n - idx); i++)
    {
        comb[idx] = i;
        generate_combn(comb, n, idx + 1, i + 1);
    }
}

void ft_print_combn(int n)
{
    if (n <= 0 || n > 10)
        return;

    int comb[n];
    generate_combn(comb, n, 0, 0);
}