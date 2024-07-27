#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
    int count = 0;
    while (*str != '\0') // \0 (null terminator) ซึ่งเป็นสัญลักษณ์ของสตริงที่บ่งบอกถึงจุดสิ้นสุดของสตริง
    {
        count++; //1 2 3 4 5 6 7 8 9 10 11
        str++;   //H e l l o   W o r l  d
    }    
    return count; //return ค่า count int กลับไปที่ char *str => ft_strlen(str) = 11
}

int main ()
{
    char *str = "Hello World";    
    int length = ft_strlen(str); // length = 11
    printf("the number of characters in a string = %d\n",length);
    ft_strlen(str);
    return 0;
}
