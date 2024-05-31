#include <unistd.h> // for write

void display_combinations(int n) {
    n = 11;
    display_combinations(n);
}

// Test the function with n = 2
int main () {    
char Number[4]; // to store each combination
    if (n <= 0 || n >= 10) {
        write(1, "Wrong value", 12);
        return 0;
    }    
    for (int i = 0; i <= 10-n; i++) {
        for (int j = i+1; j < 10; j++) {
            if (i<j)
            {
                Number[0] = '0' + i;                
                Number[1] = '0' + j;                 
                                             
                if (i != 8 || j != 9)
                {
                    Number[2] = ',';
                    Number[3] = ' ';
                    write(1, Number, 4); 
                   
                }else{                    
                    write(1, Number, 2); 
                    write(1, "\n", 2); 
                }                    
                    
            }    
            
        }
    }
    
    return 0;
}
