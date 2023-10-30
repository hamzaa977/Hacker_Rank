#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;
    int m;
    float c;
    float d;
    int sum;
    int diff;
    float summ;
    float difff;

    scanf("%d %d",&n,&m);
    scanf("%f",&c);
    scanf("%f",&d);
    sum=n+m;
    diff=n-m;
    summ=c+d;
    difff=c-d;
    printf("%d %d",sum,diff);
    printf("\n%.1f %.1f",summ,difff);
    return 0;
}