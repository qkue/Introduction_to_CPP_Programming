/*
Линейное уравнение
Даны числа a и b. Решите в целых числах уравнение ax+b=0. Выведите все целочисленные решения этого уравнения, если их число конечно, выведите слово NO, если решений нет, выведите слово INF, если целочисленных решений бесконечно много.

Входные данные
Вводятся два целых числа, не превышающих 30000 по абсолютному значению.

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
6
-2
Вывод
NO

Ввод
1
-7
Вывод
7

*/

#include <iostream>
#include <string>

using namespace std;
int main() {
    int a, b;
    string text;
    text = "NO";
    cin >> a >> b;
    if (a == 0) {
        if (b == 0) {
            text = "INF";
        }
        }
    else {
        if (b % a == 0) {
            text = to_string(-b / a);
        }
    }
    cout << text;

    }