#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
 
    while (*argv[0] != '\0')
    {
        write(1,&(*argv[0]),1);
        argv[0]++;
    }
    
    return 0;
}
