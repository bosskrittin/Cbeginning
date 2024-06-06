#include <stdio.h>
void ft_div_mod(int a, int b, int *div, int *mod)
{        
    *div = a / b ;        
    *mod = a % b ;      
}
int main ()
{
    int number1 = 9, number2 = 4, number3 , number4 ;    
    int *div,*mod ;
    int a = number1 ;
    int b = number2 ;
     div = &number3 ;
     mod = &number4 ;
    
    printf("Parameter Setting :\n");
    printf("parameters a = %d\n", number1); 
    printf("parameters b = %d\n", number2); 

    ft_div_mod(a,b,div,mod); 

    printf("After calculation :\n");
    printf("divides a by b = %d\n", number3); // Print the value divides parameters a by b and stores the result in the int pointed
    printf("division a by b = %d\n", number4); // Print the value the remainder of the division of a by b in the int pointed

    return 0;
}