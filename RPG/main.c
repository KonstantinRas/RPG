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
    printf("/************************************�����*************************************\\ \n");
    printf("    ������ ������ ���������:\n");
    choose = Hero_choose();
    switch(choose){
        case 1:
            printf("�� ������� �����\n");
            Health = 150;
            Damage = 20;
            Stamina = 100;
            break;
        case 2:
            printf("�� ������� ����\n");
            Health = 80;
            Damage = 15;
            Stamina = 75;
            break;
        case 3:
            printf("����, �������!\n");
            Health = 50;
            Damage = 10;
            Stamina = 200;
            break;
    }

    Battle(Health, Damage, Stamina);
}

int Hero_choose(){
    int chs = 0;
    printf("                  ��������     ����     ������������\n\n");
    printf("1)����               150        20           100\n");
    printf("2)���                 80        15            75\n");
    printf("3)����                50        10           200\n");
    printf("\n�����: ");
    scanf("%d", &chs);
    while(chs < 1 || chs > 3){
        printf("����� �� ������������ ��������\n�����: ");
        scanf("%d", &chs);
    }
    return chs;
}

void Battle(int Health, int Damage, int Stamina){
    int Enemy_Health = 50, exit = 1,
    Enemy_Damage = 5, button,
    Enemy_Stamina = 40;
    printf("\n\n����������: 1 - ���� 2 - ������\n���� ���� �������� 10 ����� ������������, ������ �������� 5 ����� ������������\n");
    printf("\n*******************************����� ����������*********************************");
    while(exit == 1){
        printf("                    ���           ����������\n");
        printf("��������             %d                 %d\n",Health, Enemy_Health);
        printf("������������         %d                 %d\n",Stamina, Enemy_Stamina);
        printf("����                 %d                  %d\n",Damage, Enemy_Damage);
        scanf("%d", &button);
    }
}


