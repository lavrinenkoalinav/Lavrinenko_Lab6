#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double num1;
    double num2;
    cout << "Введіть значення" << endl;
    cin >> num1 >> num2;

    double* Num1 = &num1;
    double* Num2 = &num2;

    double result = *Num1 / *Num2;

    cout << "Результат ділення 1 числа на 2:" << result << endl;
    return 0;
}
