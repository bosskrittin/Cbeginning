#include <unistd.h>

void ft_print_comb(void) {
    char a,b,c;
    
    for (size_t a = '0'; a <= '9'; a++)
    {        
        for (size_t b = a + 1; b <= '9'; b++)
        {
            for (size_t c = b + 1; c <= '9'; c++)
            {
                write(1,&a, 1);
                write(1,&b, 1);
                write(1,&c, 1);
                if (a != '7' || b != '8' || c != '9')
                {
                    write(1, ",", 1);
                }
            }
            
        }
        
    }
    
    write(1,"\n",1);
}

int main(void) {
    ft_print_comb();
    return 0;
}