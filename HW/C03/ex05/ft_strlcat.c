#include <stdio.h>
#include <string.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{    
    unsigned int dest_len = strlen(dest);
    unsigned int src_len = strlen(src);
    unsigned int total_len = dest_len + src_len;
    printf("size %u \n",size);
    // Determine available space in dest
    if (size < total_len) {        
        return total_len;
    } else {
        // Copy at most (size - dest_len - 1) bytes from src to dest
        size_t i = dest_len;
        size_t j = 0;
        while (src[j] != '\0' && i < size - 1) {
            dest[i] = src[j];
            i++;
            j++;
        }
        dest[i] = '\0'; // Ensure dest is null-terminated
    }

    return total_len; // Return total length of concatenated string
}  
   

int main() 
{
    char dest[20] = "Hello";
    char src[] = " World!";
    size_t dest_size = sizeof(dest);

    printf("Before ft_strlcat: dest = %s\n", dest);

    size_t new_length = ft_strlcat(dest, src, dest_size);

    printf("After ft_strlcat: dest = %s\n", dest);
    printf("New length of dest: %zu\n", new_length);

    return 0;
}



