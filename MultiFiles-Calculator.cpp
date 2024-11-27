#include <iostream>
#include <string>
#include <Windows.h>
#include "sMath.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    double a = 0, b = 0;
    int c = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;

    switch (c)
    {
        case 1:
        {
            std::cout << a << " плюс " << b << " = " << add(a, b) << std::endl;
            break;
        }
        case 2:
        {
            std::cout << a << " минус " << b << " = " << sub(a, b) << std::endl;
            break;
        }
        case 3:
        {
            std::cout << a << " умножить на " << b << " = " << mult(a, b) << std::endl;
            break;
        }
        case 4:
        {
            std::cout << a << " делить на " << b << " = " << div(a, b) << std::endl;
            break;
        }
        case 5:
        {
            std::cout << a << " в степени " << b << " = " << expPow(a, b) << std::endl;
            break;
        }
        default:
        {
            std::cout << "Введен неверный номер операции!\nПопробуйте снова\n" << std::endl;
        }
    }
}
