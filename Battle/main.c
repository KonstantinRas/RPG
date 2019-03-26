#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void Start();
int Hero_choose();
void Battle(int HP, int Dmg, int Stamina, int Enemy_HP, int Enemy_Dmg, int Enemy_Stamina);
int Menu();
void Map();
int Inventory();

int main()
{
    setlocale(LC_CTYPE, "rus");
    int choose;
    choose = Menu();
    while(choose != 1){
        switch(choose){
            case 1:

                break;
            case 2:
                printf("Сохранения пока не доступны :(\n");
                printf("Нажми любую клавишу для продолжения\n");
                getch();
                break;
            case 3:
                printf("Что ты тут собрался настраивать?\n");
                printf("Нажми любую клавишу для продолжения\n");
                getch();
                break;
            case 4:
                printf("Тебе трудно нажать на крестик?\n");
                return 0;
                break;
        }
        choose = Menu();
    }
    Map();

}
/////////////////////////////////////////////////////////////////////////////////////////
int Menu(){
    char button;
    int but_pos = 1;
    system("cls");
    printf("--------------------------------------------------------------------------------");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                               Главное меню                                   *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                           -->  Новая игра  <--                               *");
    printf("*                                                                              *");
    printf("*                                Продолжить                                    *");
    printf("*                                                                              *");
    printf("*                                Настройки                                     *");
    printf("*                                                                              *");
    printf("*                                  Выход                                       *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("--------------------------------------------------------------------------------");
    //button = getch();
    while(button != 'e'){
        button = getch();
        if(button == 's')
            but_pos += 1;
        else if(button == 'w')
            but_pos -= 1;

        if(but_pos < 1)
            but_pos = 4;
        else if(but_pos > 4)
            but_pos = 1;

        switch(but_pos){
            case 1:
                system("cls");
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                           -->  Новая игра  <--                               *");
                printf("*                                                                              *");
                printf("*                                Продолжить                                    *");
                printf("*                                                                              *");
                printf("*                                Настройки                                     *");
                printf("*                                                                              *");
                printf("*                                  Выход                                       *");
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
                system("cls");
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                Новая игра                                    *");
                printf("*                                                                              *");
                printf("*                           -->  Продолжить  <--                               *");
                printf("*                                                                              *");
                printf("*                                Настройки                                     *");
                printf("*                                                                              *");
                printf("*                                  Выход                                       *");
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
                system("cls");
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                Новая игра                                    *");
                printf("*                                                                              *");
                printf("*                                Продолжить                                    *");
                printf("*                                                                              *");
                printf("*                           -->  Настройки  <--                                *");
                printf("*                                                                              *");
                printf("*                                  Выход                                       *");
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
            case 4:
                system("cls");
                printf("--------------------------------------------------------------------------------");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                               Главное меню                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                Новая игра                                    *");
                printf("*                                                                              *");
                printf("*                                Продолжить                                    *");
                printf("*                                                                              *");
                printf("*                                Настройки                                     *");
                printf("*                                                                              *");
                printf("*                             -->  Выход  <--                                  *");
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
    return but_pos;
}
/////////////////////////////////////////////////////////////////////////////////////////
void Map(){
    char map_but;
    int HP, Dmg, Stamina, Potion;
    int choose = 0;
    system("cls");
    printf("/***********************************Поехали************************************\\ \n");
    printf("    Выбери своего персонажа:\n");
    choose = Hero_choose();
    switch(choose){
        case 1:
            printf("   Вы выбрали воина\n");
            HP = 300;
            Dmg = 20;
            Stamina = 100;
            break;
        case 2:
            printf("   Вы выбрали мага\n");
            HP = 80;
            Dmg = 40;
            Stamina = 80;
            break;
        case 3:
            printf("   Ееее, погнали!\n");
            HP = 150;
            Dmg = 10;
            Stamina = 200;
            break;
    }

    printf("                           ВЫ НАХОДИТЕСЬ В ГОРОДЕ                   \n");
    printf("Вы можете отправиться:\n\n");
    printf("1)Магазин\n");
    printf("2)Трактир\n");
    printf("3)Сражаться с монстрами\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    map_but = getch();



    switch(map_but){
        case '1':
            //Shop(); //Покупка вещей
            break;
        case '2':
           //Trakt();  //Сделать трактир с азартными играми
            break;
        case '3':
            Start(HP,Dmg, Stamina,Potion);
            break;
    }
}
/////////////////////////////////////////////////////////////////////////////////////////
void Start(int HP, int Dmg, int Stamina, int Potion)
{
    int Enemy_HP, Enemy_Dmg, Enemy_Stamina;


    srand(time(0));
    int Enemy_Type;
    do
    {
    Enemy_Type = 1 + rand() % 101;

    ///Слизень///
    if ( Enemy_Type >= 1 && Enemy_Type <= 50 )
    {
        Enemy_HP = 50,
        Enemy_Dmg = 5,
        Enemy_Stamina = 40;
    }
    ///Ебака///
    if ( Enemy_Type >= 51 && Enemy_Type <= 85 )
    {
        Enemy_HP = 80,
        Enemy_Dmg = 10,
        Enemy_Stamina = 60;
    }
    ///Дракон///
    if ( Enemy_Type >= 86 && Enemy_Type <= 100 )
    {
        Enemy_HP = 140,
        Enemy_Dmg = 30,
        Enemy_Stamina = 10;
    }

    int *hp = HP,
    *dmg = Dmg,
    *stam = Stamina;


        Battle(HP, Dmg, Stamina, Enemy_HP, Enemy_Dmg, Enemy_Stamina);
    }while( HP > 0);
}
/////////////////////////////////////////////////////////////////////////////////////////
int Hero_choose(){
    char chs;
    printf("                  Здоровье     Урон     Выносливость\n\n");
    printf("1)Воин               300        20           100\n");
    printf("2)Маг                 80        40            80\n");
    printf("3)Бомж               150        10           200\n");
    printf("\n   Выбор: ");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    chs = getch();
    while(chs != 'error'){
        switch(chs){
            case '1':
                return 1;
                break;
            case '2':
                return 2;
                break;
            case '3':
                return 3;
                break;
            default: printf("   Введён не существующий персонаж\nВыбор: ");
        }
        printf("   Введён не существующий персонаж\nВыбор: ");
        chs = getch();

    }
}
/////////////////////////////////////////////////////////////////////////////////////////
/**int Loot_Potion()
{
    srand(time(0));
    int Potion_chance;
    Potion_chance = rand() % 2;
    return Potion_chance;
}**/
/////////////////////////////////////////////////////////////////////////////////////////
void Battle(int HP, int Dmg, int Stamina, int Enemy_HP, int Enemy_Dmg, int Enemy_Stamina)
{
    int Potion, exit;
    exit = 0;
    char button;
    //system("cls");
    printf("\n*******************************БИТВА НАЧИНАЕТСЯ*********************************");

        while (Enemy_HP > 0)
        {
            //system("cls");
            printf("\n                    Твоё             Противника\n");
            printf("Здоровье             %3d                 %3d\n",HP, Enemy_HP);
            printf("Урон                 %3d                 %3d\n",Dmg, Enemy_Dmg);
            printf("Выносливость         %3d                 %3d\n",Stamina, Enemy_Stamina);
            if ( HP <= 0) break;
            printf("\n///////// 1 - АТАКА ///////// 2 - ПРОПУСТИТЬ ХОД ///////// 3 - СБЕЖАТЬ /////////");
            printf("/////////////////////////////// I - ИВЕНТАРЬ ///////////////////////////////////\n");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("   ");
            button = getch();
            system("cls");

            if (Stamina == 0 && button == '1')
            {
                printf("У вас не достаточно выносливости, выберете другое действие\n");
                while (button == '1')
                    button = getch();
            }

            switch(button)
            {
                case '1':
                    Stamina -= 10;
                    Enemy_HP -= Dmg;
                    printf("   Вы ударили противника на %d урона\n", Dmg);
                    if ( Enemy_Stamina > 0)
                    {
                        Enemy_Stamina -= 10;
                        HP -= Enemy_Dmg;
                        printf("   Враг прописал ответочку на %d урона\n", Enemy_Dmg);
                    }
                    else
                    {
                        Enemy_Stamina += 20;
                        printf("   Враг тупо дрыхнет\n");
                    }


                    break;
                case '2':
                    Stamina += 20;
                    printf("\n\n   Вы отдыхаете, и восстанавливаете 20 выносливости\n");
                    if ( Enemy_Stamina > 0 )
                    {
                        Enemy_Stamina -= 10;
                        HP -= Enemy_Dmg;
                        printf("   Враг бьет тебя, пока ты спишь на %d урона\n", Enemy_Dmg);
                    }
                    else
                    {
                        Enemy_Stamina += 20;
                        printf("   Вы спите с врагом в обнимку, отдыхая от боя\n");
                    }

                    break;
                case '3':
                    exit = 1;
                    break;
                case 'i':
                    Inventory();
                    printf("\n\n");
                    break;
            }
            if ( exit == 1 )  break;
        }
        if ( HP > 0 && exit != 1 )
        printf("\n////////////////////////////// ПОБЕДА /////////////////////////////////////\n");
        else if ( HP < 0 && exit != 1 )
        {
        printf("\n//////////////////////////// LOL U DIED ///////////////////////////////////\n");
        exit = 1;
        }
        else if ( exit == 1 )
        printf("\n/////////////// РОЖДЕННЫЙ БЕГАТЬ, КАК ГОВОРИТСЯ, ... //////////////////////\n");
}
////////////////////////////////////////////////////////////////////////////////////////////
int Inventory(){
    char inv_but;
    int but_pos = 1;
    printf("                                   ИНВЕНТАРЬ\n\n");
    printf("                                                             Монет 100\n");
    printf("- Зелье здоровья 0 шт.     <--\n");
    printf("- Зелье выносливости 0 шт. \n");
    printf("- Еда 0 шт. \n");
    while(inv_but != ''){
        inv_but = getch();
        if(inv_but == 's')
            but_pos += 1;
        else if(inv_but == 'w')
            but_pos -= 1;

        if(but_pos < 1)
            but_pos = 3;
        else if(but_pos > 3)
            but_pos = 1;

        switch(but_pos){
            case 1:
                system("cls");
                printf("                                   ИНВЕНТАРЬ\n\n");
                printf("                                                             Монет 100\n");
                printf("- Зелье здоровья 0 шт.  <--\n");
                printf("- Зелье выносливости 0 шт.\n");
                printf("- Еда 0 шт. \n");
                break;
            case 2:
                system("cls");
                printf("                                   ИНВЕНТАРЬ\n\n");
                printf("                                                             Монет 100\n");
                printf("- Зелье здоровья 0 шт.     \n");
                printf("- Зелье выносливости 0 шт. <--\n");
                printf("- Еда 0 шт. \n");
                break;
            case 3:
                system("cls");
                printf("                                   ИНВЕНТАРЬ\n\n");
                printf("                                                             Монет 100\n");
                printf("- Зелье здоровья 0 шт.\n");
                printf("- Зелье выносливости 0 шт. \n");
                printf("- Еда 0 шт.  <--\n");
                break;
        }
    }
}

