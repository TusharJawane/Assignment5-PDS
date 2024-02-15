#include <stdio.h>
#include <string.h>
int main()
{
    int s = 0, a;
    char ch;
    printf("Provide number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
        s += a;
    int k = 1;
    while (k == 1)
    {
        printf("Do you want to continue? \n");
        scanf(" %c", &ch);
        switch (ch)
        {
        case 'Y':
            printf("Provide number\n");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                s += a;
            } /* constant-expression */
            /* code */
            continue;
        case 'y':
            printf("Provide number\n");
            scanf("%d", &a);
            if (a % 2 == 0)
            {
                s += a;
            } /* constant-expression */
            /* code */
            continue;
        case 'N':
            printf("%d\n", s);
            return 0;
        case 'n':
            printf("%d\n", s);
            return 0;

        default:
            printf("invalid input\n");
            continue;
        }
    }
}