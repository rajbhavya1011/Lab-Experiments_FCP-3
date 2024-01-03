#include <stdio.h>
struct Employee{char name[50]; float salary};

int main() {
    struct Employee employee[10];
    for(int i = 0; i < 10; i++) {
        printf("Enter information for Employee %d:\n", i + 1);
        printf("Enter name: ");
        scanf("%s", employee[i].name);
        printf("Enter Salary: ");
        scanf("%f", &employee[i].salary);
    }
    printf("Displaying Information:\n");
    for(int i = 0; i < 10; i++) {
        printf("Name: %s\n", employee[i].name);
        printf("Salary: %.2f\n", employee[i].salary);
    }
    return 0;
}
