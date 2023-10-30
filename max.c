#include <stdio.h>
void max_of_four( int a,int b,int c,int d);

void max_of_four(int a, int b,int c,int d)
{
    if(a>b && a>c && a>d)
    {
        printf("%d",a);
    }
    else if ( b>a && b>c && b>d)
    {
        printf("%d",b);
    }
    else if( c>a && c>b && c>d)
    {
        printf("%d",c);
    }
    else
    {
    printf("%d",d);
    }
}



int main() 
{
    int a, b, c, d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    max_of_four(a, b, c, d);    
    return 0;
}