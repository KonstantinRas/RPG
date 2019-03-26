#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void Start();
int Hero_choose();
void Battle(int HP, int Dmg, int Stamina, int Enemy_HP, int Enemy_Dmg, int Enemy_Stamina);

int main()
{
    setlocale(LC_CTYPE, "rus");
    Start();
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
void Start()
{
    int HP, Dmg, Stamina, Potion;
    int Enemy_HP, Enemy_Dmg, Enemy_Stamina;
    int choose = 0;
    printf("/*********************************Поехали*********************************\\ \n");
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


        Battle(HP, Dmg, Stamina, Enemy_HP, Enemy_Dmg, Enemy_Stamina);
    }while( HP > 0);
}
/////////////////////////////////////////////////////////////////////////////////////////
int Hero_choose(){
    int chs = 0;
    printf("                  Здоровье     Урон     Выносливость\n\n");
    printf("1)Воин               300        20           100\n");
    printf("2)Маг                 80        40            80\n");
    printf("3)Бомж               150        10           200\n");
    printf("\n   Выбор: ");
    scanf("%d", &chs);
    while(chs < 1 || chs > 3){
        printf("   Введён не существующий персонаж\nВыбор: ");
        scanf("%d", &chs);
    }
    return chs;
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
    int Potion, button, exit;
    exit = 0;
    printf("\n*******************************БИТВА НАЧИНАЕТСЯ*********************************");

            printf("\n                    Твоё             Противника\n");
            printf("Здоровье             %3d                 %3d\n",HP, Enemy_HP);
            printf("Урон                 %3d                 %3d\n",Dmg, Enemy_Dmg);
            printf("Выносливость         %3d                 %3d\n",Stamina, Enemy_Stamina);

        while (Enemy_HP > 0)
        {
            if ( HP <= 0) break;
            printf("\n///////// 1 - АТАКА ///////// 2 - ПРОПУСТИТЬ ХОД ///////// 3 - СБЕЖАТЬ /////////\n");
            printf("   ");
            scanf("%d", &button);

            if (Stamina == 0 && button == 1)
            {
                printf("У вас не достаточно выносливости, выберете другое действие\n");
                while (button == 1)
                    scanf("%d", &button);
            }

            switch(button)
            {
                case 1:
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

                    printf("\n                    Твоё             Противника\n");
                    printf("Здоровье             %3d                 %3d\n",HP, Enemy_HP);
                    printf("Урон                 %3d                 %3d\n",Dmg, Enemy_Dmg);
                    printf("Выносливость         %3d                 %3d\n",Stamina, Enemy_Stamina);
                    break;
                case 2:
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

                    printf("\n                    Твоё             Противника\n");
                    printf("Здоровье             %3d                 %3d\n",HP, Enemy_HP);
                    printf("Урон                 %3d                 %3d\n",Dmg, Enemy_Dmg);
                    printf("Выносливость         %3d                 %3d\n",Stamina, Enemy_Stamina);
                    break;
                case 3:
                    exit = 1;
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


