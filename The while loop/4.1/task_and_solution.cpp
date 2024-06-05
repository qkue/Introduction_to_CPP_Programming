/*
Второй минимум
Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго минимального по величине элемента в этой последовательности, то есть элемента, который будет наименьшим, если из последовательности удалить наименьший элемент.

Последнее число 0 не учитывается. Гарантируется, что в последовательности есть хотя бы два элемента (кроме завершающего числа 0).

Входные данные
На вход подаётся последовательность целых неотрицательных чисел, заканчивающаяся нулём. Все числа в последовательности по значению не превосходят 10^9.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
1
7
9
0
Вывод
7

Ввод
3
2
2
1
1
0
Вывод
1

*/

#include <iostream>

using namespace std;
int main() {
    int first_min, second_min;
    cin >> first_min >> second_min;
    if (first_min > second_min) {
        first_min = first_min + second_min;
        second_min = first_min - second_min;
        first_min = first_min - second_min;
    }
    int number;
    cin >> number;
    while (number > 0) {
        if (number < first_min) {
            second_min = first_min;
            first_min = number;
        } else if (number < second_min) {
            second_min = number;
        }
        cin >> number;
    }
    cout << second_min;
}