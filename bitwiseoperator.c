#include<stdio.h>
void main ()
{
    int a,b,c,d,e ;
    printf("A Program to see the effect of Bit-wise OR Operator, Bit-wise AND Operator and Bit-wise XOR Operator.");
    printf("\nEnter a Number, say a: ");
    scanf("%d",&a);
    printf("Enter the another one, say b: ");
    scanf("%d",&b);
    c=a|b , d=a&b , e=a^b;
    printf("The output of a|b is; %d",c);
    printf("\n,The output of a&b is; %d",d);
    printf("\nAnd the output of a^b is;  %d",e);
    /*
    char e,f,g,h;
    printf("\nAnother Program to see the effect of Bit-wise OR Operator and Bit-wise AND Operator.");
    printf("\nEnter a Number, say c: ");
    scanf("%c",&e);
    printf("Enter the another one, say d: ");
    scanf("%c",&f);
    g=e|f , h=e&f;
    printf("The output of e|f is; %d or %c ",g);
    printf("\nThe output of e&f is; %d or %c ",h);

    →In above program the scanf function isn't accepting %c character and results in blank/or the avoid to read it!

    */
    printf("\n");
    int x;
    printf("\nThis Program can tell you whether a number is odd or Even.\n Enter an arbitary Number:\t");
    scanf("%d",&x);
    (x&1)?printf("You've entered an odd number.i.e; %d",x):printf("You've entered an even number.i.e; %d",x);
    printf("\nIn this program we'd used the ternary operator ' ? : ' along with Bitwise AND operator '&' .");
}