#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(int argc, char *argv[])
{
    int i;
    char *ptr = (char *) main;
    // for (i = 0; *(ptr + i) != '\0'; i++)
    // {
    //     printf("%s\n", ptr +i);
    // }
    printf("%s\n", ptr);
    
}