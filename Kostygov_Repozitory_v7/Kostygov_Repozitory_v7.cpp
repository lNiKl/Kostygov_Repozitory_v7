#include <iostream>
#include <cmath>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <locale>
using namespace std;
void Print_Menu()
{

    system("cls"); // очищаем экран
    cout << "Выбор операции:" << endl;
    cout << "1. Ввести положительное число А: " << endl;
    cout << "2. Вычислить площадь равностороннего треугольника S = а2*Sqrt(3)/4: " << endl;
    cout << "3. Вычислить периметр равностороннего треугольника Р = 3*a: " << endl;
    cout << "4. Выход" << endl;
    cout << ">";
}
int a = 0;
void Menu_1()
{
    system("cls");
    cout << "Введите положительное число А: " << endl;
    while (!(cin >> a) || (cin.peek() != '\n') || (a < 0 ))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Сторона треугольника должна быть положительной! Попробуйте снова: ";// выводим сообщение об ошибке
    }
    cout << "Сторона треугольника: " << a << endl;
    
}
void Menu_2()
{
    system("cls");
    double S;
    cout << "Площадь равностороннего треугольника S = а2*Sqrt(3)/4: " << endl;
    if (a != 0 )
        S =  a * a * sqrt(3) / 4;
    else cout << "Для начала введите длину стороны треугольника! " << endl;
    cin >> S; cout << endl;
}
void Menu_3()
{
    system("cls");
    double P;
    cout << "Периметр равностороннего треугольника Р = 3 * a: " << endl;
    if (a != 0)
        P = a * 3;
    else cout << "Для начала введите длину стороны треугольника! " << endl;
    cin >> P; cout << endl;
}
int get_variant(int count) {
    int variant; // считываемый номер пункта меню
    // пока ввод некорректен, сообщаем об этом и просим повторить его
    while (!(cin >> variant) || (cin.peek() != '\n') || (variant < 0 || variant>count))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Некоректный ввод. Попробуйте снова: ";// выводим сообщение об ошибке
    }
    return variant;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int variant;
    do
    {
        Print_Menu();
        variant = get_variant(4);
        switch (variant)
        {
        case 1:
            Menu_1();
            break;
        case 2:
            Menu_2();
            break;
        case 3:
            Menu_3();
            break;
        }
        if (variant != 4)
        {
            cout << ">";
            while (!_kbhit());
        }
    } while (variant != 4);
}
