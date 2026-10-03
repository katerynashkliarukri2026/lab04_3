// Lab_04_3.cpp
// Шклярук Катерина
// Лабораторна робота № 4.3
// Табуляція функції, заданої формулою: функція з параметрами
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double xStart, xEnd, dx;
    double F;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "X_start = ";
    cin >> xStart;

    cout << "X_end = ";
    cin >> xEnd;

    cout << "dX = ";
    cin >> dx;

    cout << "\n";
    cout << setw(10) << "x"
        << setw(15) << "F" << endl;

    cout << "------------------------" << endl;

    for (double x = xStart; x <= xEnd; x += dx)
    {
        if (x < 1 && c != 0)
        {
            F = a * x * x + b / c;
        }
        else if (x > 1.5 && c == 0)
        {
            F = (x - a) / ((x - c) * (x - c));
        }
        else if (c != 0)
        {
            F = (x * x) / (c * c);
        }
        else
        {
            cout << setw(10) << x
                << setw(15) << "not defined" << endl;
            continue;
        }

        cout << fixed << setprecision(4);
        cout << setw(10) << x
            << setw(15) << F << endl;
    }

    return 0;
}