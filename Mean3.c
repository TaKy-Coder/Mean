#include<stdio.h>
int main()
{
    double a[1000000],s=0,n;
    int i;
    printf(" Enter Your number: ");
    for(i=1;i<=1000000;i++)
    {
        scanf("%lf",&a[i-1]);
        s=s+a[i-1];
        if(a[i-1]==00)
        break;
    }
    n=s/(i-1);
    printf("%lf\n",n);
    return 0;
}