/*
Факториал
По данному целому неотрицательному n вычислите значение n!.

Входные данные
Вводится число n (0⩽n⩽15).

Выходные данные
Выведите ответ к задаче.

Примеры
Ввод
3

Вывод
6

*/

#include <iostream>

int main() {
    int n;
    std::cin >> n;
    long long answer = 1;
    for (int i = 1; i <= n; i++) {
        answer *= i;
    }
    std::cout << answer;
}