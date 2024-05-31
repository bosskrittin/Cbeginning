#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    int letter ; //97 = 'a' & 122 = 'z' 

    for (size_t letter = 122; letter >= 97; letter--)
    {
        write(1, &letter, 1);
    }
    
    write(1, "\n", 1);
}

int main(void) {
    ft_print_reverse_alphabet();
    return 0;
}