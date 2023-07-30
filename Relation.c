#include<stdio.h>
void main()
{
    printf("Welcome to Comparisions.");
    int t,u,v ;
    printf("\n Enter the Intrger Value you want to compare, say a:\t");
    scanf("%d",&t);
    printf(" Enter the another Integer Value you want to compare with, say b:\t");
    scanf("%d",&u);
    // /\t>u ;
    // printf("If 'a' is greater then you'll see the output as 1; Or If 'b' is greater then you'll see the output as 0.");
    // printf("This is your required Result:\t%d",v);
    if (t>u)
    {
        printf("a is greater than b\t%d",t);
    }
    else if (u>t)
    {
        printf("b is greater than a\t%d",u);
    }
    else if (u=t)
    {
        printf("a and b both are equal\t%d\t%d",t,u);
    }
    else
    {
        printf("Undefined");
    }

    int p,q,r ;
    printf("\nLets Quickly do a  Quick Comparison!\n It will tell you the smallest one of 'em.");
    printf("\nEnter the Integer, say a:");
    scanf("%d",&p);
    printf("Enter the second Integer, say b:");
    scanf("%d",&q);
    printf("Enter the third Integer, say c:");
    scanf("%d",&r);

    if (p>q & r>q)   
        printf("'b' is smallest Integer,that is %d",q);
    else if (q>p & r>p)
        printf("'a' is the smallest Integer, that is %d",p);
    else if (p>r & q>r)
        printf("'c' is the smallest Integer, that is %d,",r);
    else
        printf("Cannot tell!");
    
}