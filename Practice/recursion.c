#include <stdio.h>
#include <unistd.h>

int recursive(int i)
{
    if (i < 0)
    {
           return 1;
    }
        usleep(500000);
        printf("%d ", i);
        fflush(stdout);
    recursive(i-1);
    
}

int main(void)
{
    recursive(10);
}