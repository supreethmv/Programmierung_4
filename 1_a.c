#include <stdio.h>

int main() {
    printf("Evaluation of expressions without paranthesis\n");
    int a=3;
    printf("Initial Value of a=%d\n\n",a);
    printf("++a < 10 && 25 + 3 != 25\t=(((++a) < 10) && ((25 + 3) != 25))=%d",++a < 10 && 25 + 3 != 25); // (((++a) < 10) && ((25 + 3) != 25))
    printf("\nValue of a=%d",a); // Value of 'a' was incremented by 1 due to the pre-increment operator on 'a' before the evaluation the exprssion. It was incremented before the evaluation the exprssion
    printf("\n\n15 > a || 15 < 5 * --a\t\t=((15 > a) || (15 < (5 * (--a))))=%d",(15 > a || 15 < 5 * --a)); // ((15 > a) || (15 < (5 * (--a))))
    printf("\nValue of a=%d",a); // Value of 'a' was not decremented by 1 due to the pre-decrement operator on 'a' in the expression. It was because of the first expression in the OR condition became true and it didn't have to evaluate the next part and the compiler optimized the value of the expression to be anyway true independent of the further evaluation.
    printf("\n\na += a != 5 && 3\t\t=(a += ((a != 5) && 3))=%d",a += a != 5 && 3); // (a += ((a != 5) && 3)). This is the value being assigned to 'a'.
    printf("\nValue of a=%d",a); // Value of 'a' was reassigned with an incremented value during the evaluation of the expression due to the short hand addition operator
    printf("\n\na %= 3*a - 5 && 2*a +2 || a - 10\t=(a %= ((((3*a) - 5) && ((2*a) +2)) || (a - 10)))=%d",a %= 3*a - 5 && 2*a +2 || a - 10); // (a %= ((((3*a) - 5) && ((2*a) +2)) || (a - 10))). This is the value being assigned to 'a'.
    printf("\nValue of a=%d",a); // Value of 'a' was reassigned with a remainder value during the evaluation of the expression due to the short hand modular division operator
    
    
    
    printf("\n\nEvaluation of expressions with paranthesis\n");
    a=3;
    printf("Initial Value of a=%d\n\n",a);
    printf("++a < 10 && 25 + 3 != 25\t=(((++a) < 10) && ((25 + 3) != 25))=%d",(((++a) < 10) && ((25 + 3) != 25))); // (((++a) < 10) && ((25 + 3) != 25))
    printf("\nValue of a=%d",a); // Value of 'a' was incremented by 1 due to the pre-increment operator on 'a' before the evaluation the exprssion. It was incremented before the evaluation the exprssion
    printf("\n\n15 > a || 15 < 5 * --a\t\t=((15 > a) || (15 < (5 * (--a))))=%d",((15 > a) || (15 < (5 * (--a))))); // ((15 > a) || (15 < (5 * (--a))))
    printf("\nValue of a=%d",a); // Value of 'a' was not decremented by 1 due to the pre-decrement operator on 'a' in the expression. It was because of the first expression in the OR condition became true and it didn't have to evaluate the next part and the compiler optimized the value of the expression to be anyway true independent of the further evaluation.
    printf("\n\na += a != 5 && 3\t\t=(a += ((a != 5) && 3))=%d",(a += ((a != 5) && 3))); // (a += ((a != 5) && 3)). This is the value being assigned to 'a'.
    printf("\nValue of a=%d",a); // Value of 'a' was reassigned with an incremented value during the evaluation of the expression due to the short hand addition operator
    printf("\n\na %= 3*a - 5 && 2*a +2 || a - 10\t=(a %= ((((3*a) - 5) && ((2*a) +2)) || (a - 10)))=%d",(a %= ((((3*a) - 5) && ((2*a) +2)) || (a - 10)))); // (a %= ((((3*a) - 5) && ((2*a) +2)) || (a - 10))). This is the value being assigned to 'a'.
    printf("\nValue of a=%d",a); // Value of 'a' was reassigned with a remainder value during the evaluation of the expression due to the short hand modular division operator
}