#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    int n, i;
    setlocale(LC_ALL, "Russian");
    printf("Введите количество символов: ");
    scanf_s("%d", &n);
    if (n < 1) printf("Количество символов не может быть меньше единицы");
    else
    {
        char* a = (char*)calloc(n, sizeof(char));
        rewind(stdin);
        fgets(a, n, stdin);
        printf("%c", a[0]);
        for (i = 1; a[i] != '\0'; i++)
        {
            if ((a[i] != ' ') || ((a[i - 1] != ' ') && (a[i] == ' ')))
                printf("%c", a[i]);
        }
        free(a);
    }
    return 0;
}