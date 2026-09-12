#include <locale.h>
#include <stdio.h>

void main()
{
    setlocale(LC_ALL, "RUS");

    puts("Спортивный инвентарь");
    puts("");
    puts(" |||                |||");
    puts("|||||==============|||||");
    puts("|||||==============|||||");
    puts(" |||                |||");

    getchar();
}