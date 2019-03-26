#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void Start();
int Hero_choose();
void Battle(int Health, int Damage, int Stamina);
int Enemy();

int main()
{
    setlocale(LC_CTYPE, "rus");
    Start();
    return 0;
}

void Start(){
    int Health, Damage, Stamina;
    int choose = 0;
    printf("/************************************Ебошь*************************************\\ \n");
    printf("    Выбери своего персонажа:\n");
    choose = Hero_choose();
    switch(choose){
        case 1:
            printf("Вы выбрали воина\n");
            Health = 150;
            Damage = 20;
            Stamina = 100;
            break;
        case 2:
            printf("Вы выбрали мага\n");
            Health = 80;
            Damage = 15;
            Stamina = 75;
            break;
        case 3:
            printf("Ееее, погнали!\n");
            Health = 50;
            Damage = 10;
            Stamina = 200;
            break;
    }

    Battle(Health, Damage, Stamina);
}

int Hero_choose(){
    int chs = 0;
    printf("                  Здоровье     Урон     Выносливость\n\n");
    printf("1)Воин               150        20           100\n");
    printf("2)Маг                 80        15            75\n");
    printf("3)Бомж                50        10           200\n");
    printf("\nВыбор: ");
    scanf("%d", &chs);
    while(chs < 1 || chs > 3){
        printf("Введён не существующий персонаж\nВыбор: ");
        scanf("%d", &chs);
    }
    return chs;
}

void Battle(int Health, int Damage, int Stamina){
    int Enemy_Health = 50, exit = 1,
    Enemy_Damage = 5, button,
    Enemy_Stamina = 40;
    printf("\n\nУправление: 1 - удар 2 - защита\nОдин удар отнимает 10 очков выносливости, защита отнимает 5 очков выносливости\n");
    printf("\n*******************************БИТВА НАЧИНАЕТСЯ*********************************");
    while(exit == 1){
        printf("                    Твоё           Противника\n");
        printf("Здоровье             %d                 %d\n",Health, Enemy_Health);
        printf("Выносливость         %d                 %d\n",Stamina, Enemy_Stamina);
        printf("Урон                 %d                  %d\n",Damage, Enemy_Damage);
        scanf("%d", &button);
    }
}


