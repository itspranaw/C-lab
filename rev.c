#include <stdio.h>

int main()
{
    int a,rev=0,rem=0;

    printf("Enter the number\n");

    scanf("%d",&a);

    while(a>0)
    {
        rem = a%10;
        rev = rev*10 +rem;
        a /=10;
    }
    printf("%d", rev );
}
