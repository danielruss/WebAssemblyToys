#include <stdio.h>
#include <stdlib.h>

float npi(float n);

int main(int argc, char *argv[])
{
    float n = 2.0;
    if (argc > 1)
    {
        n = strtof(argv[1], NULL);
    }
    printf("%d\t%5.2f\n", argc, npi(n));
}