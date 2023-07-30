#include<stdio.h>
void main()
{
    int maxb, mina, a=10, b=20, k ;
    maxb=a>b?a:b;
    printf("%d",maxb);
    mina=a<b?a:b;
    printf("\n%d",mina);
    k=b>a?printf("\n\tTHIS")&&printf("\tIS")||printf("ME"):printf("Mobashir");
    printf("\n%d",k);
}