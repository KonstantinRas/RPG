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
    printf("/*********************************�������*********************************\\ \n");
    printf("    ������ ������ ���������:\n");
    choose = Hero_choose();
    switch(choose){
        case 1:
            printf("   �� ������� �����\n");
            HP = 300;
            Dmg = 20;
            Stamina = 100;
            break;
        case 2:
            printf("   �� ������� ����\n");
            HP = 80;
            Dmg = 40;
            Stamina = 80;
            break;
        case 3:
            printf("   ����, �������!\n");
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

    ///�������///
    if ( Enemy_Type >= 1 && Enemy_Type <= 50 )
    {
        Enemy_HP = 50,
        Enemy_Dmg = 5,
        Enemy_Stamina = 40;
    }
    ///�����///
    if ( Enemy_Type >= 51 && Enemy_Type <= 85 )
    {
        Enemy_HP = 80,
        Enemy_Dmg = 10,
        Enemy_Stamina = 60;
    }
    ///������///
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
    printf("                  ��������     ����     ������������\n\n");
    printf("1)����               300        20           100\n");
    printf("2)���                 80        40            80\n");
    printf("3)����               150        10           200\n");
    printf("\n   �����: ");
    scanf("%d", &chs);
    while(chs < 1 || chs > 3){
        printf("   ����� �� ������������ ��������\n�����: ");
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
    printf("\n*******************************����� ����������*********************************");

            printf("\n                    ���             ����������\n");
            printf("��������             %3d                 %3d\n",HP, Enemy_HP);
            printf("����                 %3d                 %3d\n",Dmg, Enemy_Dmg);
            printf("������������         %3d                 %3d\n",Stamina, Enemy_Stamina);

        while (Enemy_HP > 0)
        {
            if ( HP <= 0) break;
            printf("\n///////// 1 - ����� ///////// 2 - ���������� ��� ///////// 3 - ������� /////////\n");
            printf("   ");
            scanf("%d", &button);

            if (Stamina == 0 && button == 1)
            {
                printf("� ��� �� ���������� ������������, �������� ������ ��������\n");
                while (button == 1)
                    scanf("%d", &button);
            }

            switch(button)
            {
                case 1:
                    Stamina -= 10;
                    Enemy_HP -= Dmg;
                    printf("   �� ������� ���������� �� %d �����\n", Dmg);
                    if ( Enemy_Stamina > 0)
                    {
                        Enemy_Stamina -= 10;
                        HP -= Enemy_Dmg;
                        printf("   ���� �������� ��������� �� %d �����\n", Enemy_Dmg);
                    }
                    else
                    {
                        Enemy_Stamina += 20;
                        printf("   ���� ���� �������\n");
                    }

                    printf("\n                    ���             ����������\n");
                    printf("��������             %3d                 %3d\n",HP, Enemy_HP);
                    printf("����                 %3d                 %3d\n",Dmg, Enemy_Dmg);
                    printf("������������         %3d                 %3d\n",Stamina, Enemy_Stamina);
                    break;
                case 2:
                    Stamina += 20;
                    printf("\n\n   �� ���������, � ���������������� 20 ������������\n");
                    if ( Enemy_Stamina > 0 )
                    {
                        Enemy_Stamina -= 10;
                        HP -= Enemy_Dmg;
                        printf("   ���� ���� ����, ���� �� ����� �� %d �����\n", Enemy_Dmg);
                    }
                    else
                    {
                        Enemy_Stamina += 20;
                        printf("   �� ����� � ������ � �������, ������� �� ���\n");
                    }

                    printf("\n                    ���             ����������\n");
                    printf("��������             %3d                 %3d\n",HP, Enemy_HP);
                    printf("����                 %3d                 %3d\n",Dmg, Enemy_Dmg);
                    printf("������������         %3d                 %3d\n",Stamina, Enemy_Stamina);
                    break;
                case 3:
                    exit = 1;
                    break;
            }
            if ( exit == 1 )  break;
        }
        if ( HP > 0 && exit != 1 )
        printf("\n////////////////////////////// ������ /////////////////////////////////////\n");
        else if ( HP < 0 && exit != 1 )
        {
        printf("\n//////////////////////////// LOL U DIED ///////////////////////////////////\n");
        exit = 1;
        }
        else if ( exit == 1 )
        printf("\n/////////////// ��������� ������, ��� ���������, ... //////////////////////\n");
}


