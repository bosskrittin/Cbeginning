#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str) // or use *str != '\0' , while (*str) หมายถึงว่าโปรแกรมจะทำงานในลูป while จนกว่าค่าที่ str ชี้ไปจะไม่ใช่ NULL (หรือ '\0')
    {
        write(1,str,1);        
        str++;
    }
}

// 1 2 3 4 5 6 7 8 9 10 11
// H e l l o   W o r l  d

int main ()
{
    char *str;
    str = "Hello World"; 
    ft_putstr(str);    
    write(1,"\n",1);
    return 0;
}
