#include <stdio.h>
int main()
{
    printf("Its a Project in cocern to learn the Operators in C language. We've four Numbers:");
    // Assignment Operator
    int a=0, b=+97, c=-43, d=89;
    printf("\n%d\t%d\t%d\t%d", a,b,c,d);
    printf("\npaired as {a,b}; {b,c}; {a,c} and {d,b}.Assuming 'a' as neutral, 'b' as positive with sign, 'c' as negative and 'd' as positive.");
/*  Arithmetic Operators:
•Multiplication (*),
*/
    int e=a*b, f=b*c, g=a*c, h=d*b ;
    printf("\nOutput of Multiplication: \t%d\t%d\t%d\t%d", e,f,g,h);
/*  
• Division ( .../),
*/
    int i=a/b, j=b/c, k=a/c, l=d/b;
    printf("\nOutput of Division: \t%d\t%d\t%d\t%d", i,j,k,l);
/*
• Mod Operation (%),
*/
    int u=b%c, v=b%d; 
    printf("\nOutput of Mod operation: \t%d\t%d",u,v);
    int w=a%b, x=a%c;
    printf("\t%d\t%d",w,x);
    int y=c%d, z=d%c;
    printf("\t%d\t%d",y,z);
/*
• Addition (+),
*/
    int m=a+b, n=b+c, o=c+a, p=d+b;
    printf("\nOutput of Addition: \t%d\t%d\t%d\t%d", m,n,o,p);
/*
• Subtraction (-),
*/
    int q=a-b, r=b-c, s=c-a, t=d-b;
    printf("\nOutput of Substraction: \t%d\t%d\t%d\t%d", q,r,s,t);
}