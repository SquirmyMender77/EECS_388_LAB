#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char operation_input;
    printf("Enter Operation: \n");
    scanf("%s", &operation_input);
    
    if (operation_input == "*")
    {
        printf("Enter first operand: ");
        int first_operand = scanf("%d", &first_operand);
        printf("Enter second operand: ");
        int second_operand = scanf("%d", &second_operand);
        int final_value = (first_operand * second_operand);
        printf(final_value);
        
        
    }
}

