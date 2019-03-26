#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

void Start();
int Hero_choose();
int Battle(int HP, int Dmg, int Stamina, int Enemy_HP, int Enemy_Dmg, int Enemy_Stamina);
int Menu();
void Map();
int Inventory();
int PocketMap();

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
                printf("���������� ���� �� �������� :(\n");
                printf("����� ����� ������� ��� �����������\n");
                getch();
                break;
            case 3:
                printf("��� �� ��� �������� �����������?\n");
                printf("����� ����� ������� ��� �����������\n");
                getch();
                break;
            case 4:
                printf("���� ������ ������ �� �������?\n");
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
    printf("*                               ������� ����                                   *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                                                                              *");
    printf("*                           -->  ����� ����  <--                               *");
    printf("*                                                                              *");
    printf("*                                ����������                                    *");
    printf("*                                                                              *");
    printf("*                                ���������                                     *");
    printf("*                                                                              *");
    printf("*                                  �����                                       *");
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
                printf("*                               ������� ����                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                           -->  ����� ����  <--                               *");
                printf("*                                                                              *");
                printf("*                                ����������                                    *");
                printf("*                                                                              *");
                printf("*                                ���������                                     *");
                printf("*                                                                              *");
                printf("*                                  �����                                       *");
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
                printf("*                               ������� ����                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                ����� ����                                    *");
                printf("*                                                                              *");
                printf("*                           -->  ����������  <--                               *");
                printf("*                                                                              *");
                printf("*                                ���������                                     *");
                printf("*                                                                              *");
                printf("*                                  �����                                       *");
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
                printf("*                               ������� ����                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                ����� ����                                    *");
                printf("*                                                                              *");
                printf("*                                ����������                                    *");
                printf("*                                                                              *");
                printf("*                           -->  ���������  <--                                *");
                printf("*                                                                              *");
                printf("*                                  �����                                       *");
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
                printf("*                               ������� ����                                   *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                                                              *");
                printf("*                                ����� ����                                    *");
                printf("*                                                                              *");
                printf("*                                ����������                                    *");
                printf("*                                                                              *");
                printf("*                                ���������                                     *");
                printf("*                                                                              *");
                printf("*                             -->  �����  <--                                  *");
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
    int choose = 0, but_pos;
    system("cls");
    printf("/***********************************�������************************************\\ \n");
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

    do{
        printf("                           �� ���������� � ������                   \n");
        printf("�� ������ �����������:\n\n");
        printf(" - �������  <--\n");
        printf(" - �������\n");
        printf(" - ��������� � ���������\n\n\n\n");
        printf(" - ����� �� ����\n");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

        while(map_but != 'e'){
            map_but = getch();
            if(map_but == 's')
                but_pos += 1;
            else if(map_but == 'w')
                but_pos -= 1;

            if(but_pos < 1)
                but_pos = 4;
            else if(but_pos > 4)
                but_pos = 1;

            switch(but_pos){
                case 1:
                    system("cls");
                    printf("                           �� ���������� � ������                   \n");
                    printf("�� ������ �����������:\n\n");
                    printf(" - �������  <--\n");
                    printf(" - ������� \n");
                    printf(" - ��������� � ���������\n\n\n\n");
                    printf(" - ����� �� ����\n");
                    break;
                case 2:
                    system("cls");
                    printf("                           �� ���������� � ������                   \n");
                    printf("�� ������ �����������:\n\n");
                    printf(" - ������� \n");
                    printf(" - �������  <--\n");
                    printf(" - ��������� � ���������\n\n\n\n");
                    printf(" - ����� �� ����\n");
                    break;
                case 3:
                    system("cls");
                    printf("                           �� ���������� � ������                   \n");
                    printf("�� ������ �����������:\n\n");
                    printf(" - ������� \n");
                    printf(" - �������\n");
                    printf(" - ��������� � ���������  <--\n\n\n\n");
                    printf(" - ����� �� ����\n");
                    break;
                case 4:
                    system("cls");
                    printf("                           �� ���������� � ������                   \n");
                    printf("�� ������ �����������:\n\n");
                    printf(" - ������� \n");
                    printf(" - �������\n");
                    printf(" - ��������� � ���������\n\n\n\n");
                    printf(" - ����� �� ����  <--\n");
                    break;
            }
            map_but = getch();
        }



        switch(but_pos){
            case 1:
                //Shop(); //������� �����
                break;
            case 2:
               //Trakt();  //������� ������� � ��������� ������
                break;
            case 3:
                Start(HP,Dmg, Stamina,Potion);
                break;
            case 4:
                return;
                break;
        }
    }while(map_but != '');
}
/////////////////////////////////////////////////////////////////////////////////////////
void Start(int HP, int Dmg, int Stamina, int Potion)
{
    int Enemy_HP, Enemy_Dmg, Enemy_Stamina, back;


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

        int *hp = HP,
        *dmg = Dmg,
        *stam = Stamina;


        back = Battle(HP, Dmg, Stamina, Enemy_HP, Enemy_Dmg, Enemy_Stamina);
        if(back == 1)
            break;

    }while( HP > 0);
}
/////////////////////////////////////////////////////////////////////////////////////////
int Hero_choose(){
    char chs;
    printf("                  ��������     ����     ������������\n\n");
    printf("1)����               300        20           100\n");
    printf("2)���                 80        40            80\n");
    printf("3)����               150        10           200\n");
    printf("\n   �����: ");
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
            default: printf("   ����� �� ������������ ��������\n�����: ");
        }
        printf("   ����� �� ������������ ��������\n�����: ");
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
int Battle(int HP, int Dmg, int Stamina, int Enemy_HP, int Enemy_Dmg, int Enemy_Stamina)
{
    int Potion, exit, mp;
    exit = 0;
    char button;
    //system("cls");
    printf("\n*******************************����� ����������*********************************");

        while (Enemy_HP > 0)
        {
            //system("cls");
            printf("\n                    ���             ����������\n");
            printf("��������             %3d                 %3d\n",HP, Enemy_HP);
            printf("����                 %3d                 %3d\n",Dmg, Enemy_Dmg);
            printf("������������         %3d                 %3d\n",Stamina, Enemy_Stamina);
            if ( HP <= 0) break;
            printf("\n///////// 1 - ����� ///////// 2 - ���������� ��� ///////// 3 - ������� /////////");
            printf("/////////////////////////////// I - �������� /////////////// M - ����� /////////\n");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("   ");
            button = getch();
            system("cls");

            if (Stamina == 0 && button == '1')
            {
                printf("� ��� �� ���������� ������������, �������� ������ ��������\n");
                while (button == '1')
                    button = getch();
            }

            switch(button)
            {
                case '1':
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


                    break;
                case '2':
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

                    break;
                case '3':
                    exit = 1;
                    break;
                case 'i':
                    Inventory();
                    printf("\n\n");
                    break;
                case 'm':
                    mp = PocketMap();
                    if(mp == 1)
                        return 1;
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
////////////////////////////////////////////////////////////////////////////////////////////
int Inventory(){
    char inv_but;
    int but_pos = 1;
    printf("                                   ���������\n\n");
    printf("                                                             ����� 100\n");
    printf("- ����� �������� 0 ��.     <--\n");
    printf("- ����� ������������ 0 ��. \n");
    printf("- ��� 0 ��. \n");
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
                printf("                                   ���������\n\n");
                printf("                                                             ����� 100\n");
                printf("- ����� �������� 0 ��.  <--\n");
                printf("- ����� ������������ 0 ��.\n");
                printf("- ��� 0 ��. \n");
                break;
            case 2:
                system("cls");
                printf("                                   ���������\n\n");
                printf("                                                             ����� 100\n");
                printf("- ����� �������� 0 ��.     \n");
                printf("- ����� ������������ 0 ��. <--\n");
                printf("- ��� 0 ��. \n");
                break;
            case 3:
                system("cls");
                printf("                                   ���������\n\n");
                printf("                                                             ����� 100\n");
                printf("- ����� �������� 0 ��.\n");
                printf("- ����� ������������ 0 ��. \n");
                printf("- ��� 0 ��.  <--\n");
                break;
        }
    }
}

int PocketMap(){
    char map_but;
    int but_pos = 1;
    printf("                                     �����\n\n");
                printf("- �����  <--\n");
                printf("- �����\n");
    while(map_but != 'e'){
        map_but = getch();
        if(map_but == 's')
            but_pos += 1;
        else if(map_but == 'w')
            but_pos -= 1;

        if(but_pos < 1)
            but_pos = 2;
        else if(but_pos > 2)
            but_pos = 1;

        switch(but_pos){
            case 1:
                system("cls");
                printf("                                     �����\n\n");
                printf("- �����  <--\n");
                printf("- �����\n\n\n");
                break;
            case 2:
                system("cls");
                printf("                                     �����\n\n");
                printf("- ����� \n");
                printf("- ����� <--\n\n\n");
                break;
        }
    }
    if(but_pos == 1)
        return 1;
}

