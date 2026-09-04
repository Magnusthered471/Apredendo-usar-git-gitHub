#include<stdio.h>
#include<stdlib.h>
int main ()  {
    int a, b, c;
    printf("Hello world\n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("The sum is: %d\t", c);
    printf("The product is: %d\n", a * b);
    return 0;
}