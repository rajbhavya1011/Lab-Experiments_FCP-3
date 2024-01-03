#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int type;
    union {
        int int_data;
        float float_data;
        char char_data;
        char* string_data;
    } 
    data;
} 
GenericContainer;
void setData(GenericContainer* container) {
    printf("Enter the type of data (0 for int, 1 for float, 2 for char, 3 for string): ");
    scanf("%d", &container->type);
    switch (container->type) {
        case 0:
            printf("Enter an integer: ");
            scanf("%d", &container->data.int_data);
            break;
        case 1:
            printf("Enter a float: ");
            scanf("%f", &container->data.float_data);
            break;
        case 2:
            printf("Enter a character: ");
            scanf(" %c", &container->data.char_data);  
            break;
        case 3:
            printf("Enter a string: ");
            char buffer[100];
            scanf(" %[^\n]", buffer);  
            container->data.string_data = strdup(buffer);
            break;
        default:
            printf("Invalid data type\n");
            exit(EXIT_FAILURE);
    }
}
void getData(const GenericContainer* container) {
    switch (container->type) {
        case 0:
            printf("Integer: %d\n", container->data.int_data);
            break;
        case 1:
            printf("Float: %f\n", container->data.float_data);
            break;
        case 2:
            printf("Character: %c\n", container->data.char_data);
            break;
        case 3:
            printf("String: %s\n", container->data.string_data);
            break;
        default:
            printf("Invalid data type\n");
    }
}
void freeContainer(GenericContainer* container) {
    if (container->type == 3) {
        free(container->data.string_data);
    }
}
int main() {
    GenericContainer myContainer;
    setData(&myContainer);
    getData(&myContainer);
    freeContainer(&myContainer);
    return 0;
}
