#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main()
{
    setlocale(LC_CTYPE,"rus");
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
    return 0;
}
