#include <unistd.h>

// Function to compare two strings
int ft_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

// Function to display a string followed by a newline using write
void ft_putstr(char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

// Main function to sort and display arguments
int main(int argc, char const *argv[]) {
    if (argc > 1) {
        // Sort arguments using a simple bubble sort algorithm
        for (int i = 1; i < argc - 1; i++) {
            for (int j = i + 1; j < argc; j++) {
                if (ft_strcmp(argv[i], argv[j]) > 0) {
                    const char *temp = argv[i];
                    argv[i] = argv[j];
                    argv[j] = temp;
                }
            }
        }

        // Display sorted arguments
        for (int i = 1; i < argc; i++) {
            ft_putstr((char *)argv[i]);
        }
    }
    return 0;
}
