#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=9)
    {
        if(a==1)
        {
            printf("one");
        }
        else if(a==2)
        {
            printf("two");
        }
        else if(a==3)
        {
            printf("three");
        }
        else if(a==4)
        {
            printf("four");
        }
        else if(a==5)
        {
            printf("five");
        }
        else if(a==6)
        {
            printf("six");
        }
        else if(a==7)
        {
            printf("seven");
        }
        else if(a==8)
        {
            printf("eight");
        }
        else
        {
            printf("nine");
        }
    }
    else
    {
        printf("greater than 9");
    }
    return 0;
}