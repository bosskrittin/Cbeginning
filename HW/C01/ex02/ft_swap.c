#include <stdio.h>
void ft_swap(int *a, int *b)
{    
    int Temp = *a;  // Store the value pointed to by a in a temporary variable
    *a = *b;        // Assign the value pointed to by b to the location pointed to by a
    *b = Temp;      // Assign the value stored in temp to the location pointed to by b
}
int main ()
{
    int number1 = 5, number2 = 8;
    int *a,*b;
    a = &number1 ;
    b = &number2 ;
    
    printf("Before Swap\n");
    printf("Value A = %d\n", number1); // Print the initial value of number1
    printf("Value B = %d\n", number2); // Print the initial value of number2

    ft_swap(a, b); // Call the swap function to swap the values of number1 and number2

    printf("After Swap\n");
    printf("Value A = %d\n", number1); // Print the value of number1 after swapping
    printf("Value B = %d\n", number2); // Print the value of number2 after swapping

    return 0;
}