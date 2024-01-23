#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        setlocale(LC_ALL, "RUS");
        cout << "Выберите операцию:\n1 (Сложение)\n2 (вычитание)\n3 (деление)\n4 (умножение)\n5 (Возведение в степень)\n6 (корень)\n7 (нахождение 1 процента)\n8 (факториал)\n9 (выход из программы)\n";
        double a, b;
        double result = 0;
        int r;
        cin >> r;
        switch (r)
        {
        case 1:
            system("cls");
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a + b;
            cout << "Результат: " << result << "\n";
            break;
        case 2:
            system("cls");
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a - b;
            cout << "Результат: " << result << "\n";
            break;
        case 3:
            system("cls");
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            if (b > 0)
            {
                result = a / b;
                cout << "Результат: " << result << "\n";
            }
            else
            {
                cout << "Делить на ноль нельзя\n";
            }
            break;
        case 4:
            system("cls");
            cout << "Введите первое число: ";
            cin >> a;
            cout << "Введите второе число: ";
            cin >> b;
            result = a * b;
            cout << "Результат: " << result << "\n";
            break;
        case 5:
            system("cls");
            cout << "Введите число: ";
            cin >> a;
            cout << "Введите степень: ";
            cin >> b;
            result = pow(a, b);
            cout << "Результат: " << result << "\n";
            break;
        case 6:
            system("cls");
            cout << "Введите число: ";
            cin >> a;
            if (a > 0)
            {
                result = sqrt(a);
                cout << "Результат: " << result << "\n";
            }
            else
                cout << "Введено неккоректное число\n";
            break;
        case 7:
            system("cls");
            cout << "Введите число: ";
            cin >> a;
            result = a / 100;
            cout << "Результат: " << result << "\n";
            break;
        case 8:
            system("cls");
            cout << "Введите число: ";
            cin >> a;
            if (a > 0)
            {
                result = 1;
                for (int i = 1; i <= a; i++)
                {
                    result = result * i;
                }
                cout << "Результат: " << result << "\n";
            }
            else
            {
                cout << "Введено неккоректное число\n";
            }
            break;
        case 9:
            system("cls");
            exit(0);
            break;
        default:
            system("cls");
            cout << "Введено неправильное действие\n";
        }
    }
}