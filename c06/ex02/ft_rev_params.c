
#include <unistd.h>

int main(int argc, char** argv)
{
    if (argc != 4)
    {
        write(1, "3 arguments pls", 15);
    }
}