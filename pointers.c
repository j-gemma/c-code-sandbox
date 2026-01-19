#include <stdio.h>

int main(){

int x = 10;
int y = 11;

int* pointer1 = &x; // Equivalent to int *pointer1 = &x;
int *pointer2 = &y;
int pointer3* = &y;


printf("%d\n", *pointer1); // Output: 10
printf("%d\n", *pointer2); // Output: 10
printf("%d\n", *pointer3); 
}
