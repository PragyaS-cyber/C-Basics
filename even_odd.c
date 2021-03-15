#include <stdio.h>
int main()
{
    int x;
    printf ("enter the number to be checked:");
    scanf("%d",&x);
    if (x%2 ==0)
    printf ("EVEN");
    else
    printf ("ODD");
}