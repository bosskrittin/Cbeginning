#include <stdio.h>
#include <stdbool.h>

bool is_valid_base(char *base) {
    int len = 0;
    char *ptr;
    
    while (base[len]) {
        if (base[len] == '+' || base[len] == '-' || base[len] == ' ' || base[len] == '\t' || base[len] == '\n' || base[len] == '\v' || base[len] == '\f' || base[len] == '\r') {
            return false;
        }
        ptr = base + len + 1;
        while (*ptr) {
            if (*ptr == base[len]) {
                return false;
            }
            ptr++;
        }
        len++;
    }
    
    return len > 1;
}

int get_base_value(char c, char *base) {
    int i = 0;
    while (base[i]) {
        if (base[i] == c) {
            return i;
        }
        i++;
    }
    return -1;
}

int ft_atoi_base(char *str, char *base) {
    if (!is_valid_base(base)) {
        return 0;
    }

    int sign = 1;
    int result = 0;
    int base_len = 0;
    
    while (base[base_len]) {
        base_len++;
    }

    // Skip whitespace
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r') {
        str++;
    }

    // Handle sign
    if (*str == '-' || *str == '+') {
        if (*str == '-') {
            sign = -1;
        }
        str++;
    }

    // Convert to integer
    int value;
    while (*str) {
        value = get_base_value(*str, base);
        if (value == -1) {
            break;
        }
        result = result * base_len + value;
        str++;
    }

    return result * sign;
}

int main() {
    char str1[] = "101";
    char base1[] = "01";
    printf("%d\n", ft_atoi_base(str1, base1)); // Output: 5

    char str2[] = "1A";
    char base2[] = "0123456789ABCDEF";
    printf("%d\n", ft_atoi_base(str2, base2)); // Output: 26

    char str3[] = "    -2F";
    char base3[] = "0123456789ABCDEF";
    printf("%d\n", ft_atoi_base(str3, base3)); // Output: -47

    return 0;
}
