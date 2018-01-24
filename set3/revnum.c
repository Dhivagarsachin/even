#include <stdio.h>
int main()
{
    int a, revNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(n != 0)
    {
        remainder = a%10;
        reversedNumber = revNumber*10 + remainder;
        a /= 10;
    }

    printf("Reversed Number = %d", revNumber);

    return 0;
}
