#include <iostream>
#include <conio.h>
#include "Functions.h"
#include "Handbook.h"
using namespace std;

int main()
{
    int hdsize = 10;
    Handbook* hdarr = new Handbook[hdsize];

    bool exit = false;

    for (;;)
    {
        PrintMenu();

        int choice = _getch();

        switch (choice)
        {
        case '1':
            system("cls");
            hdarr[hdarr[0].GetCount()].Add();
            break;
        case '2':
            system("cls");
            CompanySearch(hdarr);
            break;
        case '3':
            system("cls");

            break;
        case '4':
            system("cls");

            break;
        case '5':
            system("cls");

            break;
        case '6':
            system("cls");

            break;
        case '7':
            system("cls");
            hdarr[0].SaveFile(hdarr,hdsize);
            hdarr[0].Print();
            system("pause");
            break;
        case '8':
            exit = true;
            break;
        }

        if (exit)
        {
            break;
        }
    }
    delete[]hdarr;
    return 0;
}
