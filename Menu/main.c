#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_CTYPE,"RUSSIAN");
    char button;
    int but_pos = 1;
    printf("--------------------------------------------------------------------------------");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                               Главное меню                                   *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                           -->  Новая игра  <--                               *");
    printf("*                                                                              *");
    printf("*                                Продолжить                                    *");
    printf("*                                                                              *");
    printf("*                                Настройки                                     *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("--------------------------------------------------------------------------------");
    button = getch();
    while(button != 'e'){
        button = getch();
        if(button == 's')
            but_pos += 1;
        else if(button == 'w')
            but_pos -= 1;

        if(but_pos < 1)
            but_pos = 3;
        else if(but_pos > 3)
            but_pos = 1;

        switch(but_pos){
            case 1:
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                           -->  Новая игра  <--                               *");
                printf("*                                                                              *");
                printf("*                                Продолжить                                    *");
                printf("*                                                                              *");
                printf("*                                Настройки                                     *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("--------------------------------------------------------------------------------");
                break;
            case 2:
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                Новая игра                                    *");
                printf("*                                                                              *");
                printf("*                           -->  Продолжить  <--                               *");
                printf("*                                                                              *");
                printf("*                                Настройки                                     *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("--------------------------------------------------------------------------------");
                break;
            case 3:
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                Новая игра                                    *");
                printf("*                                                                              *");
                printf("*                                Продолжить                                    *");
                printf("*                                                                              *");
                printf("*                           -->  Настройки  <--                                *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("--------------------------------------------------------------------------------");
                break;
        }

    }

    return 0;
}
