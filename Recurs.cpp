// Автор: Игонин Владимир ИВТ-23
// Задание: Написать функцию умножения двух чисел, используя только операцию сложения.

#include <iostream>
#include "Multiply.h"
#include <clocale>
#include <string>

using namespace std;

void main_without_args()
{
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "\nb = ";
    cin >> b;
    cout << "\n" << RecMultiply(a, b);
}

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    Rectest();
    if (argc == 1)
    {
        main_without_args();
        return 0;
    }
    if ((argc == 2) || (argv[1] == "-h") || (argv[1] == "--h"))
    {
        cout << "Программа выполняет умножение двух целых чисел\n" << "1 аргумент: Первое число\n" << "1 аргумент: Второе число\n";
        return 0;
    }
    if (argc == 3)
    {
        cout << RecMultiply(stoi(argv[1]), stoi(argv[2]));
        return 0;
    }
    else
    {
        cout << "Программа выполняет умножение двух целых чисел\n" << "1 аргумент: Первое число\n" << "1 аргумент: Второе число\n";
        return 1;
    }
}