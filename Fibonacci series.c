#include <stdio.h>

int a = 0, b = 1;
int nexterm, num;

int main()
{
    printf("Enter the number of terms you want to print\n");
    scanf("%d", &num);
    for (int c = 0; c < num; c++)
    {
        nexterm = a + b;
        printf("%d\n", a+b);
        a = b;
        b = nexterm;
    }
    return 0;
}
