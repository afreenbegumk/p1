#include <stdio.h>
int main()
{
    int n, i, output= 0;
    
    printf("Enter natural nos");
    scanf("%d",&n);

    for(i=1; i <= n; ++i)
    {
        output+= i;   // output = output+i;
    }

    printf("%d",output);

    return 0;
}
