#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int strlen(char* str)
{
    int i = 0;
    while (str[i] != '\n')
        i++;
    return i;
}
int main()
{

    int n, i = 0;
    setlocale(LC_ALL, "Russian");
    printf("Введите количество символов: ");
    scanf_s("%d", &n);
    if (n < 1) printf("Количество символов не может быть меньше единицы");
    else
    {
        char* str = (char*)calloc(n, sizeof(char));
        rewind(stdin);
        fgets(str, 255, stdin);

        while (i < strlen(str))
        {
            if (str[i] == ' ' && str[i + 1] == ' ')
            {
                for (int j = i; str[j] != '\0'; j++)
                {
                    str[j] = str[j + 1];

                }

                i--;
            }
            i++;
        }

        puts(str);
    }

    return 0;

}
