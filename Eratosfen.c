#include "stdafx.h"
#include <iostream> // ввод и вывод данных
#include <iomanip> // форматирование вывода
using namespace std; // пространство имен для ограничения переменных 
 
int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    int n; // правая граница интервала
    cout << "Введите число - N: "; // cout cin традиционный ввод-вывод данных
    cin >> n;
 
    int size_array = n - 2; // так как первое простое число - это 2, то размер массива уменьшаем на 2, так как 0 и 1 не в счёт     
    int *arrayPtr = new int [size_array]; // создаём одномерный динамический массив размером n - 2
 
    for(int counter = 0; counter <= size_array; counter++)
    {
        arrayPtr[counter] = counter + 2; // записываем в массив все числа в интервале [2;n]
    }
    int p = 2; // первое простое число
    int index = 0; // переменная  для прохода по элементам массива
 
    // в цикле while реализовано решето Эратосфена
    while (p < n) // пока значение переменной p меньше введённого n
    {
        // в цикле for отсеиваем составные числа
        for (int counter = p*p - 2; counter <= size_array; counter += p)
        {
            arrayPtr[counter] = -1; // на места составных чисел присваиваем значение -1
        }
 
        // в цикле while изменяем значение переменной p
        while (arrayPtr[index] <= p ) // пока значение из массива чисел меньше либо равно значению переменной p
        {
            index++; // переключаться на следующий элемент массива
        }
        p = arrayPtr[index]; // нужное значение массива найдено, поэтому присваиваем его переменной p
    } // конец алгоритма Эратосфена
 
    // вывод на экран простых чисел
    for(int counter = 0; counter <= n - 2; counter++)
    {
        if (arrayPtr[counter] != -1) // если элемент массива не равен -1
        cout << setw(2) << arrayPtr[counter] << " "; // сделать вывод на экран
    }
 
    cout << endl;
    system("pause");
    return 0;
}