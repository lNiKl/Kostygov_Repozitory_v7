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
int a;
void Menu_1()
{
    system("cls");
    
    cout << "Введите положительное число А: " << endl;
    cin >> a; cout << endl;
}
void Menu_2()
{
    system("cls");
}
void Menu_3()
{
    system("cls");
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
