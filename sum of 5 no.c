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
        n1 = (n % 100000) / 10000;
        n2 = (n % 10000) / 1000;
        n3 = (n % 1000) / 100;
        n4 = (n % 100) / 10;
        n5 = (n % 10) / 1 ;

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);

    sum = n1+n2+n3+n4+n5;
    printf("%d\n", sum);

    return 0;
}