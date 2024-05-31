#include <unistd.h>

void ft_print_comb(void) 
{
    char a,b,c,d;
    
    for (size_t a = '0'; a <= '9'; a++)
    {        
        for (size_t b = '0' ; b <= '9'; b++)
        {                       
            for (size_t c = a ; c <= '9'; c++)
            {
                for (size_t d = '0'; d <= '9'; d++)
                {
                    if (a < c || (a == c && b < d)) 
                    {
                        write(1, &a, 1);
                        write(1, &b, 1);
                        write(1, " ", 1);
                        write(1, &c, 1);
                        write(1, &d, 1);
                                           
                        if (!(a == '9' && b == '8' && c == '9' && d == '9')) 
                        {
                            write(1, ", ", 2);
                        }
                    }   
                                        
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