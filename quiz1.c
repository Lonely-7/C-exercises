//creating a function without any arguments and return values

#include<stdio.h>

int sum(){
    int a, b, c;
    printf("Enter your numbers: \n");
    scanf("%d %d", &a, &b);
    c=a+b;
    printf("The sum is %d", c);
}

int main()
{
    printf("Hello World!\n");
    sum();
    return 0;
}
