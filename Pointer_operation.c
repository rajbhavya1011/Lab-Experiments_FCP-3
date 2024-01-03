#include <stdio.h>
int add(int a, int b)
{ 
return a + b; 
}
int subtract(int a, int b) 
{ 
return a - b; 
}
int multiply(int a, int b) 
{
return a * b;
}
int divide(int a, int b)
{
return a / b; 
}
int main() {
    int (*Add)(int, int) = add;
    int (*Subtract)(int, int) = subtract;
    int (*Multiply)(int, int) = multiply;
    int (*Divide)(int, int) = divide;
    int a = 10, b = 5;
    printf("Add: %d\n",Add(a,b));
    printf("Subtract: %d\n",Subtract(a,b));
    printf("Multiply: %d\n",Multiply(a,b));
    printf("Divide: %d\n",Divide(a,b));
    return 0;
}
