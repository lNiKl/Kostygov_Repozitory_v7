#include <iostream>
#include <cmath>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <locale>
#include <string>
using namespace std;
double AreaTriangle(int a)
{
    return a * a * sqrt(3) / 4;
}
double PerimetrTriangle(int a)
{
    return a * 3;
}
bool User_Inpyt(string input)
{
    if (input.empty()) return false;
    try
    {
        int number = stoi(input);
        if (number <= 0) return false;
    }
    catch (...)
    {
        return false;
    }
    return true;
}
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
    string str_input;

    cout << "Введите длину стороны равностороннего треугольника: " << endl;
    getline(cin, str_input);

    while (!User_Inpyt(str_input))
    {
        cout << "Повторите попытку!" << endl;
        getline(cin, str_input);
    }
    a = stoi(str_input);
    
}
void Menu_2()
{
    system("cls");
    double S;
    cout << "Площадь равностороннего треугольника S = а2*Sqrt(3)/4: " << endl;
    AreaTriangle(a);
    cout << S << endl;;
}
void Menu_3()
{
    system("cls");
    double P;
    cout << "Периметр равностороннего треугольника Р = 3 * a: " << endl;
    PerimetrTriangle(a);
    cout << P << endl;
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
