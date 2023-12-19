#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,r=1;
    printf("Enter Number: ");
    scanf("%d", &j);

    for(i=1; i<=j; i++)
    {
        r=r*i;
    }

    printf("Factorial of the entered number is %d",r);
    return 0;
}
