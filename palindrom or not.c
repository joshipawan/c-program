#include <stdio.h>
#include<conio.h>
int main()
{
    int n, i = 0, a, b;

    printf("Enter an integer: ");
    scanf("%d", &n);

    b = n;
    while( n!=0 )
    {
        a = n%10;
        i = i*10 + a;
        n=n/10;
    }
    if (b == i)
        printf("%d is a palindrome.\n", b);
    else
        printf("%d is not a palindrome.\n", b);
    
    return 0;
}