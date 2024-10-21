#include <stdio.h>

int main()
{
    float x, y;
    char ch;

    printf("Welcome our calculator!!\n");
    while (1)
    {
        printf("\npls enter ant operations what you want: ( +, -, /, *)\n");
        scanf(" %c", &ch);
        printf("pls enter two numbers: ");

        scanf("%f %f", &x, &y);
        if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
        {
            printf("invalid operations entered\n");
            break;
        }
        else
        {
            switch (ch)
            {
            case '+':
                printf("toplama işleminin sonucu = %f", x + y);
                break;
            case '-':
                printf("çıkarma işleminin sonucu = %f", x - y);
                break;

            case '*':
                printf("çarpma işleminin sonucu = %f", x * y);
                break;

            case '/':
                printf("bölme işleminin sonucu = %f", x / y);
                break;

            
            }
        }
    }

    return 0;
}
