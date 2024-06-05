/*
Количество элементов, которые больше предыдущего
Последовательность состоит из натуральных чисел и завершается числом 0. Определите, сколько элементов этой последовательности больше предыдущего элемента.

Входные данные
Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит признаком её окончания).

Выходные данные
Выведите ответ задачи.

Примеры
Ввод
1
7
9
0

Вывод
2

*/

#include <iostream>

using namespace std;
int main() {
    int num, prev, answer = 0;
    cin >> num;
    prev = num;
    while (num > 0) {
        if (num > prev) {
            answer++;
        }
        prev = num;
        cin >> num;
    }
    cout << answer;
}