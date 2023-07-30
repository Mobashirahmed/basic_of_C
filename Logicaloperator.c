#include<stdio.h>
void main()
{
    int a=43, b=0, c=-67;
//• Logical Operators:
//• AND operator (&&),
    int d=a&&b, e=b&&c, f=a&&c; 
    printf("\nOutput of Logical AND :\t%d\t%d\t%d",d,f,e);
    // To conclude the results of 'd' and 'e'. We don't need the both operands of AND operator, whose result ultimately assigns to d and e, respectively.
//• OR operator (||),
    int g=a||b, h=b||c, i=a||c, j=b||b ;
    printf("\nOutput of Logical OR :\t%d\t%d\t%d\t%d",g,j,h,i);
    // To conclude the results of 'g','h' and 'i'. We can consider short-circuit evaluation that says when one of the known operands of OR operator is non-zero then the result is 1 or you can say its True. 
//• NOT operator (!),
    int k=!a, l=!b, m=!c;
    printf("\nOutput of Logical NOT: \t%d\t%d\t%d",k,l,m);
// Next We'll talk about assignment of expressions to a distinct variable or to the same as of one used in the expression, whose integer value is given.

}