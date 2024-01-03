#include <stdio.h>
#include <string.h>
struct Person {char name[50];char address[100]};
void sort(struct Person arr[], int n) 
{
struct Person temp;
for(int i=0; i<n-1; i++) {
for(int j=i+1; j<n; j++) {
if(strcmp(arr[i].name, arr[j].name) > 0) {
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}}}
}
int main() 
{
    struct Person persons[3];
    for(int i=0; i<3; i++) 
    {
        printf("Enter name and address for person %d:\n", i+1);
        scanf(" %[^\n]", persons[i].name);
        scanf(" %[^\n]", persons[i].address);
    }
    sort(persons, 3);
    printf("\nSorted names and addresses:\n");
    for(int i=0; i<3; i++) {
        printf("Name: %s, Address: %s\n", persons[i].name, persons[i].address);
    }

    return 0;
}
