#include <stdio.h>
int main ()
{
    int x;
    printf("enter the three digit number:");
    scanf("%d", &x);
    int sum=0, rem;
    while (rem > 0)
    {
    rem = x%10;
    x = x/10;
    sum = sum + rem;
    }
    printf("the sum of the three digit numbers is %d:", sum);
}