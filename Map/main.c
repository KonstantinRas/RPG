#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

void Shop(){
    printf("Work");
}

void Trakt(){
    printf("Trakt");
}

void Start(){
    printf("Start");
}

int main()
{
    setlocale(LC_CTYPE,"rus");
    char map_but;
    printf("                           ВЫ НАХОДИТЕСЬ В ГОРОДЕ                   \n");
    printf("Вы можете отправиться:\n\n");
    printf("1)Магазин\n");
    printf("2)Трактир\n");
    printf("3)Сражаться с монстрами\n");
    map_but = getch();


    switch(map_but){
        case '1':
            Shop();
            break;
        case '2':
            Trakt();
            break;
        case '3':
            Start();
            break;
    }



    /*if(map_but == '1')
        Shop();
    else if(map_but == '2')
        Trakt();
    else if(map_but == '3')
        Start();*/


    return 0;
}
