#include <unistd.h>

void ft_print_numbers(void) {
    char letter ; //97 = 'a' & 122 = 'z' 

    for (size_t letter = '1'; letter <= '9'; letter++)
    {
        write(1, &letter, 1);
    }
    
    write(1, "\n", 1);
}

int main(void) {
    ft_print_numbers();
    return 0;
}