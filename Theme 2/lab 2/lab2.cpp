#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cout<<"Insert number of month ";
    cin>>x;
    switch(x)
    {
    case 12:
    case 1:
    case 2:
        cout<<"Winter"<<endl;
        break;
         case 3:
    case 4:
    case 5:
        cout<<"Spring"<<endl;
        break;
         case 6:
    case 7:
    case 8:
        cout<<"Summer"<<endl;
        break;
         case 9:
    case 10:
    case 11:
        cout<<"Autumm"<<endl;
        break;
    default:
        cout<<"This month does not exist"<<endl;
    }
    _getch();
    return 0;
}
