#include<stdio.h>

int main()
{
    int num;
    printf("Hello World!\n");
    printf("Multiplication Table of: ");
    scanf("%d", &num);    
    for (int i = 1; i < 11; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
