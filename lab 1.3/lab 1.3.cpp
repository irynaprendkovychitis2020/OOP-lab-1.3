﻿// lab 1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
    Rational l, r, D;
    l.setA(3);
    l.setB(4);
    r.setA(2);
    r.setB(5);
    l.Read();
    l.Display();
    r.Read();
    r.Display();
    if (D.great(l, r))
        cout << "the value is greater" << endl;
    if (D.equal(l, r))
        cout << "values are equal" << endl;
    else 
        cout << "values are not equal" << endl;
    if (D.less(l, r))
        cout << "the value is smaller" << endl;
    cout << "div = " << D.div(l,r) << endl << endl;
    
    
  
    cin.get();
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
