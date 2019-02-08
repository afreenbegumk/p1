#include <stdio.h>
int main()
{
    int base, exponent;
    long long result = 1;
    printf("Enter a base and exponent number: ");
    scanf("%d %d", &base,&exponent);
    while (exponent != 0)
    {
        result *= base;
        --exponent;
    }

    printf("Answer = %lld", result);

    return 0;
}
