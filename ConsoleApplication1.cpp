﻿// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    double a = 0, b = 0, h = 0, c = 0;

    cout << "введите высоту столба h : " << endl;
    cin >> h;
    cout << "введите высоту поднятия a : " << endl;
    cin >> a;
    cout << "введите высоту спуска b : " << endl;
    cin >> b;

    // Вычисляем количество дней, используя формулу для улитки
    c = ((h - a) / (a - b)) + 1;
    c = ceil(c); // Округляем вверх до ближайшего целого числа

    cout << "улитка доползет до конца за " << c << " дней";

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
