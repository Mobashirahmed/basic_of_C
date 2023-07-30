#include <stdio.h>
void main()
{
    int i,j,k;
    j=43;
    i=printf("Mobashir");
    printf("%d",i);
    printf("\n %d",8+4*3);
    printf("\nan arbitarily choosen number, say j:%d",j);
    k=i+j;
    j=95-j;
    printf("\nwhen we re-assign a new value of j with respect to this expression; 95-j, we get the value of j as, %d",j);
printf("\n");
    printf("%d",printf("C programming"));
printf("\n");
    printf("%d",printf("Mobashir"));
printf("\n");
    printf("\nAnd this no.%d is one more than the number of characters present in above statement. And this is because of the new line.",printf("\nHere it is the number of charaters present in our previous sentence ,what you just read:%d",printf("I'm Mobashir Ahmed. This is a program to see the Evaluation of C program statements/expressions!")));
    //the syntax of new line "\n" can also taken as a symbol whose in return we've is 1. Even the spaces present between the characters/symbols gives a value in return. That also means that the syntax of tab '\t' will be taken as a symbol whose value is one in return.
    printf("\nThe sum of no. of characters present in the name 'Mobashir' and a number say,j is %d",k);
}