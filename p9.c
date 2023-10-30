#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n ,n1,n2,n3,n4,n5;
    int sum = 0;
    int a;
    scanf("%d",&n);

    if(n>=10000 && n<=99999)
    {
        n1 = (n % 100000) / 10000;
        n2 = (n % 10000) / 1000;
        n3 = (n % 1000) / 100;
        n4 = (n % 100) / 10;
        n5 = (n % 10) / 1 ;

    printf("\n%d", n1);
    printf("\n%d", n2);
    printf("\n%d", n3);
    printf("\n%d", n4);
    printf("\n%d", n5);

     sum = n1+n2+n3+n4+n5;
    printf("\n\nThe sum of these five numbers are : %d\n\n", sum);

    }

    else
    {
        printf("invalid input");
    }

    return 0;
}