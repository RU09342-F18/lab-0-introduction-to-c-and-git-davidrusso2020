#include <math.h>
/*****************************************************************
 *
 * math.c
 *
 *   Created on : Sep 13, 2018
 *  Last Edited : Sep 18, 2018
 *       Author : David Russo
 *
 ******************************************************************
 */
// This function uses a switch statement based on the Operator to
// decide what the result of the function is
int math(int num1, int num2, char Operator)
{
    switch(Operator)
    {
        case '+':
            return num1 + num2;
            break;
        case '-':
            return num1 - num2;
            break;
        case '*':
            return num1 * num2;
            break;
        case '/':
            return num1 / num2;
            break;
        case '%':
            return num1 % num2;
            break;
        case '<':
            return num1 << num2;
            break;
        case '>':
            return num1 >> num2;
            break;
        case '&':
            return num1 & num2;
            break;
        case '|':
            return num1 | num2;
            break;
        case '^':
            return num1 ^ num2;
            break;
        case '~':
            return ~num1;
            break;
        default:
            printf("Error: Invalid Operation\n");
            return 0;
    }
}
