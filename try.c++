#include<iostream>
#include <cstdio>
using namespace std;

int main ()
{
    int a;
    double b;
    long c;
    float d;
    char ch;
    scanf("%d %ld %c %f %lf ",&a,&c,&ch,&d,&b);
    cout<<("%d \n%ld \n%c \n%f \n%lf" ,a,c,ch,d,b);
    return 0;
} 