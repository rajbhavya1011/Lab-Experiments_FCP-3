#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n,c=0; char str[100] = "";
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the integers:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        char buffer[10];
        sprintf(buffer, "%d", arr[i]);  // Convert the integer to a string
        strcat(str, buffer);
    }
    printf("%s\n",str);
    int num = atoi(str);// Convert the string to a integer
        while(num!=0)
        {
        arr[c]=num%10;
        num = num/10;
        c++;
        }
    for(int i=0; i<c-1; i++) {
    for(int j=i+1; j<c; j++) {
    if(arr[i]<arr[j]) {
     int temp = arr[i];
     arr[i] = arr[j];
     arr[j] = temp;
}}}
    printf("The largest possible number is: ");
    for(int i = 0; i < c; i++) {
        printf("%d", arr[i]);
    }
    return 0;
}
