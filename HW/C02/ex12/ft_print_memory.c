#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void    *ft_print_memory(void *addr, unsigned int size);

int main (void)
{
    char test[] = "This is a test string to display memory.";
    ft_print_memory(test, sizeof(test) - 1);
    return (0);
}


void print_hex(unsigned char c) {
    char *hex = "0123456789abcdef";
    write(1, &hex[c / 16], 1);
    write(1, &hex[c % 16], 1);
}

void print_address(unsigned long addr) {
    char hex_digits[16] = "0123456789abcdef";
    char address[16];
    int i = 15;

    while (i >= 0) {
        address[i--] = hex_digits[addr % 16];
        addr /= 16;
    }

    write(1, address, 16);
}

void *ft_print_memory(void *addr, unsigned int size) {
    unsigned char *ptr = (unsigned char *)addr;
    unsigned int i, j;

    if (size == 0)
        return (addr);

    for (i = 0; i < size; i += 16) {
        // Print address
        print_address((unsigned long)(ptr + i));
        write(1, ": ", 2);

        // Print hexadecimal content
        for (j = 0; j < 16; j++) {
            if (i + j < size) {
                print_hex(*(ptr + i + j));
            } else {
                write(1, "  ", 2);
            }
            if (j % 2)
                write(1, " ", 1);
        }

        // Print printable characters
        for (j = 0; j < 16 && i + j < size; j++) {
            unsigned char c = *(ptr + i + j);
            if (isprint(c))
                write(1, &c, 1);
            else
                write(1, ".", 1);
        }

        write(1, "\n", 1);
    }
    return (addr);
}
