#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    (void)argc;
    (void)argv;
 
 int i=1;
 while (i<argc)
 {
    while (*argv[i] != '\0')
    {        
        write(1,&(*argv[i]),1);        
        argv[i]++;
    }
    write(1,"\n",1);
    i++;
 }
    return 0;
}
