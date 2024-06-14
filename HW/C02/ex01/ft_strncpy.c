#include <stdio.h>
#include <string.h>


int main() 
{
    char dest[50] = "";
    char *src1 = "bangkok";
    char *src2 = "Good";
    printf("%s\n",dest);
    strncpy(dest,src1,strlen(src1));    
    strncpy(dest,src2,strlen(src2));   
    printf("%s\n",dest);
    return 0;
}

