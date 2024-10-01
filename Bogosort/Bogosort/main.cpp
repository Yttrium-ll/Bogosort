// Bogosort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Bogosort.h"

int main()
{
    vector<int> vec(3, 0);
    bogosort(vec);
    std::cout << "Hello World!\n";
}