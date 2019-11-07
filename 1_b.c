#include <stdio.h>

int main() {
    int a = 7, b = 6, c = 5, d = 4, e = 3, f = 2, g = 1, h = 0;
    printf("Evaluation of expressions without paranthesis\n");
    printf("%d",a%=b++-c*d--+e&f-(int)3.1415<=!*&g||h);
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
    printf("\nd=%d",d);
    printf("\ne=%d",e);
    printf("\nf=%d",f);
    printf("\ng=%d",g);
    printf("\nh=%d",h);
    
    a = 7; b = 6; c = 5; d = 4; e = 3; f = 2; g = 1; h = 0;
    printf("\nEvaluation of expressions with paranthesis\n");
    printf("%d",(a%=((b++)-(((c*(d--))+e)&((f-(int)3.1415)<=(!(*(&g)))))||h)));
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\nc=%d",c);
    printf("\nd=%d",d);
    printf("\ne=%d",e);
    printf("\nf=%d",f);
    printf("\ng=%d",g);
    printf("\nh=%d",h);
    
    
}