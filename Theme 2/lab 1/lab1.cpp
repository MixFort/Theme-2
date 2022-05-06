#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <clocale>
#include <cmath>
using namespace std;
int main()
{
    double x, y;
    bool z;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    z=(x*x+y*y)>1 || ((x)>0 && (y)<0);
    if (z) cout<<"Point not hit"<<endl;
    else cout<<"Point hit"<<endl;
    _getch();
    return 0;
}
