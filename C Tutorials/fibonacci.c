#include <stdio.h>
#include <conio.h>

int main()
{
    int i, num1=0, num2=1, num3, elements;

    printf("Enter the number of elements you want for fibonacci series: ");
    scanf("%d", &elements);

    printf("\nThe fibonacci series would be %d, %d, ", num1, num2);

    for (i = 2; i <= elements; i++)
    {
        num3 = num1 + num2;
        printf("%d, ", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}
