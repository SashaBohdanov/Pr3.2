﻿#include <iostream>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    if (a < 0 && c != 0)
        F = (a * x * x + b * x + c);
    else if (a > 0 && c == 0)
        F = (-a) / (x - b);
    else
        F = (a * (x + c));

    cout << endl;
    cout << "1) F = " << F << endl;

    // спосіб 2: розгалуження в повній формі
    if (a < 0 && c != 0)
        F = (a * x * x + b * x + c);
    else 
        if (a > 0 && c == 0)
          F = (-a) / (x - b);
         else
             F = (a * (x + c));

    cout << "2) F = " << F << endl;

    cin.get();
    return 0;
}
