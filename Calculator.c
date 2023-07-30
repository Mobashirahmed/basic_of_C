#include<stdio.h>
void main()
{
    printf("Welcome to Mobashir's Calculator. Here you can easily perform simple calculations with ease of step by step Execution.");
    
    int a,b,c ;
    printf("\nThis is a Programme to add two arbitary numbers:\nEnter first no:");
    scanf ("%d",&a);
    printf ("Enter second no:");
    scanf ("%d", &b);
    c=a+b;
    printf ("This is your required sum:\t%d",c);

    int x,y,z ;
    // z=x-y; //
    printf("\nThis is a Programme to subtract an arbitary no. from the other. \nEnter First no:");
    scanf ("%d",&x);
    printf("Enter Second no:");
    scanf("%d",&y);
    z=x-y;
    printf("The Difference between the numbers:\t%d",z);

    int p,q,r ;
    printf("\nThis Programme can give you the product of any two arbitary numbers.");
    printf("\nEnter the value :");
    scanf("%d",&p);
    printf("Enter the other value :");
    scanf("%d",&q);
    r=p*q ;
    printf("This is your required Product:\t%d",r);

    int f,e,g ;
    printf("\nThis Programme can Divide the value in required parts.\nEnter the Integer Value :");
    scanf("%d",&f);
    printf("Enter the second value:");
    scanf("%d",&e);
    g=f/e;
    printf("This is the value of required fraction:\t%d",g);

    int k,l,m ;
    printf("\nHere you can perform the mod operation. \n Enter the Integer value:");
    scanf("%d",&k);
    printf("Enter another Integer Value :");
    scanf("%d",&l);
    m=k%l;
    printf("This is your required Result:\t %d",m);

}